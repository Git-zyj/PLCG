#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54796;
unsigned long long int var_1 = 7795098512615698774ULL;
short var_2 = (short)25135;
long long int var_3 = 7494953165515373013LL;
int var_4 = 1841450455;
signed char var_5 = (signed char)-112;
short var_6 = (short)6838;
unsigned long long int var_7 = 9217787592009676522ULL;
int var_8 = -1416889051;
long long int var_9 = 3848440187769197868LL;
int var_10 = -508491760;
int zero = 0;
int var_11 = -709991796;
long long int var_12 = 3465844592274084586LL;
unsigned short var_13 = (unsigned short)3251;
int var_14 = -339919937;
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
