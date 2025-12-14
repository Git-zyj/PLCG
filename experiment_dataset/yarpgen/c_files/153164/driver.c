#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 238464127846934624ULL;
long long int var_2 = 4222044737628301653LL;
long long int var_3 = 809282020747977874LL;
long long int var_4 = 5074806641835982748LL;
long long int var_5 = 9025070690801989054LL;
unsigned long long int var_9 = 17384247419542648000ULL;
long long int var_10 = -8498666436696391506LL;
int zero = 0;
long long int var_14 = -936843857590887529LL;
long long int var_15 = -6785309470511174823LL;
long long int var_16 = -3439245231147724765LL;
long long int var_17 = 7354613150024029935LL;
long long int var_18 = 1586113795953519638LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
