#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2406;
short var_1 = (short)364;
unsigned short var_2 = (unsigned short)11632;
unsigned int var_6 = 4050209071U;
unsigned short var_7 = (unsigned short)12207;
short var_8 = (short)30843;
signed char var_13 = (signed char)-15;
int zero = 0;
unsigned long long int var_15 = 8194403421705189166ULL;
unsigned int var_16 = 3749020239U;
unsigned long long int var_17 = 9377763085610613252ULL;
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
