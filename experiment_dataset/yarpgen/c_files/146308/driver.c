#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
int var_1 = -1946145679;
int var_3 = -958804726;
signed char var_4 = (signed char)-80;
int var_10 = 1214398512;
int zero = 0;
short var_12 = (short)-7706;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)161;
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
