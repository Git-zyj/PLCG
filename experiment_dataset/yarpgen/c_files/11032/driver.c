#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5134142212778399077ULL;
int var_9 = -101314561;
int var_12 = -646883820;
int zero = 0;
unsigned short var_16 = (unsigned short)7054;
int var_17 = 1645807289;
unsigned short var_18 = (unsigned short)19546;
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
