#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8992936864463820313ULL;
unsigned long long int var_5 = 1381602724360652000ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)56325;
unsigned char var_11 = (unsigned char)242;
int zero = 0;
signed char var_13 = (signed char)51;
unsigned short var_14 = (unsigned short)21117;
unsigned short var_15 = (unsigned short)26115;
void init() {
}

void checksum() {
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
