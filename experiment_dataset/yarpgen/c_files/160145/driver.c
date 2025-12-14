#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48191;
unsigned short var_1 = (unsigned short)34914;
unsigned char var_2 = (unsigned char)79;
short var_4 = (short)30690;
int var_5 = 1050330717;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)61484;
unsigned char var_9 = (unsigned char)73;
int zero = 0;
unsigned int var_11 = 2866995959U;
unsigned short var_12 = (unsigned short)6579;
unsigned long long int var_13 = 10164460101559443888ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
