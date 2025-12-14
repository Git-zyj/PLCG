#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)164;
unsigned char var_10 = (unsigned char)203;
short var_14 = (short)-23820;
int zero = 0;
unsigned long long int var_17 = 11921189340487473502ULL;
signed char var_18 = (signed char)-117;
void init() {
}

void checksum() {
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
