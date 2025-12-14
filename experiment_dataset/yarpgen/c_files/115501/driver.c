#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2291332337982370082ULL;
unsigned short var_3 = (unsigned short)8902;
unsigned long long int var_6 = 16630859188162402588ULL;
short var_7 = (short)7066;
signed char var_10 = (signed char)-22;
long long int var_11 = -8045709199274859761LL;
unsigned long long int var_12 = 10482863704473334380ULL;
short var_15 = (short)3896;
int zero = 0;
unsigned int var_19 = 3757431535U;
unsigned int var_20 = 2524731761U;
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
