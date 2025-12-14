#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
unsigned short var_1 = (unsigned short)27451;
unsigned int var_2 = 1891172597U;
int var_4 = -378526480;
int var_6 = -2096887323;
short var_7 = (short)32185;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 500040452;
unsigned long long int var_13 = 15928947903200919916ULL;
unsigned int var_14 = 2601908176U;
unsigned char var_15 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
