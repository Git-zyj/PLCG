#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -100487958;
short var_4 = (short)-12025;
unsigned char var_9 = (unsigned char)183;
short var_12 = (short)28924;
long long int var_13 = -7679604087341712451LL;
int var_16 = -1764761768;
unsigned long long int var_17 = 17831808885516163106ULL;
signed char var_18 = (signed char)31;
int zero = 0;
long long int var_19 = -4388891574115115338LL;
unsigned long long int var_20 = 10855541449623945450ULL;
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
