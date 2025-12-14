#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8249776395523563815LL;
unsigned int var_9 = 2005545410U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = 1952422920432033886LL;
int var_14 = -880495017;
unsigned short var_15 = (unsigned short)29378;
unsigned long long int var_16 = 15118701476537255842ULL;
int var_17 = 1995343057;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
