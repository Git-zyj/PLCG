#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47138;
short var_1 = (short)-25876;
long long int var_2 = -3745745470397729262LL;
int var_5 = -1080352309;
short var_14 = (short)23564;
int zero = 0;
unsigned short var_15 = (unsigned short)53391;
unsigned int var_16 = 1390052741U;
unsigned short var_17 = (unsigned short)18939;
unsigned short var_18 = (unsigned short)28317;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
