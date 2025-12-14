#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)880;
int var_3 = 247163247;
unsigned short var_10 = (unsigned short)58619;
unsigned short var_14 = (unsigned short)39080;
int var_17 = 611843747;
int zero = 0;
int var_19 = -1416601704;
signed char var_20 = (signed char)-95;
_Bool var_21 = (_Bool)0;
long long int var_22 = 8582232878701462625LL;
int var_23 = -333416915;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
