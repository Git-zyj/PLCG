#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3055564236U;
unsigned long long int var_4 = 4523089284743124706ULL;
unsigned short var_7 = (unsigned short)63743;
signed char var_9 = (signed char)-30;
signed char var_12 = (signed char)-114;
unsigned short var_14 = (unsigned short)17507;
long long int var_15 = 5324101471235056169LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = -2135586148;
unsigned short var_18 = (unsigned short)35785;
signed char var_19 = (signed char)47;
int var_20 = 350223841;
int var_21 = -234966714;
long long int var_22 = 3583710295496858408LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)48854;
short var_25 = (short)-9599;
unsigned short var_26 = (unsigned short)51293;
unsigned long long int var_27 = 14878873861998946784ULL;
int var_28 = 702928483;
unsigned short var_29 = (unsigned short)57428;
signed char arr_0 [10] ;
_Bool arr_1 [10] ;
_Bool arr_2 [10] ;
unsigned long long int arr_3 [19] [19] ;
unsigned long long int arr_4 [19] [19] ;
signed char arr_7 [10] ;
unsigned long long int arr_8 [10] ;
signed char arr_12 [10] [10] ;
signed char arr_5 [19] ;
unsigned long long int arr_6 [19] ;
_Bool arr_10 [10] ;
unsigned int arr_13 [10] ;
_Bool arr_17 [10] ;
unsigned short arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1410394217029097916ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 17742753618270076947ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 8950103976491297007ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 17944357442818657929ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1580515739U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44916 : (unsigned short)42667;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
