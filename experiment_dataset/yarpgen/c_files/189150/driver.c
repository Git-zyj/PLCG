#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1151;
long long int var_4 = 6171588624419436037LL;
signed char var_7 = (signed char)-5;
unsigned int var_8 = 2420697631U;
int zero = 0;
unsigned int var_10 = 2435473369U;
short var_11 = (short)-9774;
short var_12 = (short)25233;
int var_13 = 619089048;
long long int var_14 = 2689687269041354428LL;
long long int var_15 = 2764453126135838740LL;
unsigned char var_16 = (unsigned char)196;
signed char var_17 = (signed char)113;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3693204097U;
int var_20 = 52766390;
long long int arr_1 [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
long long int arr_7 [18] [18] ;
int arr_8 [18] [18] ;
short arr_11 [20] ;
short arr_13 [20] ;
unsigned long long int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1362429110558639689LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)208 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2049686369U : 876110560U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -7824708690352791033LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 935277784;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)13813;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (short)-12133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 17039789005629179345ULL;
}

void checksum() {
    hash(&seed, var_10);
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
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
