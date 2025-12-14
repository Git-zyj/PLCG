#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2817851044270166590ULL;
unsigned char var_2 = (unsigned char)207;
long long int var_3 = 6690802965016103564LL;
long long int var_4 = -6367064770441027816LL;
_Bool var_5 = (_Bool)0;
int var_6 = 103785752;
short var_7 = (short)29392;
unsigned int var_8 = 3821137038U;
unsigned long long int var_9 = 8319529397687379197ULL;
short var_10 = (short)-18251;
signed char var_11 = (signed char)-36;
int var_12 = 51820476;
long long int var_13 = 1928270698398636819LL;
int var_14 = -1107119199;
int zero = 0;
signed char var_16 = (signed char)119;
unsigned short var_17 = (unsigned short)31021;
signed char var_18 = (signed char)102;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 3314218660035992692ULL;
int var_21 = 1956082164;
signed char var_22 = (signed char)45;
long long int var_23 = 7242178567188168711LL;
long long int var_24 = -4794048177333179716LL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 43425342U;
long long int var_27 = -5357985040548416411LL;
signed char var_28 = (signed char)63;
int var_29 = 1446879687;
signed char arr_0 [20] ;
int arr_1 [20] ;
unsigned int arr_2 [14] ;
signed char arr_3 [14] ;
int arr_4 [14] ;
long long int arr_5 [14] [14] ;
unsigned char arr_6 [14] [14] [14] ;
_Bool arr_10 [14] ;
signed char arr_11 [14] ;
short arr_12 [14] ;
unsigned int arr_7 [14] ;
int arr_8 [14] ;
long long int arr_9 [14] ;
long long int arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1246879343;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1843148040U : 1348945582U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1162661315 : 1802384731;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 7989280456308984604LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-10222 : (short)-32144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 698725167U : 1750270924U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1303537619 : -1767560113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3070444484331730110LL : 6692151142911760621LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 5499107088416926165LL : 7561886859298719997LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
