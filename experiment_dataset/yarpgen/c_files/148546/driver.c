#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 671193083;
unsigned int var_2 = 2226894599U;
signed char var_3 = (signed char)0;
long long int var_4 = -1935300670874525916LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2227592335U;
unsigned int var_10 = 3087969473U;
int zero = 0;
unsigned short var_15 = (unsigned short)31479;
int var_16 = -1097981273;
void init() {
}

void checksum() {
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
