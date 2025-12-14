#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -903713564;
_Bool var_2 = (_Bool)1;
unsigned int var_10 = 3412750282U;
unsigned long long int var_13 = 11638957974088913743ULL;
short var_14 = (short)31236;
int var_18 = 795440624;
int zero = 0;
unsigned long long int var_20 = 15191292894217151115ULL;
int var_21 = -1067432295;
int var_22 = 794040641;
short var_23 = (short)6265;
unsigned char var_24 = (unsigned char)43;
long long int var_25 = 4680789382452269419LL;
short var_26 = (short)5580;
unsigned short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
_Bool arr_3 [14] ;
unsigned long long int arr_4 [14] [14] ;
long long int arr_5 [14] ;
signed char arr_10 [20] ;
int arr_12 [20] ;
_Bool arr_14 [20] [20] [20] ;
unsigned short arr_8 [14] [14] [14] [14] ;
long long int arr_18 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)55644;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 9463118442723883738ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 15024018317816057537ULL : 5224602421764273938ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -6536299055234290555LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -1971097224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)42275 : (unsigned short)28315;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 4162284309699776182LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
