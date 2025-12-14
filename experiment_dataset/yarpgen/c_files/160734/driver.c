#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25314;
signed char var_5 = (signed char)103;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_11 = 3958841333842391965ULL;
int var_12 = -1032023345;
unsigned long long int var_14 = 9492799257783921199ULL;
int zero = 0;
unsigned int var_16 = 3073283073U;
unsigned short var_17 = (unsigned short)49236;
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
