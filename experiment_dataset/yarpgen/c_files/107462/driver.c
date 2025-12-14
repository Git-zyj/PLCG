#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1005504522;
unsigned char var_2 = (unsigned char)91;
unsigned short var_3 = (unsigned short)7938;
unsigned long long int var_5 = 8555453055215028089ULL;
unsigned short var_7 = (unsigned short)44631;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)61512;
int var_12 = -830589157;
int zero = 0;
unsigned int var_13 = 2976920893U;
unsigned char var_14 = (unsigned char)241;
int var_15 = 1237526355;
long long int var_16 = 1125701921492626638LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)50081;
unsigned long long int var_19 = 18087356395131415839ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4220636392U;
short var_22 = (short)6146;
long long int var_23 = -407993009796094939LL;
unsigned short var_24 = (unsigned short)6305;
_Bool var_25 = (_Bool)1;
unsigned char arr_2 [17] [17] ;
signed char arr_3 [17] ;
unsigned short arr_6 [17] ;
unsigned int arr_9 [17] [17] [17] [17] ;
unsigned char arr_19 [20] ;
unsigned long long int arr_21 [13] [13] ;
long long int arr_25 [13] [13] [13] ;
int arr_28 [13] ;
unsigned short arr_30 [13] [13] [13] ;
long long int arr_16 [17] [17] [17] ;
short arr_17 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)52671;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3693449104U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = 12349243620459342728ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -2813582731532577801LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = -1462626063;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)24642;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8103737552795804574LL : 8563175584772174045LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-24673;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
