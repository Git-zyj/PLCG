#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)22;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)81;
int var_13 = -1252883700;
int var_14 = -121054543;
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
