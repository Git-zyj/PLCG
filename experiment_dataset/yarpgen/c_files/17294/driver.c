#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18133948577558696746ULL;
short var_5 = (short)-26899;
unsigned int var_7 = 2362349924U;
int var_10 = 156039040;
unsigned int var_13 = 2713451545U;
int var_14 = 1261291813;
int zero = 0;
unsigned char var_15 = (unsigned char)242;
int var_16 = -1939242102;
unsigned short var_17 = (unsigned short)58973;
unsigned long long int var_18 = 5593873456899781122ULL;
unsigned long long int var_19 = 8828155700715216001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
