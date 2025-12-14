#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40475;
unsigned short var_2 = (unsigned short)6505;
unsigned short var_5 = (unsigned short)7497;
unsigned short var_7 = (unsigned short)44664;
unsigned short var_9 = (unsigned short)44423;
unsigned short var_13 = (unsigned short)8159;
int zero = 0;
unsigned short var_14 = (unsigned short)12881;
unsigned short var_15 = (unsigned short)16991;
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
