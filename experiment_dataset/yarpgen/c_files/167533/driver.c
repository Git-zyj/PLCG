#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4157663169610179589LL;
long long int var_4 = 4417586509057605764LL;
unsigned short var_5 = (unsigned short)56531;
unsigned int var_7 = 1560561445U;
unsigned char var_8 = (unsigned char)245;
signed char var_9 = (signed char)-98;
int var_14 = 528649137;
unsigned char var_16 = (unsigned char)68;
unsigned long long int var_17 = 11951385319276743181ULL;
int zero = 0;
int var_19 = 1542346976;
_Bool var_20 = (_Bool)1;
int var_21 = 153499093;
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
