#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52437;
int var_2 = -1780781252;
signed char var_4 = (signed char)-45;
unsigned int var_5 = 646008399U;
unsigned int var_12 = 382401754U;
unsigned int var_13 = 3379395127U;
int var_14 = -733480376;
int zero = 0;
long long int var_19 = -659573321642236332LL;
short var_20 = (short)30090;
void init() {
}

void checksum() {
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
