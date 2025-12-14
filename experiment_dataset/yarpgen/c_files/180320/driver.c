#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 329811310549280054ULL;
unsigned long long int var_2 = 1964299409493379174ULL;
unsigned long long int var_3 = 15272216854353870799ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 84153328U;
unsigned long long int var_9 = 13925205086193371020ULL;
unsigned int var_10 = 3514311648U;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)158;
int zero = 0;
unsigned char var_15 = (unsigned char)138;
unsigned long long int var_16 = 14459067702631903632ULL;
unsigned short var_17 = (unsigned short)39549;
long long int arr_4 [15] ;
unsigned char arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4699610798509981312LL : -4357668924380575252LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)188 : (unsigned char)193;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
