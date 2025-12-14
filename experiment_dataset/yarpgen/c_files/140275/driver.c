#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 538673943U;
signed char var_3 = (signed char)3;
unsigned int var_7 = 311391589U;
unsigned short var_10 = (unsigned short)25168;
int zero = 0;
long long int var_14 = 2813733955228648463LL;
unsigned int var_15 = 760526516U;
unsigned char var_16 = (unsigned char)229;
int var_17 = 1869269899;
unsigned short var_18 = (unsigned short)21111;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
