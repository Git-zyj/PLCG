#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-6;
long long int var_3 = 5830616142816494632LL;
int var_4 = -960929623;
unsigned char var_5 = (unsigned char)51;
long long int var_6 = 7094365022563077937LL;
unsigned short var_11 = (unsigned short)23498;
unsigned int var_12 = 2822921206U;
int zero = 0;
unsigned short var_13 = (unsigned short)25182;
unsigned char var_14 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
