#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned char var_1 = (unsigned char)132;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-7;
unsigned int var_7 = 739786703U;
signed char var_8 = (signed char)-116;
unsigned int var_9 = 1810051189U;
unsigned char var_10 = (unsigned char)182;
short var_11 = (short)-15740;
unsigned long long int var_12 = 11795079606522359485ULL;
long long int var_13 = -6423932290553195164LL;
unsigned char var_14 = (unsigned char)215;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 13097719710653105183ULL;
unsigned char var_17 = (unsigned char)14;
unsigned char var_18 = (unsigned char)236;
short var_19 = (short)-1112;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)185;
signed char var_22 = (signed char)108;
unsigned short var_23 = (unsigned short)48280;
unsigned long long int arr_0 [20] ;
_Bool arr_1 [20] ;
_Bool arr_3 [20] [20] ;
unsigned short arr_4 [20] ;
short arr_7 [20] [20] ;
int arr_8 [20] ;
unsigned int arr_9 [20] [20] ;
long long int arr_11 [20] ;
short arr_13 [20] ;
unsigned char arr_14 [20] [20] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
long long int arr_6 [20] [20] [20] ;
signed char arr_10 [20] ;
unsigned char arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 15872746679693388763ULL : 6922806950739905062ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)55170;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)22042;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -429478636;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 176684207U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1516801160333797543LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (short)2710;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15690 : (unsigned short)46001;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1958051057387494398ULL : 9492030258550701113ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1725942135929415762LL : 6335495665187762706LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
