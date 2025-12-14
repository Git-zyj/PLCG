#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3728538491U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8352808432865383639ULL;
unsigned int var_3 = 229126480U;
unsigned short var_4 = (unsigned short)5014;
_Bool var_5 = (_Bool)1;
unsigned long long int var_11 = 17552480844819092979ULL;
unsigned short var_14 = (unsigned short)32565;
short var_16 = (short)96;
signed char var_17 = (signed char)94;
int zero = 0;
short var_18 = (short)5951;
int var_19 = 1861982656;
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
