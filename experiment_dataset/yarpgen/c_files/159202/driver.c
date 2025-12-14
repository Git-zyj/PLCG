#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 322151257;
unsigned short var_10 = (unsigned short)43230;
int var_11 = 150241499;
int var_14 = -10469920;
long long int var_15 = 3603103757892811797LL;
int zero = 0;
unsigned short var_16 = (unsigned short)64216;
unsigned long long int var_17 = 14640949277089546311ULL;
void init() {
}

void checksum() {
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
