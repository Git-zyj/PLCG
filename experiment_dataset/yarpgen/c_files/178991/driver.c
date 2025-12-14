#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
signed char var_3 = (signed char)90;
unsigned long long int var_6 = 16296271056997447847ULL;
signed char var_8 = (signed char)-53;
unsigned long long int var_12 = 11756569401624510853ULL;
int zero = 0;
unsigned long long int var_13 = 6220925513844794469ULL;
signed char var_14 = (signed char)-34;
unsigned long long int var_15 = 1693640795802666686ULL;
unsigned short var_16 = (unsigned short)31968;
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
