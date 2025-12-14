#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12070;
long long int var_1 = 802222854633895685LL;
unsigned char var_2 = (unsigned char)200;
signed char var_4 = (signed char)-65;
long long int var_6 = 2875788823748996543LL;
unsigned char var_10 = (unsigned char)240;
unsigned int var_11 = 831269847U;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 499972291U;
int zero = 0;
long long int var_16 = -5635028942644230567LL;
unsigned long long int var_17 = 1303795639000762402ULL;
signed char var_18 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
