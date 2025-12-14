#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8145;
short var_1 = (short)18067;
short var_2 = (short)20035;
unsigned char var_3 = (unsigned char)142;
long long int var_5 = -862870497974470344LL;
unsigned char var_6 = (unsigned char)96;
long long int var_7 = -8712144680268097025LL;
unsigned char var_8 = (unsigned char)8;
unsigned int var_13 = 1545248126U;
unsigned char var_14 = (unsigned char)58;
short var_15 = (short)-31972;
int zero = 0;
long long int var_20 = -4198948178110530248LL;
unsigned char var_21 = (unsigned char)188;
unsigned char var_22 = (unsigned char)24;
unsigned int var_23 = 3780265877U;
unsigned char var_24 = (unsigned char)128;
unsigned char var_25 = (unsigned char)86;
unsigned char var_26 = (unsigned char)39;
long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned char arr_3 [13] [13] [13] ;
long long int arr_4 [13] [13] ;
unsigned char arr_8 [21] ;
short arr_9 [21] ;
long long int arr_10 [21] [21] ;
long long int arr_5 [13] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -3809688656910974186LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2173034576U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2920278214U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 5734512268956390877LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)32413;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -4042937964306891295LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -4985482722662903863LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 4966955514986196694LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
