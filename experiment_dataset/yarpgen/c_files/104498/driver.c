#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 396007097;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7587662350766181283LL;
unsigned char var_4 = (unsigned char)24;
int var_5 = 1974669605;
long long int var_6 = 4065752892190849969LL;
long long int var_7 = 7219381509945031875LL;
int var_8 = -406459501;
short var_10 = (short)2363;
int zero = 0;
int var_12 = -21544425;
int var_13 = -1887968161;
short var_14 = (short)-31963;
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
