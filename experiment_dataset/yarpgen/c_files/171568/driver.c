#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11276;
unsigned short var_4 = (unsigned short)13964;
short var_6 = (short)28496;
unsigned int var_7 = 1224246405U;
short var_8 = (short)823;
unsigned long long int var_9 = 2025171107383308445ULL;
unsigned long long int var_10 = 974542736637791910ULL;
int var_14 = -2013065207;
int zero = 0;
unsigned long long int var_15 = 8291212386402258946ULL;
long long int var_16 = -3625640703348829649LL;
signed char var_17 = (signed char)-111;
unsigned char var_18 = (unsigned char)254;
unsigned short var_19 = (unsigned short)667;
int var_20 = -904142094;
unsigned char var_21 = (unsigned char)81;
unsigned long long int var_22 = 1338767639879131085ULL;
unsigned int var_23 = 1174599480U;
int var_24 = 1153590347;
unsigned int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned long long int arr_4 [13] ;
signed char arr_5 [13] [13] [13] [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] ;
short arr_10 [16] ;
short arr_11 [16] ;
unsigned int arr_12 [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
_Bool arr_17 [16] [16] [16] [16] [16] ;
unsigned long long int arr_14 [16] ;
unsigned long long int arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 52176019U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14293604366564729915ULL : 16815950600502450907ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1840558283344119357ULL : 5587830126190349176ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)28542;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-23945;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2749242030U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 16407683094198630332ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 14062840416048763168ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 16028057818296759323ULL : 16910514681190115428ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
