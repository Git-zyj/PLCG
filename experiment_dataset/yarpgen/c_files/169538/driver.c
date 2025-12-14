#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6121179558532145912LL;
long long int var_2 = -5156475092607288161LL;
long long int var_6 = 6827804933409350904LL;
long long int var_7 = 6465589197413428619LL;
long long int var_10 = 3551560500416206201LL;
long long int var_12 = 1829286008550765319LL;
long long int var_14 = -1591939777126015919LL;
long long int var_15 = 4030819560421476191LL;
int zero = 0;
long long int var_18 = -2007163908207252824LL;
long long int var_19 = -5846244628474389015LL;
long long int var_20 = 900556123806744170LL;
void init() {
}

void checksum() {
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
