#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17606;
unsigned long long int var_2 = 4741976084249779990ULL;
unsigned char var_8 = (unsigned char)146;
int var_9 = 1376948471;
int var_10 = -1884998466;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14845622536714757364ULL;
unsigned char var_17 = (unsigned char)42;
unsigned short var_18 = (unsigned short)37324;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
