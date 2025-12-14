#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27982;
long long int var_7 = -6935892263631087372LL;
short var_10 = (short)5854;
long long int var_12 = 3556333435322982081LL;
unsigned short var_14 = (unsigned short)58139;
long long int var_15 = 5436719587896422304LL;
unsigned int var_17 = 85664993U;
int zero = 0;
long long int var_18 = 9012281509764044924LL;
short var_19 = (short)26174;
signed char var_20 = (signed char)84;
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
