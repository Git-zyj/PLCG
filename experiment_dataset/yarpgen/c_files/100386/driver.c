#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8032788421303239350LL;
short var_2 = (short)-16230;
unsigned int var_6 = 2020986880U;
short var_7 = (short)-27763;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1525400568;
unsigned int var_14 = 3076866423U;
short var_15 = (short)-22642;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
