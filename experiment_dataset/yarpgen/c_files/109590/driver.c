#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38215;
long long int var_1 = 4227469217918988075LL;
unsigned char var_2 = (unsigned char)35;
unsigned long long int var_3 = 5109387637750905006ULL;
unsigned short var_4 = (unsigned short)64116;
short var_5 = (short)-16245;
long long int var_6 = 5842462035133213065LL;
long long int var_7 = 8336589351829538998LL;
short var_8 = (short)-8011;
unsigned char var_9 = (unsigned char)81;
int zero = 0;
unsigned char var_10 = (unsigned char)79;
long long int var_11 = -5851337165984813502LL;
long long int var_12 = -3197826623011756846LL;
unsigned short var_13 = (unsigned short)48335;
unsigned short var_14 = (unsigned short)56684;
long long int arr_2 [19] ;
unsigned long long int arr_5 [15] ;
long long int arr_6 [15] [15] ;
unsigned long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 6228620194159216328LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 14098372782282393733ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2651737716070440213LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 12440795892071524515ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
