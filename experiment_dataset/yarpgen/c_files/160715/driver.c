#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2858285313U;
signed char var_8 = (signed char)47;
short var_13 = (short)-26109;
unsigned short var_14 = (unsigned short)6438;
int zero = 0;
long long int var_15 = -2634120809702787814LL;
unsigned char var_16 = (unsigned char)64;
long long int var_17 = -571575690899030096LL;
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
