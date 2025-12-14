#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3512196716171391017LL;
signed char var_1 = (signed char)-26;
unsigned int var_4 = 2203647489U;
short var_7 = (short)-31853;
long long int var_8 = -3729795174571818009LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 8062070176995447233LL;
unsigned long long int var_11 = 7002800328241377557ULL;
unsigned short var_12 = (unsigned short)51790;
_Bool var_14 = (_Bool)0;
long long int var_17 = 6736375471005558519LL;
signed char var_18 = (signed char)127;
int zero = 0;
unsigned short var_20 = (unsigned short)4544;
long long int var_21 = 8592422663645472279LL;
unsigned short var_22 = (unsigned short)35938;
_Bool var_23 = (_Bool)0;
long long int var_24 = 2950237789872748642LL;
unsigned char var_25 = (unsigned char)174;
unsigned int var_26 = 4154206941U;
unsigned long long int var_27 = 5690196776266007231ULL;
unsigned long long int var_28 = 2874965516599399931ULL;
signed char var_29 = (signed char)-52;
long long int var_30 = -3399865744637835585LL;
unsigned char var_31 = (unsigned char)91;
short var_32 = (short)3374;
unsigned short var_33 = (unsigned short)36152;
unsigned long long int var_34 = 3252900618099263732ULL;
signed char var_35 = (signed char)7;
signed char var_36 = (signed char)89;
unsigned int var_37 = 3871388224U;
int var_38 = 20081759;
int var_39 = 241048952;
unsigned int arr_0 [19] ;
signed char arr_1 [19] ;
short arr_2 [19] ;
unsigned long long int arr_5 [16] ;
signed char arr_8 [16] [16] [16] ;
_Bool arr_12 [16] [16] [16] [16] ;
_Bool arr_13 [16] [16] [16] [16] ;
signed char arr_17 [16] ;
short arr_18 [16] [16] [16] ;
unsigned int arr_19 [16] ;
unsigned char arr_4 [19] ;
unsigned short arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2127204390U : 1944290134U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)28125 : (short)-15887;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 17968877038028326456ULL : 976151933352138579ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)63 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)6 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-29567 : (short)-7847;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 4251045775U : 2521296910U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41652 : (unsigned short)45969;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
