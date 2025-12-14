#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned long long int var_2 = 7578202170818660551ULL;
long long int var_3 = 7057759147799792778LL;
unsigned short var_4 = (unsigned short)65137;
unsigned int var_6 = 2431302527U;
unsigned char var_7 = (unsigned char)88;
signed char var_8 = (signed char)-39;
signed char var_9 = (signed char)-110;
unsigned long long int var_10 = 297541760133953127ULL;
long long int var_11 = 2983747548186036067LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6666847322913199642LL;
int zero = 0;
unsigned int var_16 = 1113880866U;
unsigned int var_17 = 3041200411U;
unsigned long long int var_18 = 10595351512662894674ULL;
unsigned int var_19 = 2683646213U;
int var_20 = -749615923;
long long int var_21 = 3308904990590415432LL;
unsigned short var_22 = (unsigned short)889;
signed char var_23 = (signed char)67;
unsigned short var_24 = (unsigned short)51147;
unsigned char var_25 = (unsigned char)100;
unsigned short var_26 = (unsigned short)56739;
long long int var_27 = 7187081459974770327LL;
signed char var_28 = (signed char)106;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 12100540257063823695ULL;
long long int arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
_Bool arr_2 [22] [22] ;
unsigned short arr_3 [22] [22] ;
signed char arr_5 [22] [22] [22] ;
_Bool arr_6 [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
unsigned int arr_4 [22] ;
unsigned short arr_8 [22] [22] [22] ;
unsigned short arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1094988060133596125LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)17740 : (unsigned short)59227;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15431150981447993551ULL : 8753031818394266136ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3247295846U : 902365052U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)19872 : (unsigned short)25109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47664 : (unsigned short)52862;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
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
