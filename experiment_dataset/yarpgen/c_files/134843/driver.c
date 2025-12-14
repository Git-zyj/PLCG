#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
short var_1 = (short)-2129;
int var_2 = -687249683;
signed char var_11 = (signed char)99;
signed char var_12 = (signed char)-13;
short var_14 = (short)-16244;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)15;
signed char var_17 = (signed char)27;
int var_18 = -1025953575;
unsigned char var_19 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
