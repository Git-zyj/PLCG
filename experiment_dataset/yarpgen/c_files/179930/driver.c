#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45131;
unsigned short var_5 = (unsigned short)5694;
unsigned long long int var_10 = 15660032868294549474ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)49721;
long long int var_12 = 1834369778268040261LL;
signed char var_13 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
