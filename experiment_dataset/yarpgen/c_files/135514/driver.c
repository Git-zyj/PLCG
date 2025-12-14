#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned int var_1 = 940292324U;
unsigned short var_3 = (unsigned short)24057;
int var_5 = 1188668858;
int var_6 = -2071476147;
signed char var_7 = (signed char)-116;
unsigned char var_8 = (unsigned char)107;
unsigned long long int var_9 = 14786713208724703837ULL;
unsigned int var_11 = 3922719843U;
signed char var_12 = (signed char)25;
short var_13 = (short)-1592;
unsigned char var_14 = (unsigned char)134;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2183710797U;
unsigned int var_17 = 3015299926U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35633;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
