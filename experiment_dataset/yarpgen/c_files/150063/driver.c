#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2662520427U;
short var_3 = (short)23706;
unsigned int var_5 = 345749750U;
unsigned short var_11 = (unsigned short)307;
unsigned long long int var_13 = 13676401747422258699ULL;
int zero = 0;
long long int var_15 = 2452298600633837236LL;
long long int var_16 = 2471928716819671169LL;
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
