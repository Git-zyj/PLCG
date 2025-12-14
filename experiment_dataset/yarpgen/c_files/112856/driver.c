#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 772419648886662765LL;
unsigned char var_5 = (unsigned char)64;
short var_6 = (short)-15106;
unsigned int var_12 = 967359207U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8545677822268180482LL;
int zero = 0;
unsigned long long int var_17 = 4372019456432639738ULL;
unsigned short var_18 = (unsigned short)59501;
unsigned short var_19 = (unsigned short)42053;
long long int var_20 = -6644219333196524481LL;
long long int var_21 = 1714985566868893290LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
