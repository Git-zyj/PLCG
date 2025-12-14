#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8322700950658332163LL;
short var_4 = (short)-12518;
short var_11 = (short)-1877;
int zero = 0;
long long int var_13 = -3235583086341267607LL;
long long int var_14 = 7169131140908037910LL;
unsigned char var_15 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
