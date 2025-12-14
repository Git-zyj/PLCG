#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1632781310U;
unsigned char var_4 = (unsigned char)163;
long long int var_5 = 7687087714950556278LL;
int var_6 = -148384034;
int var_7 = -1487380259;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7143510113477844031LL;
int var_10 = -1651605165;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2535554056U;
unsigned short var_13 = (unsigned short)21277;
int var_14 = -1019312058;
signed char var_15 = (signed char)127;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2178950993U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)18327;
unsigned short var_20 = (unsigned short)21503;
unsigned int var_21 = 3810065896U;
unsigned short var_22 = (unsigned short)27028;
unsigned short var_23 = (unsigned short)48657;
signed char var_24 = (signed char)88;
long long int var_25 = 6028359989747448106LL;
signed char var_26 = (signed char)49;
long long int var_27 = -3101154724132277219LL;
unsigned char var_28 = (unsigned char)102;
unsigned char var_29 = (unsigned char)116;
signed char var_30 = (signed char)111;
signed char var_31 = (signed char)-55;
unsigned char var_32 = (unsigned char)190;
_Bool arr_3 [23] [23] ;
unsigned int arr_5 [23] ;
long long int arr_6 [23] ;
int arr_8 [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] [23] [23] [23] [23] ;
int arr_15 [23] [23] ;
int arr_20 [11] [11] ;
unsigned int arr_24 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4176677234U : 22620384U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3513566613746015818LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1391911290 : 700530741;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 2772623905U : 529037558U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1949407377 : -664039657;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = 1229782105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2946296000U : 4106658655U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
