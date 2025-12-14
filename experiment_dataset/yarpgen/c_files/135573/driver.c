#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10728;
unsigned long long int var_16 = 10896315903752514747ULL;
unsigned long long int var_17 = 13359570795604568099ULL;
int zero = 0;
int var_20 = 298123448;
short var_21 = (short)-31182;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-5458;
signed char var_25 = (signed char)-89;
short var_26 = (short)-26182;
unsigned long long int var_27 = 5954226838192461673ULL;
int var_28 = 641881986;
signed char var_29 = (signed char)-126;
int var_30 = 161978389;
short var_31 = (short)-10868;
unsigned long long int var_32 = 10889813372483859492ULL;
unsigned long long int var_33 = 14245040436107523958ULL;
short var_34 = (short)-6975;
int var_35 = 1783355113;
int var_36 = 298206208;
_Bool var_37 = (_Bool)0;
_Bool arr_1 [18] ;
signed char arr_2 [18] [18] ;
unsigned int arr_3 [18] [18] [18] ;
int arr_4 [18] [18] [18] ;
unsigned int arr_6 [18] ;
_Bool arr_7 [18] ;
short arr_10 [18] ;
signed char arr_13 [18] [18] ;
unsigned long long int arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 302092183U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1371302467;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1051432889U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)9745;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 15867869903237476991ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
