#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46158;
long long int var_1 = 3048131474225977637LL;
int var_3 = 64952365;
unsigned long long int var_5 = 13345118814671254741ULL;
unsigned short var_7 = (unsigned short)43908;
int var_8 = -1224137877;
short var_9 = (short)-16742;
unsigned int var_12 = 2049504035U;
int var_14 = -230627121;
int zero = 0;
long long int var_16 = 2293940651128923213LL;
int var_17 = 417725809;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-23948;
unsigned short var_20 = (unsigned short)26380;
unsigned char var_21 = (unsigned char)183;
unsigned long long int var_22 = 7698192841228787799ULL;
unsigned int arr_0 [11] ;
int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
int arr_4 [11] ;
unsigned int arr_7 [19] ;
unsigned char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2548148325U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1257282346;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 501596836779814497ULL : 912191575180651145ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -169258698 : 1363201024;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3678513281U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)228;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
