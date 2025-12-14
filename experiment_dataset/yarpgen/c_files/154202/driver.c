#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)364;
unsigned int var_6 = 2901084862U;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)24678;
unsigned long long int var_11 = 2879048848749684857ULL;
short var_12 = (short)-21230;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
