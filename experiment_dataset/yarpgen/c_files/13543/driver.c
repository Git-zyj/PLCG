#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1154185428;
unsigned int var_5 = 2517270956U;
short var_8 = (short)15353;
unsigned char var_9 = (unsigned char)153;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2020508350183226299LL;
unsigned int var_15 = 4214671288U;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
unsigned char var_18 = (unsigned char)47;
long long int var_19 = 5562373499777663238LL;
unsigned short var_20 = (unsigned short)53090;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
