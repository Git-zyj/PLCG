#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39326;
unsigned char var_2 = (unsigned char)156;
short var_4 = (short)32687;
unsigned short var_5 = (unsigned short)18896;
long long int var_6 = 5904451459807028726LL;
unsigned long long int var_7 = 15251689361102212336ULL;
signed char var_11 = (signed char)-45;
long long int var_12 = -5680568582151813338LL;
signed char var_13 = (signed char)84;
unsigned long long int var_14 = 5822900495695077669ULL;
unsigned long long int var_15 = 11836088190156256042ULL;
signed char var_16 = (signed char)-46;
unsigned long long int var_17 = 9971970335871082785ULL;
int zero = 0;
int var_18 = -1352356008;
int var_19 = 623627670;
short var_20 = (short)18001;
signed char var_21 = (signed char)-87;
short var_22 = (short)-29321;
unsigned long long int arr_0 [19] ;
short arr_1 [19] [19] ;
long long int arr_3 [20] ;
signed char arr_4 [20] [20] ;
signed char arr_5 [20] ;
signed char arr_9 [20] ;
signed char arr_11 [17] [17] ;
unsigned short arr_2 [19] ;
short arr_6 [20] [20] ;
int arr_7 [20] ;
short arr_10 [20] [20] ;
short arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 14757113528903579755ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6673;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 162939533124968519LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)22306;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)27213;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1751892582;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (short)26156;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11468 : (short)-17536;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
