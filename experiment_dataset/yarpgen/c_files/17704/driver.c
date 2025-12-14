#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2616983752892426902LL;
unsigned char var_12 = (unsigned char)97;
unsigned short var_15 = (unsigned short)15069;
int zero = 0;
short var_19 = (short)-7739;
unsigned long long int var_20 = 2717358772211505255ULL;
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
