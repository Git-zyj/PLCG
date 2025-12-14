#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
long long int var_2 = 3392371813228624985LL;
short var_4 = (short)-26016;
int var_11 = 535673960;
signed char var_12 = (signed char)-61;
signed char var_13 = (signed char)3;
unsigned short var_14 = (unsigned short)55072;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-69;
unsigned short var_17 = (unsigned short)24118;
long long int var_18 = 6251972678912243753LL;
int var_19 = 193284727;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4742421297114340475LL;
long long int var_22 = -3316740595666146602LL;
short var_23 = (short)-18483;
signed char var_24 = (signed char)-49;
unsigned char var_25 = (unsigned char)141;
short var_26 = (short)22026;
long long int var_27 = 3133447292875020008LL;
unsigned int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_3 [14] [14] ;
long long int arr_4 [14] [14] ;
unsigned char arr_6 [14] [14] ;
_Bool arr_2 [15] [15] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 445703205U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24907;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 11701635325467000581ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -2982646921561995834LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1341243653U;
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
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
