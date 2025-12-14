#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -405620067;
short var_5 = (short)-25506;
int var_6 = -218772025;
unsigned short var_9 = (unsigned short)59475;
int var_13 = 1402731401;
int zero = 0;
unsigned int var_15 = 3731523608U;
int var_16 = 59683699;
void init() {
}

void checksum() {
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
