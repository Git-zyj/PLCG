#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_1 = (signed char)20;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)76;
unsigned short var_4 = (unsigned short)17220;
unsigned int var_5 = 1519077248U;
long long int var_6 = 5785190653694957434LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-2149;
long long int var_9 = -1903369237485573284LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1848267778;
unsigned long long int var_12 = 1823956048577554329ULL;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 3492384665U;
short var_15 = (short)-12927;
long long int var_16 = 5351522863819736644LL;
unsigned long long int var_17 = 11006257060900675811ULL;
unsigned short var_18 = (unsigned short)15319;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14995833990904064271ULL;
short var_21 = (short)-615;
unsigned short var_22 = (unsigned short)39625;
unsigned short var_23 = (unsigned short)53814;
unsigned char arr_0 [17] ;
unsigned char arr_1 [17] ;
_Bool arr_3 [17] ;
unsigned long long int arr_4 [17] ;
short arr_5 [17] [17] ;
unsigned char arr_7 [17] ;
unsigned short arr_10 [17] ;
_Bool arr_2 [17] ;
unsigned short arr_12 [17] ;
int arr_21 [17] ;
int arr_22 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 14639522081353180452ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)12250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)64776;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)10084;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1157149399 : 1632376909;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1745562447 : -1052245924;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
