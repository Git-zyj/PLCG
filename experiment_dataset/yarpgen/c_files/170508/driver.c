#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1382556596U;
long long int var_13 = -8642538385169642075LL;
int zero = 0;
unsigned int var_16 = 470744589U;
signed char var_17 = (signed char)-7;
unsigned long long int var_18 = 17208951651236395987ULL;
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
