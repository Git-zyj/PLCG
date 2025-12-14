#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 721230306U;
signed char var_3 = (signed char)-107;
signed char var_5 = (signed char)104;
unsigned char var_8 = (unsigned char)158;
signed char var_9 = (signed char)-48;
unsigned int var_12 = 3836701703U;
unsigned short var_14 = (unsigned short)10075;
unsigned short var_18 = (unsigned short)37927;
int zero = 0;
signed char var_19 = (signed char)32;
unsigned short var_20 = (unsigned short)3508;
long long int var_21 = -3917031663280876734LL;
long long int var_22 = 971926306029195919LL;
short var_23 = (short)-26393;
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
