#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14475405369320272594ULL;
unsigned long long int var_1 = 15668291330949873419ULL;
unsigned long long int var_2 = 3781893870618161557ULL;
unsigned int var_4 = 3221245450U;
unsigned int var_7 = 2812545195U;
long long int var_8 = 3642875560733103561LL;
unsigned int var_11 = 1542301017U;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1831093802;
unsigned char var_15 = (unsigned char)97;
long long int var_16 = 6706191172640852464LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
