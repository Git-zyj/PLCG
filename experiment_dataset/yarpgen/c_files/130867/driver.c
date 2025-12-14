#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1901939160;
unsigned int var_1 = 2120996824U;
long long int var_2 = 2658463652405241156LL;
signed char var_3 = (signed char)22;
short var_7 = (short)7108;
unsigned char var_8 = (unsigned char)71;
unsigned short var_9 = (unsigned short)46955;
unsigned int var_10 = 689823782U;
int zero = 0;
unsigned int var_11 = 1302611624U;
short var_12 = (short)-10782;
unsigned char var_13 = (unsigned char)172;
unsigned int var_14 = 3476710060U;
unsigned long long int var_15 = 7796128072313424871ULL;
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
