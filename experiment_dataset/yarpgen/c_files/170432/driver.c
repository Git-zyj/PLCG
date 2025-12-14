#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
unsigned char var_2 = (unsigned char)213;
int var_3 = 1073607252;
unsigned char var_4 = (unsigned char)29;
unsigned short var_12 = (unsigned short)38542;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)14734;
int zero = 0;
unsigned char var_19 = (unsigned char)123;
signed char var_20 = (signed char)-46;
signed char var_21 = (signed char)-109;
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
