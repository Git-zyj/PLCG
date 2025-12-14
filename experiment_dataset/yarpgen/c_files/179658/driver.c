#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6061;
int var_2 = -198268141;
unsigned short var_4 = (unsigned short)54523;
unsigned long long int var_5 = 9696921396662474032ULL;
unsigned short var_6 = (unsigned short)2634;
short var_7 = (short)-25484;
int var_8 = -1900387419;
unsigned short var_10 = (unsigned short)8198;
int zero = 0;
unsigned long long int var_11 = 14044082450979165654ULL;
unsigned long long int var_12 = 5854195354194120987ULL;
unsigned long long int var_13 = 3871363528628048310ULL;
int var_14 = 548662274;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
