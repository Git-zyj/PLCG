#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 935730317;
unsigned long long int var_1 = 10644069505571550116ULL;
unsigned int var_4 = 2351497923U;
unsigned short var_8 = (unsigned short)43098;
unsigned long long int var_9 = 1025073316977978217ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)44872;
unsigned short var_14 = (unsigned short)33945;
long long int var_15 = -342516876268751261LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
