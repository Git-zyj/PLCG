#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-64;
unsigned short var_3 = (unsigned short)59970;
unsigned long long int var_4 = 5926533415279105274ULL;
signed char var_6 = (signed char)42;
int var_10 = -69540814;
unsigned char var_11 = (unsigned char)201;
int zero = 0;
int var_12 = 2076862075;
short var_13 = (short)13691;
short var_14 = (short)20631;
long long int var_15 = 3340820200234575655LL;
short var_16 = (short)-11066;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
