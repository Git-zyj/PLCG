#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49174;
unsigned short var_4 = (unsigned short)15372;
unsigned int var_5 = 2633806005U;
unsigned short var_6 = (unsigned short)38016;
unsigned short var_11 = (unsigned short)52536;
int var_13 = 39869313;
unsigned int var_14 = 806221664U;
int var_15 = 2016465183;
int zero = 0;
signed char var_18 = (signed char)1;
int var_19 = 1288881073;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
