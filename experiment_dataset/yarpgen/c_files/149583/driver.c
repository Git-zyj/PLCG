#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18115926651065893990ULL;
unsigned long long int var_1 = 13478122632524782661ULL;
long long int var_2 = 639395788413418893LL;
unsigned char var_6 = (unsigned char)143;
int var_10 = 291853838;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-8761;
unsigned long long int var_14 = 17128831657468826501ULL;
unsigned long long int var_15 = 14170980770750827879ULL;
long long int var_16 = 8070308895820730334LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
