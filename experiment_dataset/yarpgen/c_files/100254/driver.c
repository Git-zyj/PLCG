#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned long long int var_1 = 12593341956038244249ULL;
unsigned int var_3 = 1914490830U;
unsigned char var_6 = (unsigned char)126;
int var_7 = -422297698;
unsigned short var_9 = (unsigned short)33014;
int zero = 0;
long long int var_10 = -1464795503661925803LL;
unsigned long long int var_11 = 105191412285850035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
