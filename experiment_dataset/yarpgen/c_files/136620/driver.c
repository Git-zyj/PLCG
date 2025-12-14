#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54161;
short var_3 = (short)-21808;
_Bool var_4 = (_Bool)1;
short var_10 = (short)-21288;
int var_11 = -740484054;
unsigned char var_12 = (unsigned char)138;
long long int var_13 = 4113738360654147395LL;
unsigned short var_15 = (unsigned short)45440;
_Bool var_17 = (_Bool)0;
long long int var_19 = -6104858261888211935LL;
int zero = 0;
int var_20 = -1548871325;
short var_21 = (short)23247;
unsigned short var_22 = (unsigned short)53298;
unsigned int var_23 = 933192267U;
unsigned long long int var_24 = 11989848154806135856ULL;
int var_25 = 304544445;
unsigned int var_26 = 2875513487U;
long long int var_27 = -2604269534128229626LL;
_Bool var_28 = (_Bool)0;
int var_29 = -828778658;
short var_30 = (short)-837;
long long int var_31 = -2183731733680060329LL;
int arr_0 [22] ;
long long int arr_1 [22] ;
_Bool arr_4 [14] ;
unsigned short arr_5 [14] ;
_Bool arr_9 [17] ;
int arr_11 [17] [17] ;
unsigned char arr_3 [22] ;
unsigned char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2089165019;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7416770567603340832LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)32105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -286558935 : -1638049269;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)34;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
