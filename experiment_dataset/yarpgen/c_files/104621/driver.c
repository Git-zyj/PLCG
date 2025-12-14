#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11073911156035611222ULL;
unsigned char var_7 = (unsigned char)160;
long long int var_9 = -8156938924137809493LL;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-16681;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6321233120871689596LL;
long long int var_16 = 8834108207394684722LL;
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
