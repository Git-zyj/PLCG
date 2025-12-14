#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2982125925607337058ULL;
long long int var_1 = -9016937057847648515LL;
unsigned long long int var_2 = 1807089374016410339ULL;
signed char var_4 = (signed char)49;
unsigned int var_5 = 2277248005U;
short var_7 = (short)-4276;
int var_9 = -2103924019;
long long int var_11 = -4977061098604329683LL;
signed char var_12 = (signed char)-98;
signed char var_13 = (signed char)23;
unsigned short var_14 = (unsigned short)63666;
int zero = 0;
short var_16 = (short)18126;
int var_17 = 1682425165;
unsigned int var_18 = 763768422U;
void init() {
}

void checksum() {
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
