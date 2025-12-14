#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3151582210844463293ULL;
unsigned short var_3 = (unsigned short)58212;
signed char var_6 = (signed char)-2;
unsigned char var_7 = (unsigned char)147;
short var_8 = (short)11125;
unsigned long long int var_11 = 16081099102233918675ULL;
int var_12 = 584128033;
unsigned char var_14 = (unsigned char)41;
unsigned int var_15 = 198136871U;
unsigned long long int var_16 = 8785706576515630178ULL;
int var_17 = 467809534;
signed char var_18 = (signed char)-18;
int zero = 0;
long long int var_20 = 1765842058987087526LL;
signed char var_21 = (signed char)-18;
unsigned int var_22 = 3950795544U;
signed char var_23 = (signed char)-109;
unsigned char var_24 = (unsigned char)48;
unsigned int var_25 = 3955796071U;
unsigned long long int var_26 = 7267769720324503763ULL;
short var_27 = (short)-2848;
unsigned int var_28 = 1049530795U;
unsigned char arr_0 [11] [11] ;
short arr_2 [11] ;
unsigned int arr_6 [22] [22] ;
unsigned long long int arr_14 [22] [22] [22] [22] ;
unsigned int arr_4 [11] ;
long long int arr_5 [11] [11] ;
long long int arr_8 [22] [22] ;
unsigned char arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)27004;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 234712893U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 840422700030669472ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2926037728U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -1357699865106378771LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = -1832814630752415035LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)99;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
