#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34913;
signed char var_3 = (signed char)-50;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2697574950U;
unsigned long long int var_6 = 3093421332672851798ULL;
unsigned int var_8 = 2563178877U;
signed char var_9 = (signed char)19;
unsigned long long int var_11 = 7286421245659713148ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4303561430378246477LL;
int zero = 0;
unsigned short var_16 = (unsigned short)35437;
unsigned int var_17 = 1068974633U;
unsigned long long int var_18 = 2510689581826405459ULL;
long long int var_19 = 5696973268598768474LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)168;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_3 [17] ;
_Bool arr_4 [17] ;
unsigned int arr_6 [17] ;
unsigned int arr_10 [11] [11] ;
unsigned long long int arr_2 [20] [20] ;
long long int arr_7 [17] ;
_Bool arr_8 [17] ;
signed char arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 14740980931138459274ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4384991913173704918ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)30446;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2961994143U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 2897292435U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 6810380623097531777ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2535895183157379062LL : -6743310126369884423LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)3;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
