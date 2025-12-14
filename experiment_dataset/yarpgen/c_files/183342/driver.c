#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)80;
short var_8 = (short)32364;
short var_9 = (short)7944;
unsigned short var_13 = (unsigned short)44886;
int zero = 0;
unsigned long long int var_14 = 7915620725694617125ULL;
unsigned int var_15 = 939447962U;
long long int var_16 = 8434869732236725699LL;
int var_17 = 206672152;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
