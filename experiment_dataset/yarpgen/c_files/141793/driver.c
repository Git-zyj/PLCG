#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-81;
unsigned char var_3 = (unsigned char)162;
unsigned short var_4 = (unsigned short)58620;
unsigned long long int var_5 = 11580136133231677358ULL;
unsigned int var_6 = 378815831U;
short var_7 = (short)30286;
short var_9 = (short)9108;
unsigned char var_11 = (unsigned char)38;
unsigned long long int var_12 = 5908151736649137591ULL;
int var_14 = -1871326944;
short var_15 = (short)26729;
signed char var_16 = (signed char)-124;
long long int var_17 = -3069953826430221968LL;
unsigned short var_18 = (unsigned short)26208;
int zero = 0;
unsigned long long int var_19 = 14688666668974262052ULL;
unsigned long long int var_20 = 11107570558575499714ULL;
unsigned short var_21 = (unsigned short)45897;
unsigned long long int var_22 = 5525800770394375990ULL;
unsigned int var_23 = 1419900111U;
unsigned long long int var_24 = 7047492318738953894ULL;
unsigned short var_25 = (unsigned short)40273;
int var_26 = 1068681670;
int var_27 = -1722309729;
unsigned int var_28 = 3972233148U;
unsigned long long int var_29 = 908508182203374119ULL;
unsigned short var_30 = (unsigned short)41802;
unsigned char var_31 = (unsigned char)209;
unsigned char var_32 = (unsigned char)40;
unsigned long long int var_33 = 16772692117133469385ULL;
unsigned long long int arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
int arr_2 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] [17] [17] ;
unsigned int arr_11 [17] ;
unsigned long long int arr_16 [17] [17] [17] [17] ;
short arr_6 [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 7211963162061119348ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 648772637;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 5373543455219965102ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3721298219U : 2382551117U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 14435609044895926746ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-6262;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8192680257301032928ULL : 43364686332430979ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 11211399502270760244ULL : 11288118055573923790ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
