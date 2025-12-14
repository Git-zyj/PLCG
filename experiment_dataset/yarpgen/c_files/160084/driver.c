#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-25269;
int var_13 = -322523786;
int var_14 = -1322204556;
long long int var_15 = 4475323163370761941LL;
unsigned long long int var_16 = 9931831747630932960ULL;
unsigned char var_17 = (unsigned char)131;
unsigned short var_19 = (unsigned short)14717;
int zero = 0;
unsigned char var_20 = (unsigned char)103;
short var_21 = (short)24980;
signed char var_22 = (signed char)86;
int var_23 = 797460850;
unsigned int var_24 = 599799912U;
int var_25 = 1711497996;
int var_26 = -393205139;
long long int arr_0 [20] ;
long long int arr_1 [20] ;
long long int arr_5 [15] [15] ;
int arr_7 [15] [15] ;
long long int arr_8 [15] [15] [15] ;
long long int arr_3 [20] ;
unsigned char arr_6 [15] ;
int arr_10 [15] ;
unsigned int arr_13 [15] [15] ;
unsigned int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2995831848205444970LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 6552268533558416334LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -3171113799607774694LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 517396793;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1885548169235758125LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5752702182573739378LL : 3948997079865048419LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -1230237802;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 3756359988U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 300353806U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
