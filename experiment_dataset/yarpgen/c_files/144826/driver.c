#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14031839520589682507ULL;
signed char var_4 = (signed char)54;
int var_5 = 1971551348;
unsigned char var_10 = (unsigned char)100;
unsigned int var_12 = 3309191663U;
unsigned short var_15 = (unsigned short)39279;
unsigned short var_16 = (unsigned short)9286;
unsigned int var_17 = 1394204350U;
int zero = 0;
unsigned long long int var_20 = 10175421474310071934ULL;
unsigned int var_21 = 3248429402U;
unsigned short var_22 = (unsigned short)46880;
int var_23 = -849493998;
short var_24 = (short)-7114;
unsigned short var_25 = (unsigned short)40137;
unsigned int var_26 = 1415296225U;
unsigned int var_27 = 1513853808U;
unsigned char arr_6 [21] [21] [21] ;
signed char arr_15 [21] ;
signed char arr_23 [21] [21] [21] [21] [21] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
long long int arr_12 [21] ;
short arr_13 [21] ;
short arr_14 [21] [21] ;
long long int arr_28 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7563193055532291223ULL : 13521937917347560109ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2772326071888926027ULL : 1617172659073045441ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 4883950477546946987LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-28622;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-29297;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 3130080780962187907LL : -4329385397467008213LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
