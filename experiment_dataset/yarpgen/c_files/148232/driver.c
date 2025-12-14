#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11330052635445030266ULL;
unsigned long long int var_2 = 360560571896979317ULL;
unsigned long long int var_5 = 1396917850512907232ULL;
unsigned long long int var_6 = 11224433179844133392ULL;
unsigned long long int var_11 = 3704948853158140004ULL;
unsigned long long int var_13 = 9447400495056703293ULL;
unsigned long long int var_14 = 7678373224718950446ULL;
unsigned long long int var_15 = 10490104666782233808ULL;
unsigned long long int var_17 = 2811797838981719861ULL;
int zero = 0;
unsigned long long int var_20 = 14189162745861591452ULL;
unsigned long long int var_21 = 14411588245183950805ULL;
unsigned long long int var_22 = 9207742260963816212ULL;
unsigned long long int var_23 = 9143932093230851840ULL;
unsigned long long int var_24 = 2490384538488928894ULL;
unsigned long long int var_25 = 6737996906705431997ULL;
unsigned long long int var_26 = 13802624003662720405ULL;
unsigned long long int var_27 = 6201917790406136683ULL;
unsigned long long int var_28 = 14640681050422462637ULL;
unsigned long long int var_29 = 14371532800467858053ULL;
unsigned long long int arr_2 [15] [15] ;
unsigned long long int arr_6 [15] [15] [15] [15] ;
unsigned long long int arr_9 [13] ;
unsigned long long int arr_10 [13] ;
unsigned long long int arr_13 [24] [24] ;
unsigned long long int arr_21 [24] [24] [24] [24] ;
unsigned long long int arr_22 [24] [24] ;
unsigned long long int arr_23 [24] [24] [24] [24] ;
unsigned long long int arr_12 [13] ;
unsigned long long int arr_17 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 5106481704436668572ULL : 27642111881385936ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 9250955973315398423ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 6007394105610164497ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 9414466190109429063ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 11411354446663572006ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 8447341795894780742ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 2650575944809639720ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 17502337436550900421ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 17741587578835783242ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 7095162846546883847ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
