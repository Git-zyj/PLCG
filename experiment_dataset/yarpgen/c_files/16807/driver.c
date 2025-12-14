#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8971296349695355486LL;
long long int var_1 = 3635794204030479195LL;
signed char var_2 = (signed char)105;
unsigned long long int var_4 = 5440061732659093139ULL;
unsigned char var_5 = (unsigned char)224;
unsigned char var_6 = (unsigned char)161;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)111;
unsigned char var_11 = (unsigned char)206;
unsigned long long int var_15 = 9030074495037347567ULL;
signed char var_16 = (signed char)-124;
unsigned long long int var_17 = 6329636581875910240ULL;
signed char var_18 = (signed char)125;
unsigned char var_19 = (unsigned char)210;
int zero = 0;
signed char var_20 = (signed char)-50;
unsigned char var_21 = (unsigned char)108;
unsigned long long int var_22 = 1511124248243958677ULL;
long long int var_23 = 3794566070433673340LL;
signed char var_24 = (signed char)-67;
unsigned long long int arr_1 [22] [22] ;
signed char arr_3 [22] [22] ;
signed char arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
signed char arr_6 [22] [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 14585241683620804731ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2861178075728526639LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-126;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
