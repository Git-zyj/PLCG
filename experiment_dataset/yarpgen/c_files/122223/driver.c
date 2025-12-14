#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 645071081;
unsigned int var_1 = 3753234411U;
unsigned short var_2 = (unsigned short)63450;
long long int var_7 = 8858450687923529398LL;
short var_8 = (short)-23320;
unsigned long long int var_12 = 15728015606702566174ULL;
long long int var_13 = -5574411819102391796LL;
long long int var_14 = -6495200148947324296LL;
int zero = 0;
long long int var_17 = -2277343164725815768LL;
short var_18 = (short)19013;
long long int var_19 = 6944995677365517303LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
