#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 594258245;
unsigned char var_7 = (unsigned char)28;
unsigned short var_10 = (unsigned short)12471;
int var_11 = -1812306758;
int zero = 0;
long long int var_15 = 3377015255198789702LL;
unsigned int var_16 = 2333256316U;
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
