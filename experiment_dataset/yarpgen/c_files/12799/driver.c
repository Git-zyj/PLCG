#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2635226972244822584ULL;
unsigned int var_1 = 4009233680U;
short var_2 = (short)4972;
unsigned int var_3 = 3892492939U;
short var_4 = (short)12101;
int var_5 = 4180875;
signed char var_6 = (signed char)-103;
short var_7 = (short)16045;
unsigned short var_8 = (unsigned short)52161;
unsigned char var_9 = (unsigned char)84;
unsigned int var_10 = 2761442648U;
long long int var_11 = -6104034766294052526LL;
signed char var_12 = (signed char)-116;
unsigned int var_13 = 2960061986U;
int zero = 0;
unsigned short var_14 = (unsigned short)54850;
unsigned long long int var_15 = 13203938542760774246ULL;
unsigned char var_16 = (unsigned char)223;
unsigned int var_17 = 2971759592U;
long long int var_18 = 3490969553998325292LL;
int var_19 = -826123624;
unsigned int var_20 = 723319906U;
unsigned long long int var_21 = 4923474776495536267ULL;
unsigned short var_22 = (unsigned short)64625;
unsigned char var_23 = (unsigned char)255;
long long int arr_5 [23] ;
long long int arr_6 [23] ;
unsigned int arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -1209043342601112824LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 5645684947566948975LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 2283318342U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
