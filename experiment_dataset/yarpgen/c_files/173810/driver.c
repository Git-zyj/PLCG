#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -676247694110056348LL;
_Bool var_11 = (_Bool)1;
short var_14 = (short)12693;
signed char var_17 = (signed char)-60;
int zero = 0;
long long int var_18 = -8522119303658935861LL;
unsigned short var_19 = (unsigned short)17361;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-94;
unsigned short var_22 = (unsigned short)9188;
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
