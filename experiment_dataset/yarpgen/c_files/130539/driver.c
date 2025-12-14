#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
long long int var_3 = -8928520930204919500LL;
short var_11 = (short)-18834;
long long int var_12 = -2917035032324869220LL;
unsigned short var_16 = (unsigned short)49369;
unsigned short var_18 = (unsigned short)4213;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned short var_20 = (unsigned short)34623;
long long int var_21 = -379961575586363406LL;
int var_22 = 149154913;
long long int var_23 = -2157940506185945704LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
