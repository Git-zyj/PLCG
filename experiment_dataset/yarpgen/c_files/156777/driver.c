#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -30100341;
unsigned short var_3 = (unsigned short)4170;
unsigned long long int var_5 = 8477733309993974968ULL;
int var_6 = 1988379858;
long long int var_7 = -7025158652771540262LL;
unsigned long long int var_8 = 4629219246559040628ULL;
unsigned char var_9 = (unsigned char)229;
int var_10 = -289620303;
int var_11 = -2025002428;
int var_12 = 240269727;
int zero = 0;
long long int var_13 = 8201651186093803114LL;
long long int var_14 = 2001639616093553703LL;
unsigned short var_15 = (unsigned short)38363;
int var_16 = -1507269972;
int var_17 = 1159321065;
long long int var_18 = 8216002876222905062LL;
unsigned int var_19 = 3961969929U;
long long int var_20 = -8939615921546399145LL;
unsigned int var_21 = 2895196453U;
unsigned char var_22 = (unsigned char)173;
unsigned long long int var_23 = 2266939986405013505ULL;
int var_24 = -178997629;
signed char var_25 = (signed char)69;
signed char arr_0 [18] ;
unsigned int arr_1 [18] ;
unsigned int arr_4 [18] [18] [18] ;
signed char arr_6 [18] [18] [18] [18] ;
signed char arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4111970453U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1339326111U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
