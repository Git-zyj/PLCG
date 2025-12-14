#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8494598401066889272LL;
long long int var_1 = -9126591539749819902LL;
unsigned long long int var_2 = 547591025747934849ULL;
long long int var_3 = -8464271492545201256LL;
int var_4 = 885956958;
unsigned long long int var_5 = 3375634230267987251ULL;
unsigned int var_7 = 1447919313U;
int var_10 = 2090608363;
unsigned char var_11 = (unsigned char)34;
short var_12 = (short)-13179;
int var_13 = 2031497430;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)105;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-50;
signed char var_18 = (signed char)110;
unsigned long long int var_19 = 1413940970671254485ULL;
unsigned int var_20 = 856579047U;
int var_21 = 780197933;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
int var_24 = 1280833242;
unsigned long long int var_25 = 15034780393795906141ULL;
unsigned char arr_0 [25] ;
short arr_1 [25] ;
short arr_2 [20] ;
int arr_7 [20] ;
long long int arr_8 [20] [20] [20] ;
short arr_10 [20] [20] [20] ;
unsigned short arr_12 [20] ;
long long int arr_15 [20] [20] ;
_Bool arr_16 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)20569;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)20841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -790096223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6383515497928350666LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-17039;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)27650;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -8207953739816701462LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
