#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14880;
unsigned short var_3 = (unsigned short)5240;
unsigned int var_4 = 1585369429U;
long long int var_6 = 2075880923545051108LL;
unsigned long long int var_7 = 10413953775716128772ULL;
signed char var_9 = (signed char)-7;
signed char var_10 = (signed char)-98;
int zero = 0;
unsigned int var_12 = 2740345256U;
unsigned short var_13 = (unsigned short)20213;
unsigned char var_14 = (unsigned char)136;
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
