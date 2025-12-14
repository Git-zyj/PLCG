#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7291326983405730207LL;
signed char var_1 = (signed char)-43;
signed char var_2 = (signed char)92;
long long int var_3 = 2098002783618192299LL;
unsigned short var_4 = (unsigned short)24585;
long long int var_5 = -6206580920679193925LL;
int var_6 = 1963595814;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3494353282363120696LL;
short var_10 = (short)-10208;
int zero = 0;
int var_11 = 682967277;
unsigned short var_12 = (unsigned short)31790;
int var_13 = -1220169249;
int var_14 = 2112715713;
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
