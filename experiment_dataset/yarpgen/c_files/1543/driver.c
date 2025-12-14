#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned short var_6 = (unsigned short)20205;
unsigned char var_9 = (unsigned char)103;
unsigned short var_12 = (unsigned short)58957;
int zero = 0;
unsigned short var_14 = (unsigned short)47481;
short var_15 = (short)-9041;
unsigned long long int var_16 = 16708106688214375091ULL;
short var_17 = (short)-24009;
void init() {
}

void checksum() {
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
