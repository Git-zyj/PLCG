#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
signed char var_2 = (signed char)-26;
signed char var_4 = (signed char)-55;
short var_6 = (short)11130;
signed char var_8 = (signed char)32;
short var_10 = (short)29371;
unsigned int var_14 = 271131471U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)80;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)147;
int var_21 = 879737908;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
