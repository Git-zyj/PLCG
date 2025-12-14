#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 5307452589839840623ULL;
_Bool var_6 = (_Bool)0;
int var_7 = 1162044973;
unsigned char var_8 = (unsigned char)191;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-40;
unsigned short var_19 = (unsigned short)35831;
unsigned long long int var_20 = 8085567758157894257ULL;
_Bool arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
short arr_2 [13] ;
unsigned long long int arr_3 [13] ;
_Bool arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 5016365043001507061ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-5097;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 12307738120684641071ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
