#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9769;
short var_9 = (short)-12320;
unsigned long long int var_17 = 15476402721376662586ULL;
int zero = 0;
unsigned long long int var_19 = 12726473606847919746ULL;
unsigned long long int var_20 = 1550576507513706606ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
