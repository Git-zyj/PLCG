#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3360563840U;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 1787418853U;
unsigned char var_9 = (unsigned char)126;
unsigned int var_10 = 1052157331U;
signed char var_16 = (signed char)-31;
int zero = 0;
unsigned int var_18 = 2259117630U;
signed char var_19 = (signed char)35;
short var_20 = (short)18059;
unsigned short var_21 = (unsigned short)64883;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
