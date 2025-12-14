#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1835890419;
unsigned int var_6 = 1980499326U;
unsigned char var_8 = (unsigned char)161;
int var_11 = 1393030504;
unsigned long long int var_13 = 9985530743835782048ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)12681;
int var_15 = 768388262;
unsigned short var_16 = (unsigned short)290;
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
