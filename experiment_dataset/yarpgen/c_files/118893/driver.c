#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45609;
unsigned int var_6 = 360414889U;
long long int var_7 = 8150345403696838990LL;
_Bool var_10 = (_Bool)1;
unsigned short var_14 = (unsigned short)12276;
unsigned int var_15 = 503564593U;
int zero = 0;
signed char var_16 = (signed char)8;
long long int var_17 = -4293873434246194427LL;
void init() {
}

void checksum() {
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
