#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
short var_1 = (short)1680;
signed char var_4 = (signed char)-80;
signed char var_6 = (signed char)-116;
signed char var_7 = (signed char)77;
int var_8 = -1467633972;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 813648447038909007ULL;
short var_20 = (short)11006;
unsigned int var_21 = 3612179932U;
void init() {
}

void checksum() {
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
