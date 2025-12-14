#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15631430600242251037ULL;
long long int var_3 = -3453709585127120157LL;
short var_6 = (short)13332;
unsigned int var_8 = 793984591U;
signed char var_9 = (signed char)15;
int zero = 0;
long long int var_10 = -5156297313496936728LL;
unsigned long long int var_11 = 1288385028916362654ULL;
long long int var_12 = 7987060672561275012LL;
signed char var_13 = (signed char)49;
signed char var_14 = (signed char)-81;
signed char var_15 = (signed char)-6;
signed char var_16 = (signed char)95;
signed char var_17 = (signed char)-33;
int var_18 = 823471144;
unsigned long long int var_19 = 8626098489402797468ULL;
unsigned long long int var_20 = 12624084967893391770ULL;
unsigned long long int var_21 = 1179240520086492358ULL;
int var_22 = 1413498605;
long long int arr_0 [13] [13] ;
_Bool arr_8 [20] ;
unsigned short arr_9 [20] [20] ;
short arr_11 [20] ;
unsigned char arr_12 [20] ;
signed char arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2100822498085835068LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)64193;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)26119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (signed char)88;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
