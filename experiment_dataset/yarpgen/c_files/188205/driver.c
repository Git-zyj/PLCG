#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1980039826;
unsigned char var_10 = (unsigned char)207;
unsigned long long int var_11 = 8651156843205056817ULL;
unsigned short var_13 = (unsigned short)27147;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)120;
short var_18 = (short)-21164;
unsigned long long int var_19 = 1333495844946416447ULL;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
