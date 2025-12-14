#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32297;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-107;
signed char var_6 = (signed char)70;
unsigned int var_7 = 2551739347U;
unsigned char var_8 = (unsigned char)79;
unsigned short var_9 = (unsigned short)49370;
unsigned int var_10 = 3061821771U;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)53849;
long long int var_16 = 4401637089073821900LL;
unsigned short var_17 = (unsigned short)20945;
unsigned long long int var_18 = 11003891115724408344ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-13906;
int var_22 = -2099262781;
unsigned int var_23 = 2922322400U;
short var_24 = (short)-10120;
signed char var_25 = (signed char)27;
long long int var_26 = 6575751203548147608LL;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 2164970043U;
long long int var_29 = 7599924542991157611LL;
unsigned short var_30 = (unsigned short)54451;
_Bool arr_0 [17] ;
int arr_6 [16] ;
unsigned char arr_11 [25] ;
_Bool arr_12 [25] ;
int arr_4 [17] [17] [17] ;
signed char arr_5 [17] [17] [17] ;
unsigned short arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -151113140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1659119120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)10273;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
