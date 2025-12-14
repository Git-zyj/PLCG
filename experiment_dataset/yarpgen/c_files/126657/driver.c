#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)26;
int var_8 = -1413994770;
unsigned short var_12 = (unsigned short)24719;
unsigned char var_13 = (unsigned char)61;
int zero = 0;
short var_15 = (short)4087;
unsigned int var_16 = 3965677323U;
int var_17 = 1061712830;
short var_18 = (short)5122;
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
