#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1344397925;
unsigned char var_7 = (unsigned char)12;
unsigned long long int var_9 = 16121273347200071657ULL;
unsigned char var_10 = (unsigned char)12;
unsigned char var_11 = (unsigned char)45;
unsigned char var_12 = (unsigned char)138;
int var_13 = 279133237;
short var_15 = (short)20977;
unsigned long long int var_17 = 13974742405341993651ULL;
long long int var_18 = -1775244431335370830LL;
unsigned char var_19 = (unsigned char)197;
int zero = 0;
int var_20 = 712965105;
signed char var_21 = (signed char)-115;
signed char var_22 = (signed char)120;
short var_23 = (short)-29342;
int var_24 = 66769535;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
