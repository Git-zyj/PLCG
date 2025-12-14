#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28735;
unsigned long long int var_2 = 10468455048903551820ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)52660;
unsigned long long int var_12 = 16733498752379395280ULL;
int zero = 0;
unsigned long long int var_14 = 5743984040606539107ULL;
unsigned short var_15 = (unsigned short)43499;
unsigned int var_16 = 2030635368U;
void init() {
}

void checksum() {
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
