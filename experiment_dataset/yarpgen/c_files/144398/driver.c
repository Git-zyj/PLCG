#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4374770371633863086LL;
long long int var_6 = 7721442396557187617LL;
unsigned long long int var_8 = 2300586195357697069ULL;
int var_10 = 1497811088;
long long int var_14 = -299318927325103676LL;
int var_17 = -2138959175;
unsigned long long int var_18 = 2611389711805662808ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)55915;
long long int var_20 = 3322438121678012792LL;
void init() {
}

void checksum() {
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
