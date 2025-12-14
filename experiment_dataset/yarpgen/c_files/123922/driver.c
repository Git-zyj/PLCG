#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1936662509U;
long long int var_5 = 4300900495865913186LL;
unsigned short var_11 = (unsigned short)2641;
int zero = 0;
short var_15 = (short)26721;
int var_16 = 1000517766;
long long int var_17 = -3687952302672060123LL;
long long int var_18 = 3738942418079167139LL;
unsigned long long int var_19 = 4766164513561375969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
