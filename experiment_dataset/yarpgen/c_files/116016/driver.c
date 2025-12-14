#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62992;
unsigned long long int var_6 = 1226948036536140470ULL;
unsigned char var_12 = (unsigned char)54;
int zero = 0;
unsigned long long int var_15 = 9719335078515285223ULL;
signed char var_16 = (signed char)91;
short var_17 = (short)20553;
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
