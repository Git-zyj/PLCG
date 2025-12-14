#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14915280202695565205ULL;
unsigned int var_5 = 2240058349U;
int var_9 = 2016726671;
unsigned char var_10 = (unsigned char)158;
int zero = 0;
unsigned long long int var_14 = 18125684798957543028ULL;
unsigned short var_15 = (unsigned short)48473;
signed char var_16 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
