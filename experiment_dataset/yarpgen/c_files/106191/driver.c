#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2636;
long long int var_2 = -6666471071249192928LL;
unsigned long long int var_4 = 16898194297363676503ULL;
unsigned char var_7 = (unsigned char)32;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-31518;
signed char var_11 = (signed char)-34;
unsigned long long int var_12 = 3080408118140078186ULL;
unsigned int var_14 = 4046839065U;
short var_16 = (short)-1748;
unsigned long long int var_18 = 6776573011064125292ULL;
unsigned char var_19 = (unsigned char)228;
int zero = 0;
unsigned char var_20 = (unsigned char)201;
unsigned short var_21 = (unsigned short)53058;
unsigned long long int var_22 = 3932460287728498436ULL;
short var_23 = (short)30361;
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
