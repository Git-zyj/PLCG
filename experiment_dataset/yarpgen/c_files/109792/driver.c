#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)46;
signed char var_7 = (signed char)-40;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3025153652U;
unsigned char var_12 = (unsigned char)207;
unsigned short var_13 = (unsigned short)30338;
signed char var_14 = (signed char)97;
int zero = 0;
unsigned short var_19 = (unsigned short)5921;
unsigned long long int var_20 = 16173332006518569353ULL;
unsigned int var_21 = 2552444719U;
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
