#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8109968025955790372LL;
unsigned long long int var_1 = 15810872035973878097ULL;
unsigned long long int var_2 = 15411570715444650904ULL;
unsigned long long int var_4 = 7996435322478082642ULL;
unsigned long long int var_5 = 13653388768114480640ULL;
short var_7 = (short)-27981;
signed char var_8 = (signed char)-48;
long long int var_9 = -5622506748385256054LL;
int zero = 0;
int var_10 = 1506188893;
signed char var_11 = (signed char)-42;
signed char var_12 = (signed char)-36;
unsigned long long int var_13 = 12926320954061727138ULL;
unsigned long long int var_14 = 1267551553302634365ULL;
int var_15 = -1494414075;
long long int var_16 = -5702021303944617824LL;
long long int var_17 = -6247972010748406333LL;
unsigned long long int var_18 = 10661599885239369739ULL;
signed char var_19 = (signed char)52;
short var_20 = (short)-30812;
unsigned long long int var_21 = 3727007976773764499ULL;
long long int var_22 = -5480700489131376477LL;
signed char var_23 = (signed char)-28;
long long int var_24 = 6629384633052049109LL;
signed char var_25 = (signed char)-79;
int var_26 = -1186949645;
unsigned int arr_2 [18] ;
int arr_7 [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] ;
short arr_12 [11] [11] ;
unsigned long long int arr_24 [20] ;
unsigned long long int arr_25 [20] [20] [20] ;
short arr_26 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2785538001U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 170757767;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2110754411289284038ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (short)3889;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 9755721065943292319ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 4322754706150496764ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = (short)28719;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
