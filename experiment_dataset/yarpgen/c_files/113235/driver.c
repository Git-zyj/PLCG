#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15473077993559683606ULL;
long long int var_4 = 1595714383867861463LL;
int var_7 = 2007726076;
unsigned long long int var_10 = 9445944074244856049ULL;
unsigned int var_11 = 1250997801U;
short var_12 = (short)1292;
long long int var_14 = -8079617775732424843LL;
short var_16 = (short)-7833;
int zero = 0;
unsigned int var_17 = 3028666101U;
unsigned long long int var_18 = 13487847397361446927ULL;
long long int var_19 = -6381582797204122374LL;
unsigned short var_20 = (unsigned short)58741;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
