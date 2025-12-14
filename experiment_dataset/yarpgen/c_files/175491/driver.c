#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17690;
unsigned long long int var_7 = 7027846525066709272ULL;
int var_13 = 680249943;
int zero = 0;
unsigned int var_18 = 557234828U;
unsigned int var_19 = 1026980655U;
unsigned int var_20 = 1898979617U;
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
