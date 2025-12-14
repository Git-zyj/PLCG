#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13970791425804377824ULL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)27715;
unsigned long long int var_8 = 12626444554117958556ULL;
unsigned short var_9 = (unsigned short)61871;
unsigned short var_12 = (unsigned short)36299;
int zero = 0;
int var_14 = -1957652252;
short var_15 = (short)-8792;
short var_16 = (short)-12112;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
