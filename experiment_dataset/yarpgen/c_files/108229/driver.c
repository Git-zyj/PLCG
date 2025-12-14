#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 21020110U;
unsigned short var_3 = (unsigned short)1810;
short var_6 = (short)4572;
signed char var_8 = (signed char)82;
signed char var_15 = (signed char)-47;
int var_18 = 1710300175;
int zero = 0;
unsigned short var_20 = (unsigned short)48219;
_Bool var_21 = (_Bool)1;
int var_22 = 442950796;
unsigned char var_23 = (unsigned char)13;
void init() {
}

void checksum() {
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
