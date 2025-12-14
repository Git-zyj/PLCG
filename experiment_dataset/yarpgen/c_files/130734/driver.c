#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5777933872953056588ULL;
signed char var_3 = (signed char)26;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_14 = (short)-9540;
int zero = 0;
signed char var_18 = (signed char)-24;
short var_19 = (short)17644;
long long int var_20 = -6969200716996253954LL;
unsigned int var_21 = 1694838097U;
long long int var_22 = -2212878200259644635LL;
unsigned int var_23 = 2432141883U;
unsigned short var_24 = (unsigned short)61268;
short var_25 = (short)-18857;
unsigned long long int var_26 = 9164790717133716806ULL;
_Bool arr_0 [21] [21] ;
unsigned char arr_2 [21] ;
short arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-17575;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
