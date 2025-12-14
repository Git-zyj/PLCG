#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6282678521210661400ULL;
unsigned char var_6 = (unsigned char)206;
short var_10 = (short)-13919;
int zero = 0;
long long int var_15 = 9153946526548415752LL;
signed char var_16 = (signed char)-89;
signed char var_17 = (signed char)83;
signed char var_18 = (signed char)28;
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
