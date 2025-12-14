#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned short var_1 = (unsigned short)56216;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)7795;
short var_12 = (short)14493;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)251;
unsigned long long int var_15 = 12724463106151717836ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 230041415;
signed char var_18 = (signed char)-6;
long long int var_19 = 8343039745352737478LL;
long long int var_20 = -406201282611597220LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)83;
int var_23 = -1370408980;
unsigned short var_24 = (unsigned short)57358;
unsigned char var_25 = (unsigned char)28;
long long int var_26 = -312304160289264414LL;
unsigned char var_27 = (unsigned char)101;
unsigned long long int var_28 = 1942008001540927898ULL;
unsigned char var_29 = (unsigned char)119;
unsigned short var_30 = (unsigned short)48051;
unsigned char var_31 = (unsigned char)61;
unsigned short arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
short arr_2 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned char arr_9 [12] [12] [12] ;
unsigned int arr_11 [12] [12] [12] [12] ;
signed char arr_12 [12] ;
unsigned int arr_14 [12] [12] ;
unsigned short arr_15 [12] ;
long long int arr_18 [12] [12] [12] ;
short arr_21 [12] [12] [12] [12] ;
unsigned int arr_17 [12] [12] [12] [12] [12] ;
unsigned int arr_31 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7734;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25700;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 6539228827321917532ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 244434221U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 1267637690U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned short)53515;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -4532065435414340167LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)-31721;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 2625970537U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 275282880U : 1193051353U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
