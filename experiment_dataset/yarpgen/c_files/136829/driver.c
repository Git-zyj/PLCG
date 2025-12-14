#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64393;
long long int var_3 = -8665308219677396059LL;
unsigned int var_4 = 1465450177U;
unsigned long long int var_5 = 7707011124723601476ULL;
int var_6 = 340033040;
long long int var_7 = -5989858023362191865LL;
short var_8 = (short)27587;
unsigned long long int var_9 = 8516071183817738079ULL;
int zero = 0;
short var_11 = (short)-3563;
short var_12 = (short)9218;
int var_13 = -1985243814;
int var_14 = 1302269878;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
