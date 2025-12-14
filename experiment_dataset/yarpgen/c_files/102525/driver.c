#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
unsigned short var_3 = (unsigned short)43505;
unsigned char var_4 = (unsigned char)98;
unsigned long long int var_5 = 9767162494054943465ULL;
_Bool var_7 = (_Bool)0;
int var_9 = -796390723;
signed char var_10 = (signed char)125;
long long int var_12 = 1446224635782434604LL;
unsigned long long int var_15 = 4950467491528074694ULL;
unsigned char var_17 = (unsigned char)182;
int zero = 0;
unsigned char var_20 = (unsigned char)95;
unsigned short var_21 = (unsigned short)22823;
long long int var_22 = 6477765672686389820LL;
short var_23 = (short)30280;
long long int var_24 = -4161390858772036850LL;
long long int var_25 = -6245230134010421848LL;
unsigned long long int var_26 = 4132611860067204654ULL;
long long int var_27 = 5721237868043401823LL;
int var_28 = -1299541610;
unsigned char var_29 = (unsigned char)203;
long long int var_30 = -4870946690706722356LL;
unsigned long long int var_31 = 14652180861124104371ULL;
short var_32 = (short)-9431;
unsigned char var_33 = (unsigned char)234;
unsigned short var_34 = (unsigned short)37666;
unsigned long long int var_35 = 1753868032126353018ULL;
unsigned char var_36 = (unsigned char)35;
signed char var_37 = (signed char)-98;
unsigned int var_38 = 2125903323U;
unsigned long long int var_39 = 3476108488626649666ULL;
long long int var_40 = 4503144840240960787LL;
short var_41 = (short)6881;
unsigned long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] [17] ;
short arr_4 [17] [17] [17] ;
_Bool arr_8 [17] ;
short arr_11 [24] [24] ;
unsigned long long int arr_12 [24] ;
long long int arr_17 [24] ;
unsigned long long int arr_18 [24] [24] ;
_Bool arr_19 [24] [24] [24] [24] ;
unsigned int arr_21 [24] [24] ;
short arr_24 [24] ;
long long int arr_27 [24] [24] [24] ;
unsigned char arr_10 [17] ;
int arr_25 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2361014381646473010ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 6804935577250948654ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-30921;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (short)9356;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 3383055225934543108ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 7847930071212800600LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 9595376688049916997ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = 2061611255U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (short)12540;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2735026148284247347LL : -1400972037095334827LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = -558387151;
}

void checksum() {
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
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
