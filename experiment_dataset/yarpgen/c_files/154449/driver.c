#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_10 = 3106922362093568775ULL;
int zero = 0;
unsigned int var_11 = 3173643738U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 906939930347577276ULL;
int var_14 = 592020184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
