#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8107007457499029462LL;
unsigned char var_5 = (unsigned char)72;
long long int var_6 = -5126143140354545035LL;
unsigned long long int var_7 = 4015681848453995729ULL;
unsigned char var_8 = (unsigned char)121;
unsigned char var_10 = (unsigned char)137;
unsigned char var_11 = (unsigned char)16;
unsigned char var_16 = (unsigned char)126;
int zero = 0;
short var_17 = (short)9124;
unsigned long long int var_18 = 5357529216316435800ULL;
short var_19 = (short)32242;
unsigned char var_20 = (unsigned char)136;
unsigned long long int var_21 = 9248102704060591713ULL;
unsigned short var_22 = (unsigned short)1213;
_Bool var_23 = (_Bool)1;
unsigned short arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_3 [14] ;
unsigned char arr_4 [14] ;
unsigned int arr_5 [22] [22] ;
signed char arr_6 [22] ;
unsigned char arr_2 [13] ;
_Bool arr_7 [22] ;
unsigned char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2526175321U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)56490;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1964034970U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
