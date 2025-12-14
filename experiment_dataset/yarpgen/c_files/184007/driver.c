#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 272975809540494338ULL;
unsigned long long int var_14 = 7161416003414604732ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-6815;
unsigned char var_21 = (unsigned char)118;
signed char var_22 = (signed char)-46;
unsigned long long int var_23 = 17919089010911399122ULL;
int var_24 = 1908777645;
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
