#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1293967586;
long long int var_4 = -2720716164367482217LL;
int var_6 = 1591815831;
long long int var_8 = -6438632353136767539LL;
unsigned char var_10 = (unsigned char)181;
signed char var_14 = (signed char)120;
signed char var_16 = (signed char)-120;
int zero = 0;
signed char var_18 = (signed char)-44;
short var_19 = (short)-2927;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
