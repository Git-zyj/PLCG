#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 305843922U;
long long int var_1 = -423715297846127712LL;
int var_3 = -339959707;
unsigned short var_5 = (unsigned short)18500;
unsigned int var_6 = 1237643944U;
signed char var_7 = (signed char)62;
unsigned long long int var_8 = 8878318219793849021ULL;
unsigned short var_9 = (unsigned short)31291;
unsigned int var_11 = 2085155801U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 624980204U;
unsigned int var_14 = 4214104774U;
void init() {
}

void checksum() {
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
