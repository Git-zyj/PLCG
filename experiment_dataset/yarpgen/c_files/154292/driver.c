#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_19 = 1176100765U;
unsigned int var_20 = 4257188840U;
unsigned long long int var_21 = 10298934068376619609ULL;
short var_22 = (short)-22656;
unsigned long long int var_23 = 16996280142620062915ULL;
unsigned char var_24 = (unsigned char)135;
long long int var_25 = -2260833645930290768LL;
unsigned short var_26 = (unsigned short)17461;
short var_27 = (short)-30691;
long long int var_28 = 424486942392415003LL;
unsigned long long int var_29 = 14238517186742535977ULL;
signed char var_30 = (signed char)15;
unsigned long long int var_31 = 12943863281072832159ULL;
signed char var_32 = (signed char)91;
signed char arr_11 [15] [15] ;
unsigned long long int arr_12 [15] ;
short arr_16 [25] ;
unsigned char arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-17 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 4976796630064262465ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (short)20723;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned char)64;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
