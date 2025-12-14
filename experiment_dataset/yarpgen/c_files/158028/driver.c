#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57911;
unsigned long long int var_5 = 8801432429220522886ULL;
int var_6 = 1437596927;
unsigned int var_9 = 4003519604U;
unsigned long long int var_13 = 10442289072517513128ULL;
int zero = 0;
unsigned int var_14 = 2737191221U;
unsigned short var_15 = (unsigned short)31809;
unsigned int var_16 = 340917376U;
unsigned long long int var_17 = 11304698497657520807ULL;
long long int var_18 = 5352529102317163051LL;
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
