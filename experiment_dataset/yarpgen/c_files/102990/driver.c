#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -933887868328519526LL;
unsigned long long int var_2 = 11581326503737296245ULL;
short var_3 = (short)8357;
unsigned char var_6 = (unsigned char)28;
short var_7 = (short)19751;
short var_8 = (short)9716;
long long int var_10 = 1238519444119849029LL;
unsigned long long int var_11 = 8799138980135793635ULL;
short var_13 = (short)-1591;
unsigned int var_14 = 2122439759U;
short var_15 = (short)2201;
int zero = 0;
short var_16 = (short)-22781;
unsigned short var_17 = (unsigned short)61649;
unsigned long long int var_18 = 14812244587240266430ULL;
int var_19 = -1287061590;
short var_20 = (short)27345;
signed char var_21 = (signed char)-92;
unsigned int var_22 = 1338822618U;
unsigned long long int var_23 = 13289596415166627792ULL;
long long int var_24 = 1095720542832461998LL;
long long int var_25 = 8218123625122205831LL;
unsigned char var_26 = (unsigned char)232;
unsigned char var_27 = (unsigned char)252;
int arr_1 [15] [15] ;
long long int arr_5 [15] ;
long long int arr_3 [15] ;
unsigned int arr_12 [15] [15] [15] ;
short arr_13 [15] ;
unsigned short arr_16 [10] ;
int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 677395372;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -5839210925220113039LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3955011084975538511LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3462094130U : 2245054071U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (short)-15888;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31689 : (unsigned short)50300;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1182042110 : 401482192;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
