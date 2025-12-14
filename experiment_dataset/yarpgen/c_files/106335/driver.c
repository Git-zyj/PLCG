#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19875;
int var_1 = -1441012406;
unsigned long long int var_3 = 17645886057850500740ULL;
unsigned long long int var_7 = 17324122300728930264ULL;
unsigned long long int var_9 = 5345809199661519114ULL;
int var_11 = 1670513133;
int zero = 0;
unsigned long long int var_12 = 12291803592528904705ULL;
unsigned long long int var_13 = 1933757682533743832ULL;
unsigned long long int var_14 = 10399252341149476391ULL;
signed char var_15 = (signed char)44;
long long int var_16 = 6291795213070782246LL;
unsigned int var_17 = 2720438036U;
unsigned long long int var_18 = 14130991346958756381ULL;
int arr_0 [17] ;
int arr_1 [17] ;
short arr_3 [17] ;
int arr_6 [17] [17] ;
signed char arr_7 [17] [17] ;
int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -506336580 : 2041395100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 253770703;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)365 : (short)-12318;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -1029060432;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -1468808016 : 297184344;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
