#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4178926749U;
short var_8 = (short)-17346;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)62;
unsigned char var_20 = (unsigned char)91;
unsigned long long int var_21 = 10342771938888058434ULL;
unsigned long long int var_22 = 2115897506641734108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
