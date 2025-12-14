#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4701792334878732454ULL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-84;
signed char var_8 = (signed char)76;
unsigned long long int var_9 = 10827953455044506806ULL;
unsigned char var_11 = (unsigned char)165;
signed char var_12 = (signed char)103;
int var_13 = -1549661613;
int zero = 0;
unsigned short var_14 = (unsigned short)49102;
unsigned long long int var_15 = 14098252915833579587ULL;
unsigned char var_16 = (unsigned char)103;
unsigned short var_17 = (unsigned short)10089;
unsigned short var_18 = (unsigned short)50646;
unsigned long long int var_19 = 10873687153968869841ULL;
signed char arr_1 [14] [14] ;
_Bool arr_3 [25] ;
_Bool arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
signed char arr_2 [14] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)60600;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1765804596 : 488343519;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
