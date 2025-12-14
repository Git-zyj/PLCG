#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5276717263828359602ULL;
unsigned short var_7 = (unsigned short)29956;
unsigned int var_8 = 1695230687U;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
unsigned char var_14 = (unsigned char)249;
unsigned long long int var_15 = 4228314105677864611ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
