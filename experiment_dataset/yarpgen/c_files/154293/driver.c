#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29989;
short var_6 = (short)7728;
unsigned short var_13 = (unsigned short)53102;
short var_17 = (short)-30481;
int zero = 0;
unsigned int var_18 = 437105531U;
unsigned char var_19 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
