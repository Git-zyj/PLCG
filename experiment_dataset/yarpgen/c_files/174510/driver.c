#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-184;
signed char var_4 = (signed char)-22;
unsigned char var_10 = (unsigned char)118;
int zero = 0;
signed char var_16 = (signed char)-95;
unsigned long long int var_17 = 1142150301972813290ULL;
void init() {
}

void checksum() {
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
