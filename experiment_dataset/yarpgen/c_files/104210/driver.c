#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 782556522;
long long int var_1 = -3110110151768860514LL;
unsigned long long int var_2 = 15091801089173261498ULL;
unsigned long long int var_3 = 12642244690332626295ULL;
unsigned short var_4 = (unsigned short)3878;
int var_7 = -606350349;
unsigned int var_9 = 3488819302U;
long long int var_10 = 411082839172395279LL;
int var_11 = 899649110;
unsigned int var_13 = 1513760288U;
int zero = 0;
int var_14 = -351063901;
unsigned long long int var_15 = 8916320186866357617ULL;
int var_16 = -838631841;
unsigned int var_17 = 3158025065U;
long long int var_18 = 6302962678609651398LL;
unsigned short var_19 = (unsigned short)40232;
unsigned int var_20 = 3896188932U;
int var_21 = -113681602;
unsigned short var_22 = (unsigned short)7892;
unsigned char var_23 = (unsigned char)128;
unsigned char var_24 = (unsigned char)0;
unsigned int var_25 = 2152595626U;
unsigned short arr_0 [15] [15] ;
unsigned short arr_4 [10] ;
int arr_5 [10] ;
unsigned int arr_6 [10] ;
int arr_10 [10] ;
unsigned int arr_14 [10] [10] ;
unsigned int arr_15 [10] ;
unsigned char arr_22 [21] ;
int arr_23 [21] [21] ;
int arr_3 [15] [15] ;
int arr_16 [10] ;
unsigned int arr_19 [10] [10] ;
unsigned int arr_20 [10] [10] ;
unsigned long long int arr_24 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)9707;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)42434;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -242695805;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1689584253U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -888613232 : -877170629;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 1737998977U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 2163013102U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = -1664455763;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 496235839;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -2057422595 : -103813261;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 3097149820U : 3832283166U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 4208314226U : 1994663469U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2442053820087297482ULL : 11918013892173777027ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
