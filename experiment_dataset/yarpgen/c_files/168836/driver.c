#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 3613846833125911674ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8792192091204795403LL;
unsigned long long int var_10 = 13425807513520749240ULL;
unsigned int var_11 = 2783295457U;
unsigned char var_12 = (unsigned char)150;
long long int var_13 = 1752484923432624938LL;
signed char var_14 = (signed char)-41;
int zero = 0;
signed char var_15 = (signed char)22;
signed char var_16 = (signed char)-75;
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
