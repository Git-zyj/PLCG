#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)168;
short var_11 = (short)26905;
unsigned short var_13 = (unsigned short)29498;
unsigned int var_17 = 2451287828U;
int zero = 0;
short var_19 = (short)16763;
short var_20 = (short)5496;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
