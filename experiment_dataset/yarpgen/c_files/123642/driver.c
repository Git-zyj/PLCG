#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65179;
short var_1 = (short)19706;
long long int var_3 = -6877852076167436581LL;
unsigned short var_5 = (unsigned short)57952;
signed char var_6 = (signed char)-78;
short var_8 = (short)-31806;
unsigned char var_9 = (unsigned char)123;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-9379;
short var_12 = (short)-978;
int zero = 0;
long long int var_13 = -2352715391675784998LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-3;
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
