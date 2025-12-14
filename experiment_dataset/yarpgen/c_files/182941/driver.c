#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3257078790U;
unsigned long long int var_2 = 17132946186168004546ULL;
signed char var_3 = (signed char)14;
unsigned int var_5 = 3592577940U;
signed char var_6 = (signed char)97;
short var_18 = (short)26694;
int zero = 0;
unsigned int var_20 = 2637285579U;
signed char var_21 = (signed char)101;
unsigned char var_22 = (unsigned char)75;
void init() {
}

void checksum() {
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
