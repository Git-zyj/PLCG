#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
unsigned int var_2 = 1410345614U;
long long int var_4 = -8392671589573710781LL;
signed char var_6 = (signed char)-122;
unsigned short var_7 = (unsigned short)10581;
unsigned int var_8 = 2583402237U;
unsigned char var_9 = (unsigned char)36;
unsigned char var_10 = (unsigned char)194;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
unsigned short var_13 = (unsigned short)22318;
long long int var_14 = -6377216595185584129LL;
unsigned int var_15 = 1202199213U;
void init() {
}

void checksum() {
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
