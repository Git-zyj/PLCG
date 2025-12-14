#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2104436679;
unsigned int var_2 = 2385114646U;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3137604120282051546LL;
unsigned long long int var_5 = 10521766917817876100ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-21346;
int var_10 = -446793632;
long long int var_11 = 5646432484716877104LL;
unsigned short var_12 = (unsigned short)36542;
int zero = 0;
short var_13 = (short)2515;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-27;
unsigned short var_16 = (unsigned short)32567;
unsigned short arr_1 [24] ;
unsigned char arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)63967;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48920 : (unsigned short)13954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2338344889151883201ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)45010 : (unsigned short)1817;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
