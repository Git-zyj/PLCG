#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
short var_3 = (short)-6571;
unsigned char var_6 = (unsigned char)28;
int var_8 = 178823313;
int zero = 0;
short var_10 = (short)-13923;
unsigned long long int var_11 = 8385912083064465997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
