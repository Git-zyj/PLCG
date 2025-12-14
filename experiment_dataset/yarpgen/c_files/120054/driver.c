#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2825388398715237495ULL;
unsigned char var_2 = (unsigned char)4;
unsigned char var_3 = (unsigned char)122;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)205;
short var_11 = (short)4878;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
unsigned char var_13 = (unsigned char)140;
unsigned char var_14 = (unsigned char)90;
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
