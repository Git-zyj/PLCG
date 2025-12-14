#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31517;
int var_7 = -891164677;
short var_9 = (short)-30679;
short var_10 = (short)6219;
unsigned short var_12 = (unsigned short)24386;
int var_14 = -28100485;
int zero = 0;
int var_15 = -447029061;
unsigned short var_16 = (unsigned short)10846;
unsigned char var_17 = (unsigned char)43;
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
