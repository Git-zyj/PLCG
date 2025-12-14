#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13888186143142192596ULL;
unsigned short var_5 = (unsigned short)31842;
long long int var_10 = -7945044268692619653LL;
unsigned short var_11 = (unsigned short)60854;
int zero = 0;
unsigned int var_12 = 430743309U;
short var_13 = (short)-22134;
unsigned int var_14 = 992271893U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
