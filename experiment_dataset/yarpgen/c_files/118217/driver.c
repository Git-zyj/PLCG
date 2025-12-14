#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11899458276131638932ULL;
signed char var_1 = (signed char)-121;
unsigned char var_3 = (unsigned char)187;
unsigned char var_4 = (unsigned char)77;
unsigned char var_6 = (unsigned char)151;
signed char var_7 = (signed char)-54;
unsigned long long int var_8 = 4218497619242097431ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)58552;
unsigned char var_11 = (unsigned char)138;
signed char var_14 = (signed char)-6;
int zero = 0;
signed char var_15 = (signed char)-107;
unsigned long long int var_16 = 17917064550913989679ULL;
unsigned char var_17 = (unsigned char)171;
long long int var_18 = 1010764625935077880LL;
signed char var_19 = (signed char)100;
long long int var_20 = -7113917061069888591LL;
long long int var_21 = -3838560754818562153LL;
unsigned long long int var_22 = 1710659789252371945ULL;
signed char arr_5 [15] ;
signed char arr_6 [15] [15] ;
signed char arr_2 [10] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_4 [10] [10] ;
long long int arr_12 [15] [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 16765816972944701508ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 14393863254257830850ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4288410601543558237LL : -4970768179188629863LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 11180918965940485101ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
