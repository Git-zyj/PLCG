#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9893;
unsigned short var_4 = (unsigned short)4598;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_13 = -801077808;
unsigned long long int var_15 = 8820773156010031308ULL;
int zero = 0;
signed char var_16 = (signed char)-24;
signed char var_17 = (signed char)97;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
