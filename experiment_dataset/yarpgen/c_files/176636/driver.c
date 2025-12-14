#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28950;
_Bool var_1 = (_Bool)0;
short var_5 = (short)30935;
unsigned short var_9 = (unsigned short)48826;
unsigned int var_10 = 2511290605U;
long long int var_11 = -6158417599829573739LL;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7234291262157967407LL;
int zero = 0;
unsigned short var_17 = (unsigned short)53088;
int var_18 = 155550878;
unsigned long long int var_19 = 6845807789349682373ULL;
long long int var_20 = -1658237070004832156LL;
void init() {
}

void checksum() {
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
