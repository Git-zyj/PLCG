#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2492;
unsigned int var_4 = 2796925733U;
unsigned short var_6 = (unsigned short)49205;
long long int var_10 = 3393620680286471574LL;
long long int var_12 = -5089509222252443175LL;
int zero = 0;
short var_14 = (short)-5959;
unsigned long long int var_15 = 15243820302284392321ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
