#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4139;
int var_2 = 681072176;
int var_4 = -999379184;
int var_5 = -347289155;
long long int var_10 = 4941457812042800678LL;
long long int var_12 = -3008410567328419595LL;
int zero = 0;
short var_13 = (short)4349;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
