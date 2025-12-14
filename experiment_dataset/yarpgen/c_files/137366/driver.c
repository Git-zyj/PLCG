#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = 148679484;
signed char var_16 = (signed char)-79;
int zero = 0;
long long int var_18 = -4105638703875493412LL;
unsigned short var_19 = (unsigned short)15485;
unsigned short var_20 = (unsigned short)40418;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
