#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)93;
short var_7 = (short)4297;
short var_8 = (short)26319;
int var_10 = -418382109;
unsigned short var_12 = (unsigned short)39784;
int zero = 0;
unsigned long long int var_13 = 11900691500707028688ULL;
signed char var_14 = (signed char)-9;
int var_15 = -1303996598;
unsigned short var_16 = (unsigned short)19597;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
