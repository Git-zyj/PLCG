#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42360;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 13895536756610455371ULL;
short var_10 = (short)-11807;
long long int var_11 = 8246379476526963482LL;
long long int var_14 = 37752857547325794LL;
short var_16 = (short)-16758;
unsigned int var_17 = 1357527782U;
int zero = 0;
short var_18 = (short)32123;
unsigned short var_19 = (unsigned short)37277;
int var_20 = 1211553839;
unsigned int var_21 = 2140414564U;
unsigned char var_22 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
