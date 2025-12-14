#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
long long int var_2 = 1558204224632881745LL;
short var_4 = (short)-29749;
unsigned int var_5 = 2215699423U;
signed char var_11 = (signed char)-16;
short var_15 = (short)-31301;
signed char var_18 = (signed char)98;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1205893520;
short var_21 = (short)-32067;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)8089;
short var_24 = (short)-19101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
