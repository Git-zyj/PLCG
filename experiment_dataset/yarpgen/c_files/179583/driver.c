#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12585;
unsigned int var_1 = 1738718019U;
int var_2 = 213650822;
unsigned long long int var_4 = 3636960062633717804ULL;
long long int var_6 = 3454943741750050257LL;
unsigned int var_9 = 962906990U;
long long int var_12 = 4854187761157816076LL;
long long int var_14 = 311736151259544LL;
int zero = 0;
unsigned char var_16 = (unsigned char)162;
unsigned int var_17 = 3821638638U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
