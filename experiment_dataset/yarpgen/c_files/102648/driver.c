#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29985;
unsigned char var_5 = (unsigned char)141;
unsigned long long int var_7 = 11442139933898185775ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
long long int var_15 = 3193067165783362997LL;
unsigned int var_16 = 3893755366U;
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
