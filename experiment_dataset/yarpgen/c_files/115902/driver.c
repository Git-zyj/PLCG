#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 343623886U;
long long int var_2 = 8809875684326236292LL;
short var_6 = (short)-5041;
unsigned int var_9 = 93646221U;
long long int var_10 = 2331731218100051058LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -1888344151;
int var_18 = 404138200;
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
