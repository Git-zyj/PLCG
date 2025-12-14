#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1928277095;
unsigned long long int var_3 = 7312225209676359033ULL;
unsigned long long int var_5 = 10345286124843427319ULL;
unsigned long long int var_6 = 15721354185300539534ULL;
unsigned long long int var_7 = 15520922589378315691ULL;
int var_9 = -1103491687;
unsigned int var_10 = 1721813347U;
unsigned int var_11 = 2535077617U;
short var_12 = (short)28288;
short var_13 = (short)13740;
short var_15 = (short)-8929;
int zero = 0;
unsigned char var_17 = (unsigned char)177;
unsigned long long int var_18 = 2576764334076838955ULL;
long long int var_19 = 4968401078018617314LL;
long long int var_20 = 6546962409529090798LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-24955;
unsigned char var_23 = (unsigned char)67;
signed char var_24 = (signed char)83;
int var_25 = 552161629;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
short var_28 = (short)28690;
unsigned int var_29 = 3997363976U;
unsigned char var_30 = (unsigned char)175;
_Bool var_31 = (_Bool)0;
int var_32 = 994600637;
int var_33 = -518362290;
long long int var_34 = 866250734807655692LL;
short var_35 = (short)-9079;
unsigned int var_36 = 3709691867U;
unsigned long long int var_37 = 18181449865750597152ULL;
short var_38 = (short)17981;
int var_39 = -1973308333;
long long int var_40 = 6986664580644611402LL;
unsigned char arr_3 [18] ;
long long int arr_4 [18] ;
_Bool arr_8 [18] ;
long long int arr_11 [18] [18] [18] ;
unsigned long long int arr_13 [18] [18] [18] ;
long long int arr_15 [18] ;
unsigned char arr_24 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 8136593310374768236LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3342788995216229813LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 10647489022976223011ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 4225571535950814589LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)46;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
