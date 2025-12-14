#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 420992665;
int var_5 = 322598817;
unsigned int var_9 = 4052872426U;
short var_10 = (short)26625;
unsigned int var_13 = 2034443323U;
int var_15 = -511374262;
unsigned int var_16 = 1409429708U;
int zero = 0;
signed char var_17 = (signed char)85;
short var_18 = (short)-5176;
void init() {
}

void checksum() {
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
