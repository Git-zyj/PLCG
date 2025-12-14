#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 444623761;
unsigned long long int var_4 = 1897463360600099572ULL;
unsigned long long int var_5 = 12586130083692315608ULL;
unsigned char var_6 = (unsigned char)178;
unsigned long long int var_7 = 4149382393487422151ULL;
unsigned long long int var_9 = 6975438345598579983ULL;
int var_11 = -326116744;
int var_14 = -2021173029;
int zero = 0;
unsigned char var_17 = (unsigned char)236;
unsigned char var_18 = (unsigned char)187;
unsigned long long int var_19 = 6982575139965090690ULL;
unsigned long long int var_20 = 8983167836017105467ULL;
unsigned long long int var_21 = 12131282191488667365ULL;
unsigned char arr_0 [17] ;
int arr_1 [17] ;
int arr_4 [25] ;
unsigned long long int arr_5 [25] ;
int arr_2 [17] ;
int arr_3 [17] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1053891811;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 419847431 : 568949705;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 18076894385109731515ULL : 11621561761266529197ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1458503154;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 327175880;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
