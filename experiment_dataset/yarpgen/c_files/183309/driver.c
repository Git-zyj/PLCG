#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2038843320U;
signed char var_1 = (signed char)-6;
unsigned int var_4 = 1566316482U;
unsigned short var_6 = (unsigned short)10163;
long long int var_13 = 6778060911702052307LL;
int zero = 0;
int var_14 = -263263389;
unsigned char var_15 = (unsigned char)219;
unsigned char var_16 = (unsigned char)236;
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
