#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17677112571654424999ULL;
unsigned short var_3 = (unsigned short)27380;
unsigned long long int var_4 = 14399916066447539054ULL;
unsigned short var_5 = (unsigned short)29775;
unsigned short var_8 = (unsigned short)37822;
unsigned short var_9 = (unsigned short)1702;
signed char var_11 = (signed char)58;
int zero = 0;
signed char var_13 = (signed char)-32;
signed char var_14 = (signed char)105;
unsigned long long int var_15 = 2393556265450707504ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8226096512437928387ULL;
unsigned long long int var_18 = 3504666858578124329ULL;
unsigned short var_19 = (unsigned short)22527;
signed char var_20 = (signed char)-90;
signed char var_21 = (signed char)124;
unsigned short var_22 = (unsigned short)21926;
unsigned long long int var_23 = 4058389449475732872ULL;
unsigned short arr_0 [12] ;
unsigned long long int arr_1 [12] ;
signed char arr_6 [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
unsigned short arr_13 [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] ;
unsigned long long int arr_15 [12] [12] [12] [12] [12] ;
unsigned short arr_17 [12] [12] [12] [12] ;
unsigned short arr_7 [12] [12] ;
signed char arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)56848;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10014749640165651675ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 16654157220697934908ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27363;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)18187;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 11880649529509350189ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)5482;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49729 : (unsigned short)45467;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)65 : (signed char)-59;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
