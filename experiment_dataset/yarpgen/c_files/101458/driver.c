#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1026936422;
long long int var_1 = -4059690716245272449LL;
unsigned char var_3 = (unsigned char)165;
int var_5 = -2087378965;
signed char var_6 = (signed char)-52;
int var_8 = 28706084;
unsigned long long int var_9 = 6980253006524330438ULL;
unsigned long long int var_10 = 12098230621448748123ULL;
unsigned long long int var_13 = 7181538367747984777ULL;
unsigned long long int var_14 = 1424220463038968797ULL;
int var_16 = -669938229;
signed char var_18 = (signed char)-111;
int zero = 0;
signed char var_19 = (signed char)115;
unsigned char var_20 = (unsigned char)213;
unsigned short var_21 = (unsigned short)41049;
unsigned long long int var_22 = 3003474602318033288ULL;
int var_23 = -761239155;
unsigned char var_24 = (unsigned char)82;
unsigned char var_25 = (unsigned char)115;
signed char var_26 = (signed char)-122;
unsigned long long int var_27 = 18032025917500569989ULL;
unsigned long long int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
long long int arr_4 [11] ;
int arr_6 [11] [11] [11] [11] ;
signed char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4477616297584171187ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -4616364450073266051LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1575443843 : 884014719;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)77 : (signed char)35;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
