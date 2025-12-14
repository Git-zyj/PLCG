#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3176011626016625930LL;
long long int var_8 = 6478738310231678678LL;
long long int var_12 = 9194100766520204644LL;
unsigned int var_13 = 1521132679U;
int var_14 = -952112781;
unsigned short var_15 = (unsigned short)48140;
unsigned short var_16 = (unsigned short)4258;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 4254591307U;
long long int var_20 = 6465295565384667462LL;
int var_21 = 1666180729;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
