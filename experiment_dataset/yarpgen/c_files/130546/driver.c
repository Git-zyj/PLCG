#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
_Bool var_1 = (_Bool)1;
long long int var_2 = 316468309461224759LL;
long long int var_4 = -5179198051678186154LL;
unsigned char var_5 = (unsigned char)8;
int var_6 = 422022250;
unsigned char var_7 = (unsigned char)20;
int var_8 = -926140911;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6533246783363713957LL;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
signed char var_12 = (signed char)-11;
unsigned int var_13 = 3236391918U;
int var_14 = 1686683419;
unsigned int var_15 = 881756522U;
unsigned char var_16 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
