#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4411990235119357927LL;
unsigned char var_1 = (unsigned char)164;
unsigned short var_2 = (unsigned short)45930;
unsigned short var_3 = (unsigned short)15696;
unsigned int var_4 = 1599018338U;
unsigned short var_6 = (unsigned short)34106;
unsigned int var_7 = 1153826977U;
long long int var_8 = 797789725109874607LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)32;
int zero = 0;
unsigned short var_14 = (unsigned short)29054;
unsigned short var_15 = (unsigned short)13578;
int var_16 = -513014221;
signed char var_17 = (signed char)-50;
unsigned int var_18 = 1858652741U;
_Bool var_19 = (_Bool)1;
int var_20 = -32287941;
long long int var_21 = 5219969999140981452LL;
int var_22 = 162572871;
unsigned int var_23 = 1314359871U;
unsigned long long int var_24 = 9850273870787648719ULL;
unsigned short var_25 = (unsigned short)48279;
signed char var_26 = (signed char)-36;
unsigned char var_27 = (unsigned char)118;
unsigned int var_28 = 1549237725U;
signed char var_29 = (signed char)-6;
unsigned short var_30 = (unsigned short)1140;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)103;
unsigned short var_33 = (unsigned short)38148;
unsigned long long int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned char arr_2 [10] [10] [10] ;
long long int arr_3 [10] [10] ;
signed char arr_6 [10] [10] [10] ;
unsigned char arr_8 [13] ;
unsigned short arr_9 [13] ;
signed char arr_11 [19] [19] ;
unsigned char arr_15 [19] [19] [19] ;
long long int arr_17 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6189243211088866287ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)62410;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7846694305578484634LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)33682;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 8475723831178599100LL;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
