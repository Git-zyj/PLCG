#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5612834067322982LL;
long long int var_2 = 7826131971268996698LL;
int var_3 = -1443736639;
signed char var_4 = (signed char)119;
int var_5 = 1730332808;
long long int var_7 = -4512492034453700032LL;
unsigned long long int var_8 = 3089484340439267014ULL;
unsigned int var_9 = 3561830787U;
unsigned int var_10 = 3062065351U;
int var_11 = 1656827223;
unsigned long long int var_12 = 11809713256190076875ULL;
long long int var_13 = 8209717347444964318LL;
int zero = 0;
unsigned char var_15 = (unsigned char)246;
unsigned long long int var_16 = 429308125659866410ULL;
int var_17 = 366942528;
unsigned char var_18 = (unsigned char)49;
unsigned char var_19 = (unsigned char)150;
unsigned long long int var_20 = 5851053209504433352ULL;
long long int var_21 = 7756188600315197048LL;
long long int var_22 = -3495936052515571988LL;
unsigned long long int var_23 = 9797669391814250145ULL;
int var_24 = 2010375716;
int var_25 = 1264354799;
unsigned int arr_0 [25] ;
short arr_1 [25] ;
int arr_3 [25] [25] ;
int arr_4 [25] ;
unsigned short arr_12 [25] [25] [25] ;
signed char arr_6 [25] [25] ;
unsigned int arr_9 [25] [25] ;
long long int arr_22 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 320949596U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-18666;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1329543450;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 910216336;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)3581 : (unsigned short)2785;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 2629077452U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -8281065368720933812LL : -1471195709373188325LL;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
