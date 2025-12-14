#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3774;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)34;
unsigned int var_4 = 3965370229U;
unsigned short var_5 = (unsigned short)51185;
unsigned short var_7 = (unsigned short)14314;
unsigned long long int var_8 = 5746484295934006162ULL;
signed char var_10 = (signed char)-109;
int zero = 0;
int var_11 = -373720651;
_Bool var_12 = (_Bool)0;
short var_13 = (short)26229;
signed char var_14 = (signed char)-18;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-3929;
signed char var_17 = (signed char)-78;
long long int var_18 = 6850375825581357222LL;
unsigned short var_19 = (unsigned short)64117;
signed char var_20 = (signed char)-4;
short var_21 = (short)29743;
unsigned int var_22 = 2967563454U;
int var_23 = 36727589;
long long int var_24 = 2309369085358193119LL;
_Bool arr_0 [17] ;
long long int arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned long long int arr_6 [15] ;
signed char arr_15 [17] ;
unsigned char arr_5 [15] ;
unsigned int arr_12 [15] [15] [15] ;
_Bool arr_17 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1964897384479670042LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 9133064466866151024ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2709772888U : 3099111294U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
