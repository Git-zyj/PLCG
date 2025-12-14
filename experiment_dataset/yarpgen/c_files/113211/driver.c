#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6787;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-111;
signed char var_5 = (signed char)-55;
short var_6 = (short)16234;
int zero = 0;
unsigned long long int var_13 = 9158323838886639228ULL;
signed char var_14 = (signed char)-74;
signed char var_15 = (signed char)-17;
short var_16 = (short)16704;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
