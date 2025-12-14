#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1101157105;
short var_4 = (short)31264;
short var_8 = (short)25437;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7717837815161908572LL;
int zero = 0;
short var_19 = (short)-20933;
long long int var_20 = -5179532871370482405LL;
long long int var_21 = -4833627359145249077LL;
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
