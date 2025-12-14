#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20021;
signed char var_1 = (signed char)78;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
long long int var_4 = -2018839678139808537LL;
unsigned long long int var_5 = 4253915844110123937ULL;
unsigned long long int var_6 = 9148755562790888691ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 4005309112465130300LL;
unsigned int var_9 = 1699249404U;
unsigned int var_10 = 1313728518U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-20190;
long long int var_13 = -4835505566401833597LL;
short var_14 = (short)26693;
short var_15 = (short)-31876;
signed char var_16 = (signed char)-122;
unsigned char var_17 = (unsigned char)227;
int zero = 0;
int var_18 = -119118944;
int var_19 = -83996373;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2513654066U;
unsigned long long int var_22 = 12136669908743471975ULL;
int var_23 = -1610787559;
short var_24 = (short)-23828;
unsigned long long int var_25 = 10077933313487279141ULL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 3139862442412865204LL;
short var_28 = (short)16692;
signed char var_29 = (signed char)-9;
int var_30 = -132763131;
int arr_15 [16] [16] [16] [16] [16] ;
_Bool arr_16 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1803035012 : -507743075;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
