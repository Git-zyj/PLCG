#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3674509702U;
signed char var_2 = (signed char)-2;
unsigned short var_3 = (unsigned short)6919;
unsigned int var_6 = 3480471631U;
unsigned long long int var_8 = 14684328214540494143ULL;
int zero = 0;
int var_11 = 38166966;
int var_12 = -1115556456;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
