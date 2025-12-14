#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned char var_6 = (unsigned char)160;
unsigned int var_7 = 1614002039U;
unsigned long long int var_10 = 8247621177516451204ULL;
unsigned int var_12 = 659090892U;
unsigned long long int var_13 = 1018893136842302850ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)191;
long long int var_16 = 7672271033015510748LL;
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
