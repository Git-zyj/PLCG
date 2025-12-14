#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 572043476;
short var_3 = (short)26022;
unsigned short var_4 = (unsigned short)9638;
int var_6 = -1983907828;
int var_7 = 107120631;
unsigned short var_8 = (unsigned short)35163;
int var_9 = -925395795;
unsigned long long int var_10 = 5943288995397543237ULL;
unsigned long long int var_11 = 9330758311873652888ULL;
unsigned short var_12 = (unsigned short)584;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
long long int var_15 = -3101245244701924868LL;
long long int var_16 = 3654164541802978347LL;
unsigned int var_17 = 3717309571U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
