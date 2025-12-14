#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6165530465656660289ULL;
unsigned long long int var_6 = 17036483909120921815ULL;
unsigned short var_8 = (unsigned short)16411;
unsigned int var_9 = 1164249613U;
int zero = 0;
int var_11 = -1309224821;
unsigned long long int var_12 = 6472355389926538914ULL;
int var_13 = -1611343354;
unsigned short var_14 = (unsigned short)6549;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
