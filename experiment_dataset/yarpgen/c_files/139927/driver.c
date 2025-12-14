#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23455;
unsigned long long int var_2 = 2675553153675176276ULL;
unsigned char var_7 = (unsigned char)111;
long long int var_9 = 5389202372952842240LL;
short var_10 = (short)-19240;
unsigned char var_12 = (unsigned char)182;
int zero = 0;
short var_14 = (short)-17074;
unsigned char var_15 = (unsigned char)30;
unsigned long long int var_16 = 4676001079214306698ULL;
unsigned int var_17 = 2574485069U;
unsigned int var_18 = 852179767U;
unsigned short var_19 = (unsigned short)4885;
unsigned char var_20 = (unsigned char)54;
signed char var_21 = (signed char)79;
unsigned char var_22 = (unsigned char)96;
int var_23 = 864107046;
short var_24 = (short)-24474;
unsigned long long int var_25 = 324268250479554598ULL;
unsigned char var_26 = (unsigned char)244;
unsigned char var_27 = (unsigned char)145;
unsigned char var_28 = (unsigned char)189;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-29074;
unsigned long long int arr_0 [17] [17] ;
short arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned char arr_29 [11] ;
int arr_10 [10] ;
unsigned char arr_11 [10] ;
unsigned short arr_26 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 8197330715802088923ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -504768472;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)32275 : (unsigned short)20164;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
