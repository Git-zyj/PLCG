#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2376751285U;
signed char var_1 = (signed char)-49;
unsigned long long int var_4 = 11353507650940134654ULL;
unsigned short var_5 = (unsigned short)22290;
unsigned int var_6 = 1091004766U;
int var_7 = 1517620876;
unsigned short var_8 = (unsigned short)39474;
unsigned char var_10 = (unsigned char)137;
unsigned char var_11 = (unsigned char)79;
unsigned int var_12 = 2518272475U;
unsigned int var_13 = 603981167U;
int zero = 0;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_16 = 14299216942178209172ULL;
unsigned short var_17 = (unsigned short)38540;
unsigned long long int var_18 = 892311178743696061ULL;
short var_19 = (short)11784;
unsigned long long int var_20 = 3820332835508128908ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -1833608181;
int var_23 = -475208338;
unsigned int var_24 = 1840456017U;
int arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
unsigned short arr_2 [15] [15] ;
long long int arr_4 [21] [21] ;
unsigned char arr_9 [22] ;
unsigned int arr_10 [22] ;
unsigned int arr_12 [24] ;
long long int arr_13 [24] ;
unsigned long long int arr_14 [24] [24] ;
unsigned short arr_20 [24] ;
int arr_21 [24] [24] [24] ;
unsigned int arr_22 [24] ;
unsigned long long int arr_3 [15] ;
unsigned char arr_6 [21] [21] ;
signed char arr_7 [21] ;
unsigned int arr_8 [21] [21] ;
int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 514402861;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 75207229U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58738;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -1703780783427707261LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 3472397359U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 4278203133U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -6513696115862922802LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 12595550175060078484ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (unsigned short)57533;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 997906503;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 4203462292U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4981841739721035671ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2965409662U : 522729257U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 571454774;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
