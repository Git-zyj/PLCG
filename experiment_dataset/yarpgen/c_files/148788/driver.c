#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5091918549726485525LL;
signed char var_1 = (signed char)6;
int var_8 = -1577110592;
unsigned short var_12 = (unsigned short)36974;
unsigned short var_16 = (unsigned short)11207;
int zero = 0;
int var_18 = -1870593640;
unsigned int var_19 = 3461661701U;
signed char var_20 = (signed char)-86;
unsigned char var_21 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
