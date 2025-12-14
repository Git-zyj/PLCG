#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1927021377U;
unsigned long long int var_1 = 8924587063095200469ULL;
unsigned short var_2 = (unsigned short)52344;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)27948;
signed char var_11 = (signed char)127;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)-102;
void init() {
}

void checksum() {
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
