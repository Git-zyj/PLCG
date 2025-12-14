#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7943248482744528915LL;
int var_3 = 1737908749;
unsigned char var_4 = (unsigned char)115;
long long int var_5 = -8173840828848714640LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 7315602013608544499LL;
int zero = 0;
unsigned long long int var_11 = 7702824663044497020ULL;
long long int var_12 = 2648101504233079910LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
