#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 543625258;
int var_9 = -1476505739;
long long int var_10 = 2656192621916957247LL;
int zero = 0;
unsigned short var_20 = (unsigned short)38370;
signed char var_21 = (signed char)102;
long long int var_22 = 4544229585949310845LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
