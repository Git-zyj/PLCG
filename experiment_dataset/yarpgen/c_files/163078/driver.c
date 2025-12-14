#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
short var_2 = (short)-13155;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = -2037624876;
unsigned int var_8 = 3411244225U;
signed char var_10 = (signed char)-106;
int zero = 0;
unsigned char var_12 = (unsigned char)213;
long long int var_13 = -2426483126596339339LL;
unsigned long long int var_14 = 12366055512216235724ULL;
short var_15 = (short)-29594;
short var_16 = (short)-4840;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
