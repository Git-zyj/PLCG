#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned int var_1 = 3483243193U;
unsigned long long int var_2 = 1059678882259810057ULL;
unsigned char var_6 = (unsigned char)214;
unsigned long long int var_8 = 7435751787380749718ULL;
unsigned char var_9 = (unsigned char)95;
unsigned short var_11 = (unsigned short)37485;
unsigned long long int var_12 = 4238330419362778988ULL;
int zero = 0;
long long int var_13 = -8724588569098772837LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)2358;
int var_16 = -41449254;
unsigned long long int var_17 = 275474343874361474ULL;
unsigned char var_18 = (unsigned char)16;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)221;
unsigned long long int var_21 = 1231258177863947217ULL;
unsigned char var_22 = (unsigned char)125;
short var_23 = (short)14518;
signed char var_24 = (signed char)-68;
unsigned long long int var_25 = 13526292344570038531ULL;
unsigned long long int arr_2 [13] ;
unsigned int arr_9 [17] [17] ;
unsigned long long int arr_11 [17] ;
unsigned long long int arr_13 [17] ;
unsigned char arr_14 [17] ;
short arr_21 [13] ;
signed char arr_4 [13] [13] ;
signed char arr_18 [17] [17] [17] ;
short arr_19 [17] ;
unsigned int arr_22 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7171393239137304090ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 1564450616U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 17692407277689410107ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 15591532444735031430ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (short)9354;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (short)31177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = 1571974643U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
