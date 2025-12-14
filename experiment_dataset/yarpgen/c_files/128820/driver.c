#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6054126282576528958ULL;
unsigned int var_5 = 3582673095U;
int var_6 = -1710151837;
unsigned long long int var_7 = 1271287869174227785ULL;
unsigned char var_12 = (unsigned char)138;
int zero = 0;
unsigned char var_14 = (unsigned char)162;
short var_15 = (short)6710;
unsigned long long int var_16 = 2465268612921539715ULL;
long long int var_17 = -3361874723746399862LL;
unsigned long long int var_18 = 12100300828747275080ULL;
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
