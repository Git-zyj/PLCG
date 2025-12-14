#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 327303936;
signed char var_1 = (signed char)-23;
unsigned long long int var_2 = 12721949648094427848ULL;
unsigned short var_4 = (unsigned short)20327;
unsigned long long int var_5 = 11851770675563288844ULL;
signed char var_7 = (signed char)-36;
unsigned short var_9 = (unsigned short)1520;
int zero = 0;
long long int var_10 = 2726933686370007951LL;
unsigned int var_11 = 1475560372U;
unsigned int var_12 = 1197997961U;
unsigned long long int var_13 = 16209570540342938452ULL;
unsigned long long int var_14 = 14419937258342560495ULL;
unsigned long long int var_15 = 12543322530268682143ULL;
unsigned int var_16 = 4127166925U;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
signed char arr_5 [23] [23] [23] [23] ;
int arr_7 [23] [23] ;
unsigned char arr_10 [23] ;
signed char arr_19 [16] [16] [16] ;
unsigned long long int arr_17 [16] ;
signed char arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 14359243U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3680142501484051213ULL : 16468853226647541019ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1168529082 : -1256871287;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 2661141813079232287ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)15;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
