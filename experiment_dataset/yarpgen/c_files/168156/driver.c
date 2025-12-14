#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
signed char var_3 = (signed char)81;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 945933627U;
unsigned int var_9 = 290419160U;
unsigned short var_12 = (unsigned short)40083;
signed char var_15 = (signed char)-44;
int zero = 0;
short var_17 = (short)13818;
unsigned int var_18 = 2565806468U;
signed char var_19 = (signed char)-122;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)106;
signed char var_22 = (signed char)23;
int var_23 = -52821178;
unsigned char var_24 = (unsigned char)100;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
long long int arr_0 [20] ;
signed char arr_5 [20] ;
_Bool arr_6 [20] ;
int arr_4 [20] [20] [20] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1152213332670436398LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 111250133 : -130956003;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1530964588;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
