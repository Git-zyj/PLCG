#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13051392924860848065ULL;
long long int var_7 = 5350287385638876205LL;
unsigned short var_8 = (unsigned short)53359;
int var_9 = 1986436359;
unsigned long long int var_10 = 14478661038759058210ULL;
unsigned long long int var_12 = 10866362577942525368ULL;
unsigned short var_13 = (unsigned short)58280;
int zero = 0;
unsigned int var_14 = 1903089510U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)18876;
void init() {
}

void checksum() {
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
