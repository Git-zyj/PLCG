#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)60525;
short var_10 = (short)7242;
unsigned short var_13 = (unsigned short)46277;
unsigned long long int var_16 = 5597653327546947156ULL;
int zero = 0;
int var_17 = 2036285479;
unsigned short var_18 = (unsigned short)8339;
unsigned long long int var_19 = 14001455508326585264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
