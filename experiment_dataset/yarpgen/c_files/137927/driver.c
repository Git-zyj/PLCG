#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6028;
_Bool var_2 = (_Bool)0;
int var_3 = -1571583662;
unsigned int var_7 = 3260240302U;
unsigned int var_9 = 460296962U;
unsigned long long int var_11 = 1296066181445044637ULL;
unsigned short var_12 = (unsigned short)59928;
unsigned long long int var_18 = 17227429507894213152ULL;
int zero = 0;
short var_20 = (short)26086;
unsigned short var_21 = (unsigned short)27069;
unsigned long long int var_22 = 16165017391512136409ULL;
short var_23 = (short)26853;
short var_24 = (short)3278;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_3 [14] [14] [14] ;
unsigned short arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5977068920421445106ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3108853863788475609ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)5970;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2786280235U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
