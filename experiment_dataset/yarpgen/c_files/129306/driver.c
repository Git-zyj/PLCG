#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-73;
unsigned long long int var_6 = 3696342797887279639ULL;
unsigned long long int var_14 = 16310047571498356546ULL;
int zero = 0;
unsigned int var_15 = 2366586615U;
signed char var_16 = (signed char)16;
int var_17 = 2045968976;
unsigned short var_18 = (unsigned short)17630;
unsigned short var_19 = (unsigned short)29137;
unsigned short arr_0 [20] ;
long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49185 : (unsigned short)42164;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7504902581542276663LL : -3725943498653115546LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
