#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4542;
unsigned int var_3 = 4084825738U;
unsigned int var_4 = 2001776185U;
int var_11 = 1591842908;
short var_14 = (short)-5280;
signed char var_15 = (signed char)35;
int zero = 0;
unsigned short var_16 = (unsigned short)50444;
signed char var_17 = (signed char)42;
unsigned short var_18 = (unsigned short)59403;
unsigned long long int var_19 = 5833972772726390897ULL;
unsigned char var_20 = (unsigned char)71;
unsigned short var_21 = (unsigned short)11483;
unsigned int var_22 = 422842632U;
long long int var_23 = 219129692157315082LL;
long long int var_24 = 1816411279346641923LL;
unsigned short var_25 = (unsigned short)312;
long long int var_26 = 2917698955041611379LL;
short var_27 = (short)-5954;
short var_28 = (short)32445;
unsigned long long int arr_0 [11] ;
unsigned short arr_4 [16] ;
unsigned char arr_5 [16] ;
unsigned short arr_6 [16] [16] ;
unsigned short arr_8 [16] [16] ;
unsigned short arr_9 [16] [16] [16] ;
unsigned long long int arr_10 [16] ;
signed char arr_16 [16] [16] [16] ;
unsigned char arr_31 [10] [10] [10] [10] ;
long long int arr_34 [10] [10] [10] [10] ;
unsigned char arr_35 [24] [24] ;
signed char arr_36 [24] ;
signed char arr_41 [24] ;
signed char arr_3 [11] ;
long long int arr_23 [16] [16] [16] [16] ;
int arr_37 [24] ;
unsigned int arr_38 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 11618713881301916402ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)54422;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)23109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)55086;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)12706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 14586400590388715725ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)63 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -6236719345877629060LL : 149694486254385737LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1869809943719319198LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = 53565359;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = 994047376U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
