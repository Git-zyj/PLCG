#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1576898045657270613LL;
short var_1 = (short)-24565;
unsigned int var_3 = 3092905351U;
unsigned short var_4 = (unsigned short)8769;
unsigned long long int var_6 = 2604451507023839220ULL;
unsigned short var_9 = (unsigned short)30115;
unsigned short var_12 = (unsigned short)32185;
unsigned long long int var_13 = 11248199224026302095ULL;
int zero = 0;
int var_15 = 219108661;
unsigned long long int var_16 = 10712132647076212242ULL;
unsigned char var_17 = (unsigned char)137;
unsigned long long int var_18 = 9250646710919272890ULL;
_Bool var_19 = (_Bool)1;
int var_20 = -1220162890;
unsigned int var_21 = 2439604499U;
_Bool var_22 = (_Bool)1;
unsigned short arr_1 [22] ;
long long int arr_2 [22] [22] ;
int arr_4 [22] [22] ;
unsigned short arr_8 [22] [22] [22] [22] ;
unsigned short arr_16 [22] [22] [22] [22] ;
int arr_19 [24] ;
unsigned short arr_20 [24] ;
long long int arr_21 [24] ;
int arr_22 [24] ;
unsigned short arr_26 [24] ;
long long int arr_23 [24] ;
unsigned char arr_27 [24] [24] ;
unsigned short arr_28 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)43821;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -804323433741795644LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 1446776088;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6362;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 1263220731;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (unsigned short)57492;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = -4302645465247013752LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = -2023628205;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (unsigned short)49654;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -9034697399958696527LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)10621;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
