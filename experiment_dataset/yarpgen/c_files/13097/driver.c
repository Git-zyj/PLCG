#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2103396970U;
short var_3 = (short)21196;
short var_4 = (short)27791;
int var_5 = -1079759425;
short var_10 = (short)5822;
unsigned int var_12 = 1309354139U;
unsigned long long int var_15 = 4846872621885976438ULL;
unsigned short var_16 = (unsigned short)36592;
int zero = 0;
short var_17 = (short)23096;
unsigned char var_18 = (unsigned char)73;
void init() {
}

void checksum() {
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
