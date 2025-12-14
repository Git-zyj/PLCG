#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1494569635;
long long int var_1 = -8021391710808267518LL;
signed char var_2 = (signed char)83;
unsigned short var_3 = (unsigned short)8069;
long long int var_4 = -2802288599498418856LL;
long long int var_5 = 4810342801412989162LL;
unsigned long long int var_6 = 8569384565313188091ULL;
unsigned long long int var_7 = 10104738446397030172ULL;
unsigned char var_8 = (unsigned char)205;
signed char var_10 = (signed char)-100;
int zero = 0;
unsigned long long int var_11 = 18414801587760076396ULL;
int var_12 = -956641286;
unsigned char var_13 = (unsigned char)156;
long long int var_14 = 1073449713531363173LL;
unsigned long long int var_15 = 5693299959681129391ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)12338;
unsigned long long int var_18 = 6679408102255467197ULL;
long long int arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned long long int arr_6 [11] ;
long long int arr_8 [14] ;
unsigned long long int arr_9 [14] [14] ;
unsigned char arr_10 [14] [14] ;
unsigned short arr_2 [18] ;
signed char arr_3 [18] ;
unsigned char arr_4 [18] ;
unsigned int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1054503162322028443LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1848460854703067470ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 5774257465627004987LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 17325529934788918577ULL : 16860714946042879368ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)43191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 1592409117U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
