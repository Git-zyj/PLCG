#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = -60649361481830775LL;
int var_8 = 1477846179;
_Bool var_9 = (_Bool)0;
int var_11 = -812104238;
unsigned short var_12 = (unsigned short)61811;
int zero = 0;
unsigned long long int var_13 = 11712001743886223222ULL;
unsigned char var_14 = (unsigned char)179;
int var_15 = -1109980358;
void init() {
}

void checksum() {
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
