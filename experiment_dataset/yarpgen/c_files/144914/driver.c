#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)24;
unsigned char var_2 = (unsigned char)119;
unsigned long long int var_3 = 3459317648311773972ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)75;
unsigned long long int var_6 = 11913308225612927476ULL;
unsigned char var_7 = (unsigned char)4;
_Bool var_8 = (_Bool)1;
short var_9 = (short)6846;
int zero = 0;
short var_10 = (short)5283;
unsigned char var_11 = (unsigned char)149;
unsigned char var_12 = (unsigned char)89;
unsigned char var_13 = (unsigned char)21;
unsigned short var_14 = (unsigned short)64952;
unsigned char var_15 = (unsigned char)79;
unsigned char var_16 = (unsigned char)226;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7334558574331919630ULL;
unsigned char var_19 = (unsigned char)69;
unsigned short var_20 = (unsigned short)38100;
unsigned char var_21 = (unsigned char)219;
unsigned char var_22 = (unsigned char)222;
unsigned short var_23 = (unsigned short)34911;
_Bool arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned long long int arr_4 [20] ;
unsigned short arr_5 [20] ;
unsigned long long int arr_7 [20] [20] ;
_Bool arr_9 [20] [20] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned long long int arr_11 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 11476549001912966497ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)64155;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 12354592505823159890ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 12376872183216892124ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 16316445495341461058ULL : 3239837336329126384ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12203164178802849999ULL : 7296124086540855246ULL;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
