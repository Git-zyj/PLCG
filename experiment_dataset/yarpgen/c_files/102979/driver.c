#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
unsigned long long int var_2 = 1112360154094567718ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)116;
unsigned char var_6 = (unsigned char)119;
unsigned int var_7 = 885091626U;
short var_9 = (short)14108;
int zero = 0;
unsigned int var_10 = 1023281173U;
unsigned short var_11 = (unsigned short)11759;
unsigned char var_12 = (unsigned char)101;
unsigned short var_13 = (unsigned short)28665;
unsigned long long int var_14 = 5039315358742902989ULL;
unsigned int var_15 = 2524646848U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-59;
unsigned long long int var_18 = 2404267923461691394ULL;
unsigned long long int var_19 = 9074288293563866150ULL;
unsigned int var_20 = 579469990U;
unsigned long long int var_21 = 14125088796037013608ULL;
unsigned char var_22 = (unsigned char)232;
short var_23 = (short)20794;
unsigned char var_24 = (unsigned char)4;
unsigned char var_25 = (unsigned char)228;
_Bool var_26 = (_Bool)0;
unsigned char arr_1 [12] ;
unsigned short arr_3 [10] ;
short arr_4 [10] ;
_Bool arr_5 [10] [10] ;
unsigned long long int arr_8 [22] [22] ;
unsigned char arr_9 [22] ;
signed char arr_11 [22] ;
unsigned char arr_14 [22] ;
unsigned char arr_19 [22] ;
unsigned int arr_2 [12] ;
short arr_10 [22] ;
unsigned char arr_15 [22] [22] ;
unsigned char arr_20 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)29736;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-17217;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 2386801725069913700ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3774211278U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-9261 : (short)-3015;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)168 : (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
