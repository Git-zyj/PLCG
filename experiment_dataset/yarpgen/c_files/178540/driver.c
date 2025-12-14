#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 284533671U;
unsigned char var_1 = (unsigned char)218;
short var_3 = (short)31434;
unsigned long long int var_4 = 4218263849282681972ULL;
unsigned int var_5 = 2642867616U;
int var_6 = -556797301;
unsigned char var_7 = (unsigned char)24;
unsigned long long int var_8 = 12008236260170610283ULL;
long long int var_9 = -4182085115296397841LL;
unsigned char var_11 = (unsigned char)233;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)420;
short var_14 = (short)13866;
signed char var_15 = (signed char)56;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)35;
unsigned long long int var_18 = 10613491090844253640ULL;
long long int var_19 = -992537444485264489LL;
unsigned char var_20 = (unsigned char)176;
unsigned short var_21 = (unsigned short)4503;
short var_22 = (short)8465;
unsigned char var_23 = (unsigned char)111;
short var_24 = (short)-2670;
unsigned char var_25 = (unsigned char)49;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)7404;
_Bool var_28 = (_Bool)0;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
unsigned char arr_5 [10] ;
long long int arr_6 [10] [10] ;
int arr_7 [10] ;
signed char arr_8 [10] [10] ;
short arr_12 [10] [10] [10] ;
unsigned long long int arr_13 [10] [10] [10] ;
unsigned long long int arr_14 [10] ;
int arr_3 [15] ;
unsigned char arr_4 [15] [15] ;
signed char arr_9 [10] [10] ;
unsigned long long int arr_10 [10] ;
unsigned short arr_11 [10] ;
short arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8304812357292969486LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4712321808766223352ULL : 9198739974334505147ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 6282422320815490021ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -5658999477528766589LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -90254512;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-28015;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 4909780388608515745ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 10259711456253974329ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -714720216 : -1491022046;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)232 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 7482899039141502016ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)23136;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (short)28298;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
