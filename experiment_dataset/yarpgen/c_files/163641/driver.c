#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10446475555904836588ULL;
unsigned long long int var_4 = 5382315198596272362ULL;
unsigned long long int var_6 = 6981685079140069512ULL;
unsigned long long int var_7 = 6997378813442274498ULL;
unsigned long long int var_8 = 11211627137863404528ULL;
signed char var_9 = (signed char)93;
int zero = 0;
signed char var_10 = (signed char)18;
unsigned long long int var_11 = 5312574088251401082ULL;
unsigned long long int var_12 = 8440306484787924107ULL;
signed char var_13 = (signed char)-79;
signed char var_14 = (signed char)84;
signed char var_15 = (signed char)-99;
unsigned long long int var_16 = 7806553966415769450ULL;
signed char var_17 = (signed char)-45;
signed char var_18 = (signed char)-100;
signed char var_19 = (signed char)-40;
signed char var_20 = (signed char)-16;
signed char var_21 = (signed char)-21;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
signed char arr_3 [25] [25] ;
unsigned long long int arr_4 [25] ;
unsigned long long int arr_6 [25] [25] ;
unsigned long long int arr_9 [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned long long int arr_12 [24] [24] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 10350829185327784146ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 10917472359685542433ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1587574043188593994ULL : 7484741074593533980ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 9201695414662016250ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 8126965439262668521ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 184751593376333718ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 17103364624345348921ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
