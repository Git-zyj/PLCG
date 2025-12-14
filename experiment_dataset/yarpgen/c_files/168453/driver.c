#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7322377311835712506LL;
unsigned int var_1 = 3679274739U;
unsigned short var_3 = (unsigned short)17440;
short var_5 = (short)13048;
short var_7 = (short)-9207;
long long int var_8 = 7044804400446006945LL;
short var_9 = (short)10230;
unsigned int var_12 = 138943143U;
unsigned int var_13 = 2474419561U;
short var_14 = (short)14343;
int zero = 0;
short var_15 = (short)26510;
int var_16 = -163813537;
long long int var_17 = 8130540884695355991LL;
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
