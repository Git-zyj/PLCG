#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4780126273315630818LL;
int var_4 = 1950393628;
signed char var_5 = (signed char)95;
short var_6 = (short)-20528;
short var_8 = (short)7803;
long long int var_9 = 2532294900715681390LL;
unsigned long long int var_10 = 3557987215453394800ULL;
unsigned long long int var_11 = 6927553851263538048ULL;
unsigned int var_12 = 406985525U;
unsigned short var_14 = (unsigned short)54869;
unsigned char var_15 = (unsigned char)201;
unsigned long long int var_16 = 1485282621836131281ULL;
int zero = 0;
int var_17 = 1755902318;
long long int var_18 = -5044553904867955147LL;
unsigned char var_19 = (unsigned char)201;
unsigned char var_20 = (unsigned char)59;
unsigned long long int var_21 = 5691851809525313432ULL;
unsigned int arr_7 [24] ;
unsigned long long int arr_9 [24] [24] ;
signed char arr_10 [24] [24] ;
signed char arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3000396143U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 12407457007329328735ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-51;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
