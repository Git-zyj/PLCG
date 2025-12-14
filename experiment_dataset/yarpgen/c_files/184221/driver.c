#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37428;
unsigned int var_2 = 877562378U;
unsigned long long int var_5 = 12753154972288006598ULL;
signed char var_6 = (signed char)-18;
unsigned long long int var_7 = 8017917845795462022ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)23118;
long long int var_12 = 2900244996140606136LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)17;
int zero = 0;
int var_15 = -865297103;
short var_16 = (short)23069;
unsigned char var_17 = (unsigned char)25;
int var_18 = 1877080413;
signed char var_19 = (signed char)116;
unsigned long long int var_20 = 16722969186106313567ULL;
unsigned short var_21 = (unsigned short)26848;
signed char arr_3 [13] ;
int arr_4 [13] ;
short arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1868510239;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-16295 : (short)-26898;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
