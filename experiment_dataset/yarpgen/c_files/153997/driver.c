#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 41391752U;
signed char var_2 = (signed char)80;
short var_3 = (short)27058;
signed char var_8 = (signed char)-44;
unsigned char var_18 = (unsigned char)88;
int zero = 0;
unsigned int var_20 = 199372155U;
unsigned int var_21 = 302986762U;
short var_22 = (short)15386;
signed char var_23 = (signed char)73;
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
