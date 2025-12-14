#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10973;
unsigned long long int var_3 = 10053164250656434088ULL;
short var_4 = (short)2264;
unsigned short var_5 = (unsigned short)26904;
unsigned short var_6 = (unsigned short)26430;
int var_9 = -1329150289;
int zero = 0;
int var_11 = 1870008353;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 551470929U;
signed char var_14 = (signed char)75;
unsigned short var_15 = (unsigned short)32460;
int var_16 = -813821125;
unsigned int var_17 = 10246040U;
unsigned int var_18 = 3541798164U;
signed char var_19 = (signed char)-98;
short var_20 = (short)-17567;
int var_21 = 1695296414;
int var_22 = -446073626;
unsigned int arr_1 [24] [24] ;
unsigned short arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] [24] ;
short arr_4 [24] ;
short arr_8 [13] [13] [13] ;
unsigned short arr_13 [13] [13] ;
unsigned int arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2730013247U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33778;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-3978;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-10116 : (short)-11469;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)25059;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 737679343U;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
