#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
short var_1 = (short)-26028;
unsigned long long int var_2 = 3572947398888991652ULL;
unsigned int var_4 = 3540494952U;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 62553746U;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
signed char var_12 = (signed char)-74;
unsigned int var_13 = 3853441939U;
unsigned int var_14 = 2437582465U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
