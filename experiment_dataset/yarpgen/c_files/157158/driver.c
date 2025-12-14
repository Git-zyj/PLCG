#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1129263907;
signed char var_3 = (signed char)-33;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)37;
unsigned short var_12 = (unsigned short)64543;
signed char var_14 = (signed char)28;
int zero = 0;
unsigned short var_20 = (unsigned short)63903;
long long int var_21 = 536755569178986139LL;
unsigned char var_22 = (unsigned char)164;
_Bool var_23 = (_Bool)0;
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
