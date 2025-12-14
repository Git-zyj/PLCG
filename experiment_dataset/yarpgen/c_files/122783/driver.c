#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5207269790542537286LL;
short var_4 = (short)11453;
int var_6 = 1965816514;
int zero = 0;
short var_11 = (short)-12061;
signed char var_12 = (signed char)-94;
int var_13 = -1670583467;
unsigned char var_14 = (unsigned char)228;
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
