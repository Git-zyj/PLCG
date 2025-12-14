#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29776;
long long int var_3 = -3770122019419980560LL;
int var_9 = 1455125741;
unsigned long long int var_12 = 14520525583093104859ULL;
int var_14 = -228998147;
int zero = 0;
unsigned int var_16 = 3144093389U;
unsigned long long int var_17 = 1305986238303771059ULL;
unsigned long long int var_18 = 8857914338106549290ULL;
long long int var_19 = 7674274326464173515LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
