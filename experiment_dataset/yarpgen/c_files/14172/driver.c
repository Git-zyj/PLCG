#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)49;
long long int var_4 = 4874464805909627306LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)7209;
unsigned short var_9 = (unsigned short)8741;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)36168;
unsigned char var_12 = (unsigned char)127;
signed char var_13 = (signed char)-93;
int zero = 0;
short var_16 = (short)-10421;
unsigned long long int var_17 = 3988281841009324462ULL;
short var_18 = (short)23961;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-10364;
unsigned int var_21 = 1001086128U;
unsigned long long int var_22 = 12520646435004898302ULL;
int var_23 = -1705150046;
unsigned long long int var_24 = 18235562898747466883ULL;
unsigned int arr_2 [25] [25] ;
unsigned char arr_3 [25] ;
unsigned char arr_6 [25] ;
unsigned long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3454224805U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)225 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 16486836740429697040ULL : 2370327904644568525ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
