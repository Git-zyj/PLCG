#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1819664207;
int var_1 = -2040451280;
long long int var_2 = -3250740037213148895LL;
unsigned short var_3 = (unsigned short)33970;
unsigned short var_4 = (unsigned short)12154;
unsigned long long int var_5 = 15120683117240120286ULL;
int var_6 = 1307023922;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)32628;
unsigned short var_10 = (unsigned short)36225;
int zero = 0;
short var_11 = (short)6586;
unsigned long long int var_12 = 9556472317111104862ULL;
unsigned char var_13 = (unsigned char)108;
unsigned short var_14 = (unsigned short)40983;
short var_15 = (short)10190;
unsigned short var_16 = (unsigned short)18976;
short var_17 = (short)-4391;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15275481564079316550ULL;
int var_20 = 2023097598;
unsigned long long int var_21 = 2437435670427418691ULL;
unsigned short var_22 = (unsigned short)11304;
int var_23 = -949197275;
int var_24 = -979018299;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 1787254665506285095ULL;
_Bool var_27 = (_Bool)1;
int var_28 = -1252242837;
unsigned long long int var_29 = 104396344411113897ULL;
long long int var_30 = -8574909342449168013LL;
unsigned short arr_1 [24] [24] ;
unsigned short arr_3 [24] [24] ;
long long int arr_4 [24] ;
int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
signed char arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
long long int arr_16 [24] ;
int arr_22 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)40343;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)54773;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -9037667858743406068LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -1363304127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 7098389290973158109ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 9662498040962405077ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 4709962902622385761LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 428726264;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
