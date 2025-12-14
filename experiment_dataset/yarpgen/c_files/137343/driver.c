#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
short var_2 = (short)-14586;
unsigned char var_3 = (unsigned char)9;
unsigned char var_4 = (unsigned char)80;
unsigned short var_5 = (unsigned short)8045;
signed char var_6 = (signed char)-125;
signed char var_7 = (signed char)-20;
unsigned int var_8 = 1558569882U;
unsigned short var_9 = (unsigned short)57615;
unsigned char var_11 = (unsigned char)252;
unsigned char var_13 = (unsigned char)161;
signed char var_14 = (signed char)45;
unsigned long long int var_15 = 1390139993371669513ULL;
signed char var_16 = (signed char)120;
short var_17 = (short)4482;
unsigned int var_18 = 579006600U;
signed char var_19 = (signed char)-1;
int zero = 0;
short var_20 = (short)-15844;
short var_21 = (short)-15543;
signed char var_22 = (signed char)-40;
long long int var_23 = -5386806448567029804LL;
long long int var_24 = 5759147052547132157LL;
unsigned char var_25 = (unsigned char)209;
int var_26 = 887357487;
unsigned int var_27 = 3459129820U;
int var_28 = 805541720;
unsigned int var_29 = 2549563576U;
unsigned int arr_0 [21] [21] ;
unsigned char arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
unsigned long long int arr_3 [21] ;
short arr_5 [21] ;
unsigned char arr_6 [21] ;
unsigned int arr_8 [21] ;
long long int arr_9 [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
signed char arr_10 [21] ;
short arr_13 [21] ;
unsigned char arr_14 [21] [21] ;
short arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4188528287U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)35785;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1208368977900576590ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)11280;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 3823193164U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 8065813854348506334LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-30151;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-3075;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
