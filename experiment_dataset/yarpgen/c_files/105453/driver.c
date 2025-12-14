#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1386305890;
unsigned long long int var_3 = 14448802952681304292ULL;
unsigned short var_4 = (unsigned short)2813;
long long int var_9 = 2210619051517706855LL;
unsigned long long int var_13 = 4762834785292241544ULL;
int zero = 0;
unsigned long long int var_15 = 9500097901409248263ULL;
int var_16 = -1026332265;
short var_17 = (short)11044;
void init() {
}

void checksum() {
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
