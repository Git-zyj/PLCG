#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
unsigned char var_12 = (unsigned char)76;
short var_14 = (short)4715;
int zero = 0;
long long int var_15 = -2260050161308975158LL;
signed char var_16 = (signed char)-121;
short var_17 = (short)-12601;
signed char var_18 = (signed char)-65;
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
