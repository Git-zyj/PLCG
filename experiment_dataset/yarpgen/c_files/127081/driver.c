#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)18;
unsigned char var_5 = (unsigned char)22;
unsigned int var_6 = 309568916U;
unsigned int var_7 = 3438751484U;
unsigned short var_9 = (unsigned short)19316;
unsigned int var_11 = 2163153443U;
int var_13 = 1593938251;
int zero = 0;
unsigned long long int var_16 = 14963314488980054682ULL;
unsigned char var_17 = (unsigned char)11;
int var_18 = 1503733521;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
