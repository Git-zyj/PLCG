#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 847940575U;
unsigned long long int var_1 = 16520852627539991557ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)1924;
long long int var_4 = -3517638470995809585LL;
unsigned long long int var_5 = 5614291857893132167ULL;
unsigned long long int var_6 = 12929299446836010042ULL;
signed char var_7 = (signed char)-73;
unsigned int var_8 = 1250403375U;
long long int var_9 = -2323814672708363911LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11156589553376564265ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1470882018U;
long long int var_14 = -2544644297392182348LL;
int var_15 = 167213508;
long long int var_16 = 7576730164693321922LL;
signed char var_17 = (signed char)-15;
unsigned long long int var_18 = 9401502577106021558ULL;
unsigned char var_19 = (unsigned char)142;
unsigned char arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned short arr_12 [20] [20] [20] [20] ;
signed char arr_16 [24] ;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
long long int arr_15 [20] ;
unsigned short arr_22 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42399;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 984429896U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1493653208U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 259997402111990410LL : -8343353919872196056LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (unsigned short)4116;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
