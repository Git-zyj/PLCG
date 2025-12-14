#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16956222879563539896ULL;
_Bool var_10 = (_Bool)1;
signed char var_17 = (signed char)18;
int zero = 0;
short var_19 = (short)22620;
short var_20 = (short)18634;
unsigned char var_21 = (unsigned char)115;
signed char var_22 = (signed char)-45;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
