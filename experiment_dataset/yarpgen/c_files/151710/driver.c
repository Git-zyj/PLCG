#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-32;
unsigned char var_5 = (unsigned char)1;
unsigned long long int var_9 = 1992555684389510532ULL;
signed char var_11 = (signed char)-10;
int zero = 0;
long long int var_14 = 2691675094143533321LL;
long long int var_15 = 8613662536434156505LL;
unsigned long long int var_16 = 10730198719909888147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
