#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
int var_1 = 111025734;
unsigned long long int var_2 = 5329874026311709271ULL;
unsigned long long int var_3 = 3527324899469685042ULL;
unsigned long long int var_4 = 6653957121819319952ULL;
signed char var_7 = (signed char)117;
unsigned int var_8 = 941898978U;
long long int var_9 = -6318201427665526317LL;
short var_10 = (short)-12108;
unsigned long long int var_12 = 4597902325511134308ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28603;
int var_15 = -1518673506;
unsigned short var_16 = (unsigned short)49689;
unsigned short var_17 = (unsigned short)22585;
short var_18 = (short)25467;
unsigned int var_19 = 3635645086U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 6968471682797848571ULL;
short var_22 = (short)27877;
long long int var_23 = -8644873143765608573LL;
short var_24 = (short)7419;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-14652;
unsigned long long int var_27 = 7958562767458344306ULL;
int arr_0 [15] ;
unsigned short arr_8 [15] ;
long long int arr_10 [20] ;
int arr_11 [20] ;
int arr_12 [20] [20] ;
unsigned char arr_4 [15] [15] [15] ;
int arr_7 [15] [15] [15] ;
_Bool arr_13 [20] ;
short arr_14 [20] ;
signed char arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2012858579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned short)17425;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 8573731796347344432LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -328136488;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 2122628799;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2071126073 : 208676437;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)-20958;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (signed char)-8;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
