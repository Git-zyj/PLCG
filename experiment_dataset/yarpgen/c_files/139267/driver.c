#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)101;
long long int var_9 = -5453860438980188702LL;
short var_10 = (short)-19462;
short var_13 = (short)-2098;
int zero = 0;
unsigned long long int var_14 = 13401172488048798019ULL;
signed char var_15 = (signed char)-83;
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
