#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
long long int var_2 = -1979608893648085988LL;
short var_5 = (short)-21213;
long long int var_6 = 7802105852929562821LL;
short var_7 = (short)-2230;
short var_8 = (short)3776;
unsigned int var_9 = 1920857573U;
unsigned long long int var_10 = 12402706175796269688ULL;
unsigned long long int var_11 = 7830401879911383286ULL;
long long int var_12 = 5943798080026465806LL;
int var_13 = 781823865;
unsigned char var_14 = (unsigned char)251;
unsigned char var_16 = (unsigned char)62;
signed char var_17 = (signed char)-60;
int zero = 0;
int var_20 = 1914321051;
unsigned int var_21 = 302807359U;
long long int var_22 = -7415245937513910746LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)24484;
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
