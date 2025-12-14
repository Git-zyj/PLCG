#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
int var_1 = -1123576342;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)57764;
long long int var_5 = 4865783075892427657LL;
unsigned long long int var_7 = 6636733585536224357ULL;
unsigned char var_8 = (unsigned char)40;
short var_9 = (short)4264;
unsigned short var_10 = (unsigned short)59807;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_13 = -36863842;
unsigned char var_14 = (unsigned char)147;
long long int var_15 = 4122931437180460439LL;
unsigned short var_17 = (unsigned short)1043;
int zero = 0;
unsigned short var_18 = (unsigned short)7652;
signed char var_19 = (signed char)28;
unsigned long long int var_20 = 10813468114293876831ULL;
signed char var_21 = (signed char)3;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4725962015772348156LL;
unsigned char var_24 = (unsigned char)19;
long long int var_25 = 9089475356535832171LL;
int var_26 = 251550652;
unsigned char var_27 = (unsigned char)10;
_Bool var_28 = (_Bool)0;
signed char arr_0 [25] ;
signed char arr_1 [25] ;
unsigned short arr_2 [25] ;
signed char arr_3 [25] ;
unsigned short arr_4 [25] [25] [25] ;
short arr_6 [25] [25] ;
long long int arr_7 [25] [25] [25] ;
unsigned short arr_8 [25] [25] [25] [25] ;
unsigned short arr_10 [25] [25] [25] [25] ;
signed char arr_11 [25] [25] [25] ;
unsigned int arr_12 [25] ;
unsigned char arr_5 [25] [25] ;
unsigned char arr_9 [25] [25] [25] ;
unsigned char arr_16 [12] [12] ;
signed char arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)21655;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)32890;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18857;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -4257305585777548986LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46417;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 3844667572U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (signed char)-67;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
