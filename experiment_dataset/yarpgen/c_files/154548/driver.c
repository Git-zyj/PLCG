#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
signed char var_2 = (signed char)-51;
short var_3 = (short)-8803;
unsigned short var_4 = (unsigned short)40881;
long long int var_5 = 8773946789444537872LL;
unsigned short var_6 = (unsigned short)25466;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)35;
signed char var_11 = (signed char)92;
signed char var_12 = (signed char)-91;
int zero = 0;
int var_13 = 1804920107;
unsigned short var_14 = (unsigned short)54222;
signed char var_15 = (signed char)-75;
int var_16 = -768780905;
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
