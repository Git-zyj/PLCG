#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)35;
unsigned short var_4 = (unsigned short)10523;
unsigned short var_5 = (unsigned short)54680;
unsigned long long int var_14 = 5410089958585186162ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)239;
unsigned int var_17 = 2390372914U;
unsigned long long int var_18 = 7510338489118589599ULL;
void init() {
}

void checksum() {
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
