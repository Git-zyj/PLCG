#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
short var_1 = (short)26774;
unsigned char var_2 = (unsigned char)13;
unsigned short var_5 = (unsigned short)15319;
long long int var_8 = -7104158407312521039LL;
unsigned long long int var_9 = 10330350392679353027ULL;
unsigned char var_10 = (unsigned char)33;
short var_11 = (short)5740;
int var_12 = 1969717726;
long long int var_13 = -2057408699435144930LL;
long long int var_16 = -8054028338465480289LL;
int var_17 = 371190715;
unsigned int var_18 = 4208291711U;
int zero = 0;
long long int var_19 = 511486877302997748LL;
unsigned int var_20 = 1687399540U;
long long int var_21 = -8840084996238602394LL;
short var_22 = (short)11586;
unsigned char var_23 = (unsigned char)200;
unsigned long long int var_24 = 15252424964492616378ULL;
int var_25 = -1091336445;
long long int var_26 = -3163486146342239754LL;
int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
long long int arr_5 [14] [14] ;
long long int arr_6 [14] [14] ;
unsigned char arr_8 [14] ;
int arr_9 [14] [14] ;
int arr_10 [14] [14] [14] ;
long long int arr_13 [14] [14] ;
long long int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1790360798;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6044505822472988688ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 8783724711304111938LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = -9124791613320274022LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -1497704997;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1897603233;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 290403083273131214LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -1632555241346305496LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
