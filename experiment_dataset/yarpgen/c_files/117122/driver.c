#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -398007034;
unsigned int var_2 = 430510848U;
unsigned char var_3 = (unsigned char)236;
short var_5 = (short)-15568;
short var_6 = (short)4267;
unsigned int var_7 = 1153346253U;
unsigned long long int var_8 = 6108035171233281674ULL;
int var_9 = 1799319593;
int zero = 0;
short var_11 = (short)31549;
short var_12 = (short)-6204;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2044378189U;
unsigned long long int var_15 = 6086581806471392608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
