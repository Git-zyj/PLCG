#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)24769;
unsigned int var_2 = 2880144366U;
unsigned short var_3 = (unsigned short)3727;
unsigned int var_4 = 2234214349U;
int var_5 = 324011487;
unsigned long long int var_6 = 9612296702170362552ULL;
unsigned long long int var_7 = 18067473898566028858ULL;
unsigned short var_8 = (unsigned short)35809;
unsigned short var_9 = (unsigned short)46766;
int zero = 0;
short var_10 = (short)-29048;
unsigned short var_11 = (unsigned short)26046;
unsigned int var_12 = 3909052469U;
int var_13 = -228739959;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
