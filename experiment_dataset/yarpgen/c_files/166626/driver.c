#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2421791576U;
unsigned char var_4 = (unsigned char)164;
unsigned char var_5 = (unsigned char)165;
unsigned char var_6 = (unsigned char)155;
signed char var_7 = (signed char)-48;
long long int var_12 = 2676712476232351108LL;
long long int var_16 = 6476828780134048432LL;
long long int var_17 = 4128427497458879236LL;
int zero = 0;
unsigned int var_18 = 1665706914U;
unsigned long long int var_19 = 2829284832851218543ULL;
signed char var_20 = (signed char)84;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
