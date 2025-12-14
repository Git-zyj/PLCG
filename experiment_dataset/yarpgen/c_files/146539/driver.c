#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)57806;
unsigned char var_10 = (unsigned char)184;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
short var_14 = (short)7608;
unsigned long long int var_15 = 16591244001230911845ULL;
short var_16 = (short)16971;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
