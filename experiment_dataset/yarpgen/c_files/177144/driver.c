#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
int var_1 = -197283116;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 483187731U;
int zero = 0;
short var_10 = (short)-21228;
unsigned char var_11 = (unsigned char)0;
unsigned int var_12 = 1265655114U;
int var_13 = 1584608958;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
