#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)113;
signed char var_4 = (signed char)46;
unsigned char var_5 = (unsigned char)81;
short var_9 = (short)-371;
long long int var_11 = 180899662569689490LL;
unsigned short var_12 = (unsigned short)43219;
unsigned int var_14 = 2133630154U;
unsigned int var_15 = 861504212U;
signed char var_16 = (signed char)79;
int zero = 0;
unsigned short var_18 = (unsigned short)31864;
unsigned long long int var_19 = 9891667527265252095ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 161179283;
unsigned int var_22 = 1030142724U;
signed char var_23 = (signed char)73;
long long int var_24 = -3593991670655494840LL;
unsigned long long int var_25 = 8496455103802245671ULL;
unsigned int var_26 = 3621831495U;
int var_27 = 1010479600;
unsigned char var_28 = (unsigned char)59;
unsigned char var_29 = (unsigned char)167;
unsigned short var_30 = (unsigned short)1768;
int var_31 = -1592639145;
unsigned int var_32 = 1191351668U;
unsigned int arr_0 [23] ;
long long int arr_1 [23] ;
int arr_2 [23] [23] [23] ;
unsigned char arr_3 [23] ;
signed char arr_4 [23] ;
unsigned short arr_5 [23] [23] [23] ;
int arr_7 [23] [23] ;
unsigned char arr_8 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] ;
_Bool arr_15 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1512450688U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -2184963577372239089LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -303898643;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)58786;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -28288585;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 9598100889501644014ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
