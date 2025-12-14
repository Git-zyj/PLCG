#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38561;
unsigned long long int var_1 = 1720748345198622864ULL;
int var_4 = 1141281887;
signed char var_6 = (signed char)54;
unsigned char var_12 = (unsigned char)148;
int zero = 0;
unsigned int var_18 = 302453064U;
unsigned long long int var_19 = 11820366922580661776ULL;
short var_20 = (short)-3407;
long long int var_21 = -5455071538610970996LL;
unsigned int var_22 = 825161101U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
