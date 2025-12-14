#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4331927633117753608LL;
unsigned int var_10 = 293321945U;
unsigned short var_16 = (unsigned short)31836;
unsigned short var_17 = (unsigned short)54376;
int var_19 = 975171939;
int zero = 0;
unsigned int var_20 = 237102096U;
int var_21 = 1409330260;
unsigned short var_22 = (unsigned short)25816;
int var_23 = -398168710;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
