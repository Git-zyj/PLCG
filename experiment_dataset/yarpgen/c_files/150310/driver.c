#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22156;
long long int var_1 = -6595001025710800104LL;
long long int var_2 = 3947660046529889728LL;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 15950889581413727718ULL;
unsigned short var_11 = (unsigned short)6472;
_Bool var_12 = (_Bool)1;
int var_13 = -1341784657;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
