#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2287297799913667053ULL;
unsigned int var_1 = 1778043167U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-15664;
signed char var_7 = (signed char)116;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)48166;
unsigned short var_10 = (unsigned short)928;
signed char var_12 = (signed char)37;
short var_13 = (short)31879;
unsigned short var_14 = (unsigned short)25179;
unsigned long long int var_15 = 14879226617831608637ULL;
int zero = 0;
signed char var_16 = (signed char)8;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)61413;
unsigned long long int var_19 = 11830725536648433071ULL;
unsigned short var_20 = (unsigned short)56512;
unsigned char var_21 = (unsigned char)15;
int var_22 = -174208116;
unsigned long long int var_23 = 13152843467522140442ULL;
unsigned char var_24 = (unsigned char)219;
short var_25 = (short)5779;
_Bool var_26 = (_Bool)1;
_Bool arr_2 [21] ;
signed char arr_4 [21] [21] ;
_Bool arr_7 [21] ;
unsigned char arr_10 [14] ;
short arr_5 [21] ;
unsigned char arr_13 [14] [14] [14] ;
unsigned int arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-7734;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)219 : (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 2560159151U : 1516496000U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
