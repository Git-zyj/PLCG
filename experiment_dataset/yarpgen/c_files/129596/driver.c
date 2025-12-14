#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7130851762560498523ULL;
unsigned short var_1 = (unsigned short)11556;
unsigned int var_3 = 3081746505U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 37772839U;
signed char var_6 = (signed char)62;
unsigned int var_7 = 1457676543U;
unsigned long long int var_8 = 10680872355230046279ULL;
signed char var_9 = (signed char)-6;
unsigned short var_10 = (unsigned short)7600;
signed char var_11 = (signed char)-23;
long long int var_13 = 7663332251650011141LL;
unsigned short var_14 = (unsigned short)55793;
int zero = 0;
unsigned char var_15 = (unsigned char)79;
long long int var_16 = -8693138516292965762LL;
unsigned long long int var_17 = 3299292665265389131ULL;
int var_18 = -278431895;
unsigned long long int var_19 = 8758158526800325618ULL;
long long int arr_3 [19] ;
int arr_9 [19] [19] ;
_Bool arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -9004145332680140063LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -48718015;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
