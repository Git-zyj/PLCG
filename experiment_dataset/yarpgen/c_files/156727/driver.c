#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -742388527618052542LL;
unsigned int var_2 = 541595201U;
long long int var_5 = 7039652365560854709LL;
long long int var_6 = -2768532001360629264LL;
unsigned int var_9 = 3455810271U;
unsigned short var_11 = (unsigned short)26194;
int var_12 = 1626982059;
short var_15 = (short)-14696;
int zero = 0;
unsigned short var_16 = (unsigned short)55056;
unsigned short var_17 = (unsigned short)14436;
unsigned int var_18 = 1834614583U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14093204345503739789ULL;
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
