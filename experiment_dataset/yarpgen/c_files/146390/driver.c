#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
unsigned int var_3 = 2017465381U;
int var_12 = 253780664;
unsigned int var_13 = 3220166598U;
short var_15 = (short)24812;
unsigned int var_16 = 4172430806U;
int var_17 = 1970639891;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4123843648U;
unsigned char var_20 = (unsigned char)251;
short var_21 = (short)-19897;
unsigned int var_22 = 3484968905U;
unsigned char var_23 = (unsigned char)20;
unsigned int var_24 = 2465306912U;
unsigned short var_25 = (unsigned short)34101;
unsigned char var_26 = (unsigned char)37;
unsigned long long int var_27 = 8897963025138804905ULL;
unsigned int var_28 = 2203956709U;
long long int var_29 = 2658146533636862205LL;
unsigned char var_30 = (unsigned char)10;
short var_31 = (short)-3514;
_Bool arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
_Bool arr_5 [13] [13] ;
unsigned int arr_9 [25] [25] ;
unsigned long long int arr_10 [25] ;
short arr_12 [25] [25] ;
short arr_13 [25] [25] ;
signed char arr_8 [13] ;
unsigned long long int arr_14 [25] ;
unsigned char arr_17 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1607314577U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 3276389533U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 7586194124169817084ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (short)22583;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (short)8819;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3766318129242269269ULL : 16903073132277903884ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)228 : (unsigned char)214;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
