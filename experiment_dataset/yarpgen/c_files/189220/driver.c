#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1094598476U;
unsigned char var_1 = (unsigned char)53;
unsigned long long int var_10 = 16226292587358214244ULL;
unsigned long long int var_13 = 9749125773148594400ULL;
int zero = 0;
unsigned int var_15 = 1684342749U;
unsigned short var_16 = (unsigned short)14727;
void init() {
}

void checksum() {
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
