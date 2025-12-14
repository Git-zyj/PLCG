#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)13122;
unsigned char var_12 = (unsigned char)164;
unsigned short var_13 = (unsigned short)36703;
int var_14 = 969302516;
int zero = 0;
unsigned long long int var_16 = 3778635853059148482ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2159747147U;
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
