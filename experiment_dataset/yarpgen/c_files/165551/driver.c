#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1056887573;
long long int var_3 = -603210346622551340LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 8148095024234624411LL;
int var_6 = -2015775481;
unsigned short var_7 = (unsigned short)61144;
signed char var_8 = (signed char)-99;
unsigned int var_9 = 3241039669U;
int var_10 = 1176812431;
int zero = 0;
unsigned short var_11 = (unsigned short)26006;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-94;
unsigned long long int var_14 = 2825759490317651074ULL;
_Bool arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
