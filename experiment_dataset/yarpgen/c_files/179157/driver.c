#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6070344630398920223ULL;
unsigned char var_1 = (unsigned char)144;
int var_4 = 1240089359;
long long int var_6 = -5186276758418292131LL;
unsigned int var_11 = 3896279128U;
int var_15 = -1568823167;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1902506575U;
unsigned long long int var_18 = 16698926543553137333ULL;
long long int var_19 = 2074126015096521310LL;
void init() {
}

void checksum() {
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
