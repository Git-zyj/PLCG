#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 60743973;
long long int var_2 = -5943162775088573248LL;
unsigned short var_4 = (unsigned short)46911;
unsigned short var_8 = (unsigned short)43955;
int zero = 0;
long long int var_11 = -7078899954444392423LL;
long long int var_12 = -7745096335524950067LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
