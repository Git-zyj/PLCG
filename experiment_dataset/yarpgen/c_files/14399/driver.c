#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
short var_4 = (short)-10079;
long long int var_6 = -2353563589738775874LL;
unsigned short var_8 = (unsigned short)52065;
int zero = 0;
unsigned short var_12 = (unsigned short)32927;
long long int var_13 = 1024876619034530547LL;
long long int var_14 = 5904010749903601391LL;
_Bool var_15 = (_Bool)1;
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
