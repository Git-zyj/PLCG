#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6807485600770707976ULL;
unsigned long long int var_5 = 10334617973501387139ULL;
signed char var_6 = (signed char)80;
unsigned long long int var_7 = 14150586090265247639ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5371703025518118924ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)60603;
unsigned long long int var_17 = 6072683791074081903ULL;
unsigned long long int var_18 = 2346515616739769487ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 998937139U;
unsigned long long int arr_4 [19] [19] [19] ;
_Bool arr_6 [19] [19] ;
unsigned short arr_7 [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2342851935242367099ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)44880;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 16907288293590700216ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)23365;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
