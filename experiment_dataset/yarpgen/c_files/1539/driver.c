#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3578060661070583130LL;
unsigned char var_1 = (unsigned char)251;
unsigned short var_4 = (unsigned short)31080;
signed char var_5 = (signed char)-95;
int var_6 = 866324651;
long long int var_8 = -5935914445445321681LL;
unsigned short var_9 = (unsigned short)62387;
unsigned char var_10 = (unsigned char)5;
unsigned short var_11 = (unsigned short)12378;
int zero = 0;
signed char var_12 = (signed char)64;
unsigned char var_13 = (unsigned char)147;
unsigned short var_14 = (unsigned short)53401;
unsigned char var_15 = (unsigned char)104;
unsigned short var_16 = (unsigned short)9866;
long long int var_17 = 6583494244406335575LL;
int var_18 = -571237212;
signed char var_19 = (signed char)-21;
unsigned long long int var_20 = 2519958696586269199ULL;
long long int var_21 = 1461036690504991151LL;
long long int var_22 = 2728512207850711236LL;
signed char var_23 = (signed char)-64;
int var_24 = -1516961910;
unsigned char arr_0 [25] ;
unsigned char arr_1 [25] ;
signed char arr_2 [25] ;
long long int arr_3 [20] [20] ;
unsigned short arr_4 [20] [20] ;
signed char arr_5 [20] ;
unsigned short arr_9 [20] [20] ;
unsigned char arr_10 [20] ;
signed char arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 7615909413777042642LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1255;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)9498;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-12;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
