#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10012;
unsigned char var_2 = (unsigned char)150;
unsigned short var_3 = (unsigned short)34924;
unsigned short var_4 = (unsigned short)13974;
unsigned short var_5 = (unsigned short)48038;
long long int var_6 = 3072280642417330141LL;
unsigned char var_7 = (unsigned char)79;
int zero = 0;
unsigned int var_10 = 3287239443U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
