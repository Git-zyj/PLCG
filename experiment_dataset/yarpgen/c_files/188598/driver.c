#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2226136592U;
unsigned char var_6 = (unsigned char)183;
short var_7 = (short)11925;
short var_9 = (short)1253;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-60;
int var_12 = 114126501;
int var_13 = 1705670758;
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
