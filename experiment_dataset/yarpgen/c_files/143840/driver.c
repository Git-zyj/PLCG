#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3091005517426475658ULL;
long long int var_12 = 6795534532535960399LL;
int zero = 0;
unsigned long long int var_15 = 17954810004523022509ULL;
short var_16 = (short)-1700;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
