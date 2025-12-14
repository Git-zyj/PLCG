#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)254;
unsigned char var_7 = (unsigned char)19;
unsigned int var_8 = 3543763392U;
signed char var_13 = (signed char)-96;
int zero = 0;
unsigned short var_15 = (unsigned short)22439;
unsigned int var_16 = 2918784016U;
unsigned long long int var_17 = 17819496903788274702ULL;
unsigned short var_18 = (unsigned short)9466;
unsigned int var_19 = 2850162505U;
unsigned char var_20 = (unsigned char)150;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12877041920394002080ULL;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
signed char arr_2 [24] [24] ;
int arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
signed char arr_12 [25] [25] [25] [25] ;
_Bool arr_3 [24] [24] ;
unsigned int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 11603009495705825606ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)25481;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1997142339;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)35667;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 934590511U : 352050130U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
