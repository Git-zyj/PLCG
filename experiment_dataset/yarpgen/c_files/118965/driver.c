#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 4510289248622325805ULL;
unsigned short var_2 = (unsigned short)14541;
unsigned short var_3 = (unsigned short)54949;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1577428377U;
signed char var_11 = (signed char)20;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
unsigned char var_13 = (unsigned char)222;
unsigned long long int var_14 = 9670864416584221712ULL;
unsigned short var_15 = (unsigned short)38023;
unsigned long long int var_16 = 16742352975066780540ULL;
unsigned long long int var_17 = 7283016876618897563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
