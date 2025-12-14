#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12615;
unsigned char var_1 = (unsigned char)122;
unsigned char var_2 = (unsigned char)67;
short var_3 = (short)22623;
int var_4 = 36897181;
unsigned char var_6 = (unsigned char)206;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)163;
unsigned char var_10 = (unsigned char)129;
int var_11 = -624926093;
unsigned char var_12 = (unsigned char)50;
unsigned int var_14 = 724677186U;
int zero = 0;
long long int var_15 = -3739772442913918803LL;
signed char var_16 = (signed char)-69;
signed char var_17 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
