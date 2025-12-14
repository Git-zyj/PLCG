#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3076917075572659759ULL;
long long int var_2 = 1461354997603479289LL;
unsigned short var_3 = (unsigned short)34889;
unsigned short var_4 = (unsigned short)45929;
int var_5 = -1517796770;
unsigned short var_7 = (unsigned short)21803;
unsigned short var_8 = (unsigned short)38543;
int var_9 = 1301055586;
unsigned char var_10 = (unsigned char)234;
long long int var_11 = 5762209974516269537LL;
unsigned short var_12 = (unsigned short)591;
unsigned char var_13 = (unsigned char)150;
long long int var_14 = 5080355885364595115LL;
unsigned long long int var_15 = 1970438069464681958ULL;
unsigned short var_16 = (unsigned short)54792;
unsigned long long int var_17 = 10986181568189293984ULL;
long long int var_18 = -5398820087075149440LL;
int zero = 0;
unsigned char var_19 = (unsigned char)25;
unsigned short var_20 = (unsigned short)23338;
unsigned short var_21 = (unsigned short)21499;
signed char var_22 = (signed char)109;
unsigned char var_23 = (unsigned char)66;
unsigned short var_24 = (unsigned short)58546;
long long int arr_8 [17] [17] ;
unsigned short arr_9 [17] [17] [17] ;
signed char arr_18 [11] [11] [11] [11] ;
unsigned char arr_26 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -4715576559275513094LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)29752;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)16 : (unsigned char)65;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
