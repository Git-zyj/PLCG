#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_5 = (short)-3523;
long long int var_11 = 1892928679098724959LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 663796065U;
unsigned short var_17 = (unsigned short)17104;
int var_18 = 414455362;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
