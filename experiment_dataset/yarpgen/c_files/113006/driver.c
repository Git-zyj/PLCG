#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned short var_3 = (unsigned short)17371;
unsigned long long int var_4 = 238460982065374187ULL;
unsigned int var_5 = 3227755192U;
unsigned char var_9 = (unsigned char)187;
signed char var_11 = (signed char)-93;
unsigned long long int var_13 = 11565169595307443423ULL;
int zero = 0;
int var_15 = -1542148627;
long long int var_16 = 8994827999086655103LL;
unsigned int var_17 = 2467733101U;
signed char var_18 = (signed char)-36;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 978858740U;
unsigned int var_21 = 501493136U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)32416;
unsigned long long int var_24 = 1509512970685036793ULL;
_Bool arr_1 [11] ;
unsigned long long int arr_3 [11] [11] ;
_Bool arr_5 [11] ;
unsigned long long int arr_7 [11] [11] ;
unsigned short arr_8 [11] [11] ;
signed char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 5826693405968166837ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 15834500342512773842ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)35265 : (unsigned short)56961;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-4;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
