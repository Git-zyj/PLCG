#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)134;
int var_5 = -1327960627;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)235;
unsigned char var_11 = (unsigned char)124;
signed char var_12 = (signed char)20;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned int var_19 = 3105680861U;
short var_20 = (short)-18744;
unsigned long long int var_21 = 9318679419328213990ULL;
signed char var_22 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
