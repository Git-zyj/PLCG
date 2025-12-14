#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
int var_1 = 266843259;
_Bool var_3 = (_Bool)1;
long long int var_4 = -2473673914324792543LL;
int var_6 = 271089470;
int var_11 = -825468996;
signed char var_12 = (signed char)38;
signed char var_14 = (signed char)-7;
short var_15 = (short)20159;
int zero = 0;
signed char var_17 = (signed char)-111;
unsigned int var_18 = 2694886388U;
long long int var_19 = 6973027744759451836LL;
short var_20 = (short)4301;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
