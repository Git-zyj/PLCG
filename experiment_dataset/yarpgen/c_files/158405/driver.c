#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1614643302U;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)75;
signed char var_10 = (signed char)-86;
unsigned short var_11 = (unsigned short)21685;
signed char var_12 = (signed char)-79;
short var_13 = (short)18093;
unsigned short var_14 = (unsigned short)15017;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)5729;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-85;
unsigned int var_21 = 1040074632U;
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
