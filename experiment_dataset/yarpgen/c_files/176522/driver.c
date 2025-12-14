#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7773;
short var_1 = (short)-21185;
signed char var_2 = (signed char)-52;
long long int var_3 = -4228647705432712564LL;
unsigned short var_4 = (unsigned short)17531;
unsigned int var_5 = 1355426779U;
signed char var_6 = (signed char)42;
short var_7 = (short)1742;
unsigned char var_10 = (unsigned char)12;
int zero = 0;
long long int var_11 = -5285459421671117431LL;
_Bool var_12 = (_Bool)1;
int var_13 = 1112433931;
unsigned int var_14 = 2665396489U;
unsigned char var_15 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
