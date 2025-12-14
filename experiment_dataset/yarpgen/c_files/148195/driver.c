#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59917;
unsigned int var_5 = 1397635723U;
short var_6 = (short)-12616;
int var_7 = -408294892;
unsigned int var_8 = 2387952436U;
unsigned short var_10 = (unsigned short)19256;
short var_11 = (short)31828;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
unsigned int var_14 = 1626224146U;
unsigned int var_15 = 1005134433U;
void init() {
}

void checksum() {
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
