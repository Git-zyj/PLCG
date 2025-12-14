#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3302124682436409606LL;
long long int var_3 = 4436759280412470801LL;
int var_6 = -1181742461;
unsigned int var_7 = 1006694881U;
unsigned int var_11 = 1739719375U;
int zero = 0;
signed char var_14 = (signed char)-72;
int var_15 = 1876081969;
short var_16 = (short)-30287;
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
