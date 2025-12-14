#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
long long int var_1 = 4213643510856567959LL;
signed char var_4 = (signed char)70;
unsigned char var_5 = (unsigned char)100;
signed char var_6 = (signed char)-76;
long long int var_7 = -7713229681053592521LL;
short var_8 = (short)-10108;
int var_10 = 854404702;
unsigned char var_11 = (unsigned char)24;
long long int var_13 = 3340762190385646007LL;
long long int var_14 = 5781399943249964042LL;
unsigned long long int var_15 = 10608742924489714021ULL;
long long int var_16 = -7199602486243437959LL;
int zero = 0;
unsigned int var_17 = 2682715671U;
unsigned char var_18 = (unsigned char)135;
unsigned char var_19 = (unsigned char)161;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6557817872620092363LL;
short var_22 = (short)17274;
unsigned short var_23 = (unsigned short)24085;
signed char arr_1 [13] ;
long long int arr_3 [13] [13] [13] ;
_Bool arr_5 [13] [13] [13] [13] ;
long long int arr_8 [25] [25] ;
short arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 152748876674564892LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 7106325326497859785LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)13425;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
