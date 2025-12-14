#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
short var_2 = (short)-24615;
signed char var_3 = (signed char)111;
unsigned int var_4 = 724097337U;
short var_5 = (short)-3360;
signed char var_8 = (signed char)100;
int var_11 = 803503860;
int zero = 0;
short var_13 = (short)12806;
short var_14 = (short)31702;
short var_15 = (short)-17213;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
