#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5800;
_Bool var_1 = (_Bool)1;
long long int var_2 = 2821422047058646186LL;
signed char var_3 = (signed char)74;
unsigned short var_4 = (unsigned short)22226;
short var_5 = (short)-27982;
short var_6 = (short)10939;
unsigned short var_7 = (unsigned short)55622;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)24195;
unsigned int var_10 = 3780397350U;
unsigned int var_12 = 3389198747U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-119;
short var_15 = (short)-21131;
unsigned long long int var_16 = 8571633004969222451ULL;
long long int var_17 = 6640551524873136367LL;
unsigned short var_18 = (unsigned short)44568;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)2;
long long int arr_6 [22] [22] [22] [22] ;
_Bool arr_10 [22] [22] [22] ;
unsigned short arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -6050931631741166556LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)42091;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
