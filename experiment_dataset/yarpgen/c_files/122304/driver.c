#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60474;
unsigned char var_1 = (unsigned char)235;
long long int var_2 = 5485218279737835330LL;
int var_3 = 1856798402;
unsigned short var_4 = (unsigned short)20467;
short var_5 = (short)31442;
long long int var_6 = -7124807892588050359LL;
signed char var_7 = (signed char)-58;
signed char var_8 = (signed char)-102;
long long int var_9 = -5778728562152882408LL;
long long int var_10 = -7242946915491726704LL;
int zero = 0;
int var_11 = 6564840;
int var_12 = 430812677;
unsigned int var_13 = 3180937551U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)152;
short var_16 = (short)3113;
int var_17 = -1984984942;
unsigned long long int var_18 = 8268865945917244341ULL;
signed char var_19 = (signed char)-126;
int var_20 = -782674914;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned char arr_3 [21] ;
_Bool arr_2 [21] [21] ;
unsigned long long int arr_6 [21] ;
int arr_7 [21] ;
signed char arr_10 [21] [21] ;
unsigned short arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2067169854727115308ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 12664491531707826272ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 334770183268669649ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1568617051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)43028;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
