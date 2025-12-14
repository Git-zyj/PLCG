#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1603128416422155132LL;
long long int var_3 = -6751048623613329322LL;
long long int var_4 = -8333550584813933790LL;
long long int var_8 = -2349014693552529100LL;
long long int var_10 = 5458197386430266472LL;
long long int var_11 = -6536990727731486LL;
int zero = 0;
long long int var_13 = 628232081301964138LL;
long long int var_14 = 5910245222298175790LL;
long long int var_15 = -7194098753939417892LL;
long long int var_16 = -2544500551348521797LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
