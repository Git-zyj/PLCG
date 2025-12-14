#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1413412579;
long long int var_4 = -7385261845160381954LL;
unsigned short var_5 = (unsigned short)37766;
unsigned short var_6 = (unsigned short)17278;
int var_7 = -2001664711;
long long int var_8 = -4493523377145632074LL;
unsigned int var_9 = 1271070959U;
unsigned int var_11 = 3952996865U;
int zero = 0;
unsigned int var_12 = 2209415783U;
unsigned char var_13 = (unsigned char)8;
unsigned int var_14 = 132272188U;
void init() {
}

void checksum() {
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
