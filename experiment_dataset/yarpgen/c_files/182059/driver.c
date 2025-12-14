#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)82;
unsigned short var_2 = (unsigned short)41319;
short var_4 = (short)-3405;
signed char var_5 = (signed char)-115;
unsigned long long int var_6 = 9504960834023835185ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_10 = -2025409738819181921LL;
unsigned long long int var_12 = 16804164581251600333ULL;
unsigned short var_13 = (unsigned short)33404;
unsigned long long int var_15 = 18160687255175168484ULL;
unsigned short var_16 = (unsigned short)17801;
int zero = 0;
int var_17 = 431487650;
_Bool var_18 = (_Bool)0;
int var_19 = -1521725088;
long long int var_20 = -6005963885846883638LL;
unsigned int var_21 = 1060728992U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
