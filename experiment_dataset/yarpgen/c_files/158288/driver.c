#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17959;
unsigned short var_2 = (unsigned short)9595;
unsigned short var_4 = (unsigned short)42036;
short var_6 = (short)26200;
unsigned short var_13 = (unsigned short)11154;
int zero = 0;
unsigned short var_16 = (unsigned short)65528;
unsigned short var_17 = (unsigned short)27504;
unsigned short var_18 = (unsigned short)15189;
unsigned long long int var_19 = 4759670857801069625ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)30953;
short var_22 = (short)4398;
long long int arr_0 [25] ;
short arr_3 [25] ;
unsigned short arr_4 [25] ;
signed char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -6420074935135469618LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)24339;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)13073;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-17;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
