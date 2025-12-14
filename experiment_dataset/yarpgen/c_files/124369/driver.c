#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1104045011;
int var_3 = 1693104847;
unsigned short var_6 = (unsigned short)52280;
short var_8 = (short)-24046;
short var_11 = (short)5512;
int zero = 0;
short var_12 = (short)-30068;
unsigned long long int var_13 = 12105942647997859299ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
