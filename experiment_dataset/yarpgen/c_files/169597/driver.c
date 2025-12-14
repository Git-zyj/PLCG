#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)70;
short var_15 = (short)-12794;
long long int var_16 = -2748448217069259919LL;
int zero = 0;
unsigned short var_17 = (unsigned short)34351;
unsigned long long int var_18 = 8494150641419474093ULL;
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
