#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27463;
int var_4 = -782866671;
unsigned int var_5 = 4111598583U;
unsigned long long int var_8 = 9462839668895927389ULL;
unsigned char var_9 = (unsigned char)174;
int var_13 = 2094496749;
long long int var_14 = 1021592814481521620LL;
int zero = 0;
short var_17 = (short)-12560;
unsigned long long int var_18 = 2705544422603858695ULL;
short var_19 = (short)29190;
int var_20 = -907101997;
unsigned int var_21 = 3174737074U;
unsigned long long int var_22 = 14587285566145137632ULL;
short var_23 = (short)-2264;
unsigned char var_24 = (unsigned char)175;
unsigned char var_25 = (unsigned char)141;
unsigned long long int var_26 = 13292347114049187156ULL;
unsigned long long int var_27 = 1856942962217385979ULL;
unsigned int arr_0 [25] ;
short arr_1 [25] ;
unsigned char arr_3 [25] ;
short arr_6 [22] ;
unsigned char arr_8 [22] ;
int arr_10 [22] [22] [22] ;
int arr_12 [22] [22] [22] [22] ;
int arr_13 [15] [15] ;
int arr_4 [25] [25] ;
unsigned char arr_15 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3446985114U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)32325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)10054;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 627870031;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1491432850;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 1216747234;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2063957590;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (unsigned char)204;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
