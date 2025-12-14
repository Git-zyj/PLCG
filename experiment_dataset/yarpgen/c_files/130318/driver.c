#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 761222555;
int var_2 = -2048905911;
unsigned short var_5 = (unsigned short)63414;
unsigned long long int var_8 = 17577277843498933917ULL;
unsigned long long int var_9 = 16902974543624338786ULL;
unsigned short var_11 = (unsigned short)2171;
unsigned short var_12 = (unsigned short)9557;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-39;
unsigned long long int var_15 = 17307322792770036414ULL;
unsigned long long int var_16 = 5770526942323590176ULL;
int zero = 0;
signed char var_18 = (signed char)-97;
unsigned char var_19 = (unsigned char)186;
unsigned int var_20 = 3762550565U;
unsigned long long int var_21 = 74658617105034443ULL;
unsigned int var_22 = 2372305006U;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1028447617U;
long long int var_25 = -1384068243454083651LL;
_Bool var_26 = (_Bool)0;
unsigned short arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
short arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned int arr_6 [14] [14] [14] [14] ;
long long int arr_5 [14] [14] [14] ;
signed char arr_13 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)37218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1657723711842468157ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)23660;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 1881821470U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 663046772U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4622922873723933560LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)77;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
