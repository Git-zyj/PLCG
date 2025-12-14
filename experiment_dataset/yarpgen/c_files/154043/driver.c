#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29196;
short var_1 = (short)13788;
unsigned char var_4 = (unsigned char)217;
unsigned char var_6 = (unsigned char)185;
short var_15 = (short)7331;
int zero = 0;
short var_16 = (short)7891;
unsigned short var_17 = (unsigned short)12216;
unsigned short var_18 = (unsigned short)34616;
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
