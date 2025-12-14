#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23151;
int var_5 = -351081744;
unsigned long long int var_6 = 3274622397688707715ULL;
unsigned long long int var_9 = 8007491383326114181ULL;
int var_10 = -1847188944;
int var_13 = 1528165648;
unsigned long long int var_15 = 1549085954820497253ULL;
int var_16 = -397650375;
int zero = 0;
short var_17 = (short)-11917;
unsigned short var_18 = (unsigned short)16526;
unsigned long long int var_19 = 15644131723520756726ULL;
int var_20 = -926474393;
unsigned long long int var_21 = 10270283198880769980ULL;
unsigned char var_22 = (unsigned char)90;
unsigned int var_23 = 1195151351U;
int var_24 = 2100773094;
int arr_3 [18] ;
unsigned char arr_8 [22] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1080425140;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 167738608;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
