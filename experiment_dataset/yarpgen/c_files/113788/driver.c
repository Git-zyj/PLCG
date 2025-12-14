#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3592836911U;
unsigned char var_2 = (unsigned char)37;
unsigned long long int var_5 = 9964705416540413191ULL;
int var_6 = 1523783617;
unsigned char var_7 = (unsigned char)127;
unsigned short var_8 = (unsigned short)59169;
unsigned int var_9 = 116944677U;
unsigned char var_10 = (unsigned char)241;
int zero = 0;
unsigned long long int var_11 = 13603629161823325247ULL;
int var_12 = -1734222187;
long long int var_13 = 6802995695379933132LL;
unsigned long long int var_14 = 2359853376747240228ULL;
signed char var_15 = (signed char)-115;
unsigned int var_16 = 967556954U;
signed char var_17 = (signed char)95;
unsigned long long int var_18 = 832719631192421971ULL;
signed char var_19 = (signed char)46;
long long int arr_0 [13] ;
int arr_1 [13] ;
unsigned short arr_3 [13] ;
_Bool arr_4 [13] ;
unsigned long long int arr_5 [13] ;
_Bool arr_7 [13] [13] ;
signed char arr_10 [13] [13] [13] [13] [13] ;
int arr_11 [13] [13] ;
unsigned char arr_13 [13] ;
unsigned int arr_16 [13] ;
unsigned int arr_17 [13] ;
_Bool arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -7896425397170500342LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1119468244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)20346;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 17491177839155306946ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 1939782768;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 1041948225U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 2597933676U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
