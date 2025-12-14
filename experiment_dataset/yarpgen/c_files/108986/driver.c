#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1905496593323596026LL;
int zero = 0;
unsigned int var_19 = 3536669778U;
int var_20 = -1334114717;
unsigned char var_21 = (unsigned char)110;
signed char var_22 = (signed char)-86;
unsigned long long int var_23 = 10940523759926156918ULL;
unsigned short var_24 = (unsigned short)45843;
short arr_0 [17] ;
unsigned char arr_2 [17] ;
int arr_3 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned char arr_9 [18] ;
unsigned char arr_12 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)4843;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -891013960;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2626852131U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)136;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
