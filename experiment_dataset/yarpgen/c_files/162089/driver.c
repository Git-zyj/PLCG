#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22389;
unsigned long long int var_1 = 13169260986753026543ULL;
int var_5 = -687679189;
unsigned long long int var_7 = 1300388424303977800ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1259466841;
_Bool var_11 = (_Bool)1;
int var_13 = -1058499063;
unsigned char var_17 = (unsigned char)183;
long long int var_19 = -7307885779453143737LL;
int zero = 0;
signed char var_20 = (signed char)17;
unsigned char var_21 = (unsigned char)213;
unsigned short var_22 = (unsigned short)7331;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
