#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2147268828;
int var_1 = 152731827;
unsigned short var_2 = (unsigned short)6274;
int var_3 = 561609718;
unsigned long long int var_11 = 4906681480481869662ULL;
unsigned int var_13 = 132312005U;
int var_15 = 60277170;
unsigned short var_16 = (unsigned short)25986;
int var_18 = 372378980;
int zero = 0;
unsigned short var_20 = (unsigned short)59733;
unsigned short var_21 = (unsigned short)29909;
unsigned int var_22 = 4166401132U;
unsigned int var_23 = 1959163523U;
void init() {
}

void checksum() {
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
