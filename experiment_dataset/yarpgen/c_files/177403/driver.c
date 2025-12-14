#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
short var_1 = (short)27329;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)249;
int var_4 = -518696465;
signed char var_6 = (signed char)-106;
unsigned int var_7 = 1290395156U;
unsigned short var_9 = (unsigned short)40530;
int var_11 = -1622594080;
int var_14 = 98005298;
long long int var_18 = 3864356294112287766LL;
int zero = 0;
unsigned char var_19 = (unsigned char)48;
long long int var_20 = -3419144497525585890LL;
signed char var_21 = (signed char)16;
unsigned char var_22 = (unsigned char)5;
unsigned long long int var_23 = 18322691519331971775ULL;
int var_24 = -1296873323;
int var_25 = 1661143745;
unsigned char var_26 = (unsigned char)164;
long long int var_27 = -6695788683745557887LL;
unsigned char var_28 = (unsigned char)87;
signed char var_29 = (signed char)-19;
unsigned char var_30 = (unsigned char)64;
_Bool var_31 = (_Bool)1;
unsigned int arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned int arr_6 [22] [22] ;
short arr_8 [22] ;
unsigned int arr_10 [12] ;
unsigned int arr_11 [12] ;
unsigned short arr_4 [15] [15] ;
long long int arr_5 [15] [15] ;
long long int arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3347116609U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 561309522U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -3807559719656595307LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1596219928U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)23374;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 2705590599U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 92982664U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)42061;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 508390476877686815LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 6451709131222769859LL : 4480335170837075409LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
