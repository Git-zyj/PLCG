#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3884298928015049577LL;
int var_5 = -695331382;
unsigned char var_7 = (unsigned char)207;
unsigned int var_8 = 642601206U;
unsigned char var_10 = (unsigned char)241;
int zero = 0;
long long int var_12 = 3322629617862258611LL;
unsigned short var_13 = (unsigned short)11945;
unsigned long long int var_14 = 5350224303274038952ULL;
unsigned short var_15 = (unsigned short)35397;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
