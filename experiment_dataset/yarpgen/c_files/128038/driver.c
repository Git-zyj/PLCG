#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1663639334;
_Bool var_1 = (_Bool)1;
long long int var_2 = -8324406273861536548LL;
int var_3 = 1519971145;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-52;
signed char var_6 = (signed char)-104;
unsigned long long int var_7 = 2321941132719245366ULL;
int var_9 = 1452232053;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)60;
unsigned int var_12 = 2340104436U;
unsigned char var_14 = (unsigned char)161;
unsigned int var_16 = 3387305533U;
int zero = 0;
signed char var_18 = (signed char)-51;
signed char var_19 = (signed char)105;
unsigned int var_20 = 3261280240U;
int var_21 = -230856704;
unsigned int var_22 = 2222541806U;
unsigned short var_23 = (unsigned short)14827;
signed char var_24 = (signed char)-52;
int arr_1 [10] ;
unsigned int arr_2 [10] ;
signed char arr_3 [10] [10] ;
unsigned int arr_7 [10] ;
int arr_8 [10] [10] [10] [10] [10] ;
unsigned int arr_12 [10] [10] [10] [10] ;
unsigned int arr_14 [10] ;
unsigned int arr_15 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 582035466;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3229441914U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 2477619214U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 2115423222;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2160372925U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 2674786716U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 2720988023U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
