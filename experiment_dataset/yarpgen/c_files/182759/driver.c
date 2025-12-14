#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17876309721188281082ULL;
unsigned char var_2 = (unsigned char)194;
long long int var_3 = -8275569191792476422LL;
unsigned short var_4 = (unsigned short)7779;
unsigned char var_5 = (unsigned char)171;
unsigned long long int var_7 = 7737908860666578001ULL;
int var_8 = 1906901873;
unsigned short var_10 = (unsigned short)21315;
unsigned long long int var_13 = 12147383514718913309ULL;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
unsigned int var_15 = 360974779U;
unsigned long long int var_16 = 8467663021350131372ULL;
int var_17 = 1523716656;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
