#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5404;
unsigned char var_2 = (unsigned char)229;
_Bool var_3 = (_Bool)1;
short var_9 = (short)29320;
long long int var_10 = -2119532443808829180LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-14032;
short var_14 = (short)-28507;
short var_16 = (short)7176;
int zero = 0;
int var_18 = 854178525;
long long int var_19 = -5020217656616603658LL;
int var_20 = -1767729332;
int var_21 = -82133477;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
