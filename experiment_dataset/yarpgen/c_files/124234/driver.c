#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2482669129379858858LL;
unsigned long long int var_6 = 4715614082742195346ULL;
int var_10 = 1995662620;
unsigned int var_13 = 2490007700U;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-5999;
long long int var_16 = -6323086492966317378LL;
int var_17 = -456651540;
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
