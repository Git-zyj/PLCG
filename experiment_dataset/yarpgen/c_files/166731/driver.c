#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-75;
signed char var_3 = (signed char)100;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-8507;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)181;
signed char var_14 = (signed char)5;
unsigned int var_15 = 3965931791U;
int zero = 0;
unsigned short var_17 = (unsigned short)25697;
short var_18 = (short)-20448;
unsigned int var_19 = 4062804034U;
signed char var_20 = (signed char)83;
unsigned long long int var_21 = 11426539386444044740ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
int var_24 = -324924751;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 2577835581U;
unsigned int var_27 = 2813902217U;
unsigned long long int var_28 = 14946840921754287481ULL;
long long int arr_1 [23] ;
long long int arr_2 [23] ;
short arr_4 [23] [23] [23] ;
_Bool arr_5 [23] [23] ;
unsigned char arr_6 [23] [23] [23] [23] ;
unsigned char arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 5761192107026819150LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7306823729924748031LL : 1225081100537977849LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)13390;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)104 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)152;
}

void checksum() {
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
