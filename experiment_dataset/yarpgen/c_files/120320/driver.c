#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
int var_1 = 1611031342;
unsigned long long int var_2 = 17902896389725532198ULL;
unsigned short var_4 = (unsigned short)22870;
unsigned long long int var_6 = 16118766380676122617ULL;
signed char var_8 = (signed char)-68;
signed char var_9 = (signed char)-117;
long long int var_10 = 2279943195363870951LL;
short var_11 = (short)-10189;
int zero = 0;
int var_13 = 80250620;
int var_14 = -1228880527;
int var_15 = 1463229535;
unsigned int var_16 = 3096408308U;
_Bool var_17 = (_Bool)0;
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
