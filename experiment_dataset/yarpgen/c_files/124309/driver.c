#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11186;
int var_1 = -1192515805;
short var_8 = (short)22128;
unsigned short var_11 = (unsigned short)44381;
int zero = 0;
unsigned short var_19 = (unsigned short)63598;
short var_20 = (short)-20397;
short var_21 = (short)16292;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
