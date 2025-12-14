#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13311374944094805123ULL;
signed char var_6 = (signed char)-51;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
long long int var_14 = 8563925932876416965LL;
signed char var_15 = (signed char)-87;
long long int var_16 = -3479169296838477991LL;
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
