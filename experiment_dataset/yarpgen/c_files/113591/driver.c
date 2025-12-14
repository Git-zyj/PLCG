#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31952;
unsigned int var_1 = 1580733726U;
short var_2 = (short)-16737;
signed char var_4 = (signed char)-92;
unsigned int var_5 = 1420088876U;
short var_9 = (short)-12073;
unsigned long long int var_10 = 13043135452158670659ULL;
short var_11 = (short)-32115;
int zero = 0;
unsigned long long int var_12 = 5617057172793049347ULL;
unsigned int var_13 = 3263448348U;
signed char var_14 = (signed char)-97;
signed char var_15 = (signed char)110;
long long int var_16 = -1484280923458768324LL;
short arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
long long int arr_2 [21] ;
unsigned int arr_4 [21] [21] [21] ;
signed char arr_5 [21] [21] [21] [21] ;
signed char arr_6 [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-8143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 4190088737U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -6835976861276566562LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1546019623U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)62 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17707747427328544923ULL : 17969402838422218572ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
