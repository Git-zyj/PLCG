#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40136;
unsigned short var_5 = (unsigned short)45177;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-91;
long long int var_9 = -2617859265151405292LL;
unsigned short var_10 = (unsigned short)9633;
int zero = 0;
int var_11 = 142572418;
signed char var_12 = (signed char)26;
int var_13 = -1503546027;
long long int var_14 = -394379636691387172LL;
unsigned char var_15 = (unsigned char)94;
unsigned char var_16 = (unsigned char)0;
unsigned short var_17 = (unsigned short)6893;
int var_18 = -1044077208;
long long int var_19 = -3522738666232556228LL;
unsigned int var_20 = 934102147U;
unsigned int arr_11 [24] ;
short arr_7 [20] [20] [20] ;
unsigned long long int arr_13 [24] ;
unsigned short arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1151441300U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)4511 : (short)6509;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 12209649578141909373ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59659 : (unsigned short)48052;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
