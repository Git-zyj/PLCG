#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2903062895U;
signed char var_3 = (signed char)-51;
unsigned int var_5 = 3596274410U;
unsigned short var_9 = (unsigned short)46856;
unsigned char var_12 = (unsigned char)109;
unsigned int var_13 = 1633501491U;
unsigned char var_14 = (unsigned char)30;
signed char var_15 = (signed char)-96;
unsigned int var_17 = 208160756U;
int zero = 0;
long long int var_19 = -1796959196507348385LL;
signed char var_20 = (signed char)33;
unsigned int var_21 = 3842643233U;
int var_22 = 1125208339;
unsigned short var_23 = (unsigned short)52169;
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
