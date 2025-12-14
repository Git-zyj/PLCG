#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 259784381;
unsigned short var_3 = (unsigned short)55135;
short var_4 = (short)-30898;
short var_5 = (short)-25416;
short var_13 = (short)25557;
int zero = 0;
unsigned int var_15 = 2405917907U;
unsigned short var_16 = (unsigned short)29017;
unsigned char var_17 = (unsigned char)131;
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
