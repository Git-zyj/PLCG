#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)3;
signed char var_6 = (signed char)103;
unsigned long long int var_12 = 15966876392224406127ULL;
unsigned long long int var_13 = 13190064952658751775ULL;
unsigned short var_16 = (unsigned short)55630;
unsigned long long int var_17 = 16772505852827706379ULL;
unsigned long long int var_19 = 13348270183019681240ULL;
int zero = 0;
int var_20 = 439752933;
signed char var_21 = (signed char)-74;
short var_22 = (short)18048;
short var_23 = (short)29820;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
