#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
signed char var_1 = (signed char)-91;
unsigned long long int var_4 = 5217277879132539489ULL;
int var_6 = 1620611558;
int zero = 0;
unsigned short var_11 = (unsigned short)63625;
int var_12 = -462286878;
long long int var_13 = 7199168614322972745LL;
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
