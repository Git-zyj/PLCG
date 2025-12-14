#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1900697727;
unsigned short var_5 = (unsigned short)52486;
unsigned long long int var_7 = 10741931398650915566ULL;
unsigned short var_10 = (unsigned short)30136;
int zero = 0;
unsigned char var_11 = (unsigned char)56;
unsigned short var_12 = (unsigned short)45946;
unsigned int var_13 = 359755548U;
long long int var_14 = 1760671568293642095LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
