#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45499;
unsigned char var_2 = (unsigned char)213;
unsigned char var_5 = (unsigned char)20;
short var_10 = (short)-26291;
int var_11 = 1809463836;
long long int var_12 = 7667390887291812274LL;
int zero = 0;
unsigned int var_14 = 3813621235U;
long long int var_15 = 8207478601703196360LL;
unsigned char var_16 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
