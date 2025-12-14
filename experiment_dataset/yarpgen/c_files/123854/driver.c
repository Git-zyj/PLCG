#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6311548199829826119ULL;
int var_1 = 768798706;
unsigned long long int var_2 = 3708265637505656515ULL;
int var_5 = 1946845397;
unsigned long long int var_7 = 4258967287969036875ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 16345564963500563648ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53442;
unsigned long long int var_16 = 7469644171967298520ULL;
unsigned short var_17 = (unsigned short)36453;
void init() {
}

void checksum() {
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
