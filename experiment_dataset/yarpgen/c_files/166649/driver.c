#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9631;
short var_2 = (short)-1739;
unsigned short var_6 = (unsigned short)43981;
unsigned int var_9 = 20753076U;
short var_14 = (short)31065;
int zero = 0;
int var_15 = -1569328678;
unsigned int var_16 = 1914647828U;
unsigned short var_17 = (unsigned short)53776;
unsigned short var_18 = (unsigned short)19214;
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
