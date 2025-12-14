#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4965886862798588489LL;
unsigned char var_12 = (unsigned char)85;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-22294;
long long int var_17 = -1694948503412053354LL;
unsigned int var_18 = 1027365392U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
