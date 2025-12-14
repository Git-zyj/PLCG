#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)118;
unsigned char var_7 = (unsigned char)140;
unsigned char var_10 = (unsigned char)111;
unsigned long long int var_11 = 16362704018617699994ULL;
int zero = 0;
int var_15 = -1977030605;
unsigned char var_16 = (unsigned char)222;
unsigned int var_17 = 1107860253U;
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
