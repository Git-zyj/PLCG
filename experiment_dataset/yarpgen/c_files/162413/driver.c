#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1112134032;
unsigned long long int var_2 = 18310811025719069591ULL;
short var_3 = (short)-22856;
long long int var_4 = -9144578820243145534LL;
unsigned int var_8 = 166727632U;
long long int var_9 = -7248512778002429071LL;
unsigned long long int var_10 = 13976679455018727708ULL;
unsigned short var_11 = (unsigned short)7299;
int zero = 0;
short var_13 = (short)-22920;
unsigned short var_14 = (unsigned short)51112;
unsigned long long int var_15 = 16623702330984845849ULL;
unsigned short var_16 = (unsigned short)57542;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
