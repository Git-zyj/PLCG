#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
long long int var_1 = -3360477236025430377LL;
unsigned long long int var_2 = 9898855061822119101ULL;
int var_4 = -100409254;
_Bool var_5 = (_Bool)1;
long long int var_7 = -5601359706030213537LL;
long long int var_8 = -6036617630598585307LL;
long long int var_10 = -1388992639021904545LL;
signed char var_11 = (signed char)116;
signed char var_14 = (signed char)-70;
short var_15 = (short)15538;
long long int var_16 = -2744565998790550790LL;
unsigned long long int var_17 = 130392236584395780ULL;
unsigned long long int var_18 = 2245341398647973157ULL;
int zero = 0;
long long int var_20 = -4599391246917267800LL;
unsigned short var_21 = (unsigned short)9022;
unsigned long long int var_22 = 1353171764484281701ULL;
short var_23 = (short)-17972;
long long int var_24 = 451180675478678926LL;
short var_25 = (short)-25114;
unsigned long long int var_26 = 12481473096367275304ULL;
short arr_0 [17] [17] ;
long long int arr_1 [17] ;
int arr_2 [17] [17] ;
_Bool arr_4 [18] ;
long long int arr_5 [18] ;
signed char arr_3 [17] ;
long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6007;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 7882798194854592116LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2129924137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -8338136240465032534LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 8041121756528759510LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
