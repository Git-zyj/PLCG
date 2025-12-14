#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25795;
_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6008175811321750300ULL;
unsigned char var_11 = (unsigned char)14;
_Bool var_13 = (_Bool)1;
int var_14 = 2079716938;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
