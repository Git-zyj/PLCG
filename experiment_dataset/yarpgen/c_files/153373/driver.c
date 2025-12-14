#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
int var_2 = 694223432;
int var_5 = 408358833;
unsigned int var_6 = 2064876345U;
int zero = 0;
unsigned int var_12 = 914852404U;
unsigned long long int var_13 = 10107707108993702172ULL;
unsigned short var_14 = (unsigned short)24056;
unsigned int var_15 = 3784899146U;
short var_16 = (short)-21470;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
