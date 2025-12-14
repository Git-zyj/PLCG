#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4207794229U;
signed char var_4 = (signed char)104;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)179;
unsigned long long int var_7 = 17288193072386191926ULL;
unsigned long long int var_8 = 9353115871289282250ULL;
signed char var_9 = (signed char)80;
int var_10 = -20752424;
unsigned long long int var_11 = 2782316454731741208ULL;
int var_13 = -2055078892;
signed char var_15 = (signed char)106;
short var_16 = (short)70;
int zero = 0;
int var_17 = 726126402;
int var_18 = 399905948;
int var_19 = 1282952162;
int var_20 = -2037752397;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
