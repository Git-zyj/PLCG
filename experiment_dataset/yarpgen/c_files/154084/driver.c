#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
int var_1 = -597236358;
unsigned short var_2 = (unsigned short)56757;
unsigned long long int var_3 = 15432102599953692989ULL;
long long int var_4 = -4224494486136020770LL;
long long int var_5 = -7051618961250718953LL;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 12733745930028002477ULL;
short var_9 = (short)-14284;
unsigned short var_10 = (unsigned short)19207;
unsigned char var_12 = (unsigned char)153;
unsigned short var_13 = (unsigned short)37311;
unsigned int var_14 = 3833813898U;
int zero = 0;
signed char var_15 = (signed char)76;
long long int var_16 = 5798629813457104296LL;
signed char var_17 = (signed char)89;
long long int var_18 = 6811715829782626551LL;
signed char var_19 = (signed char)110;
unsigned short var_20 = (unsigned short)45305;
unsigned long long int var_21 = 5206791748440634330ULL;
unsigned long long int var_22 = 10911794942796520288ULL;
long long int var_23 = 2264335293469215974LL;
unsigned char var_24 = (unsigned char)46;
long long int var_25 = 6321952957847594150LL;
unsigned int arr_0 [19] ;
int arr_1 [19] [19] ;
long long int arr_2 [19] ;
unsigned int arr_5 [19] ;
signed char arr_6 [19] ;
int arr_9 [19] [19] ;
int arr_10 [19] [19] ;
signed char arr_12 [19] [19] [19] ;
int arr_14 [10] ;
short arr_15 [10] ;
int arr_7 [19] [19] ;
signed char arr_8 [19] ;
signed char arr_16 [10] ;
signed char arr_17 [10] [10] ;
long long int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3507733008U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -2110679962;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1134428353116147475LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2422638175U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 404657611;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 904921994;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -125577464;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (short)-23124;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 1871412754;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = -515486501564425842LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
