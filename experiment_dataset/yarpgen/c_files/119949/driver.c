#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60841;
long long int var_1 = -3132998367494915396LL;
int var_3 = 1474745909;
unsigned long long int var_5 = 17194600178278060707ULL;
short var_6 = (short)-27268;
unsigned char var_7 = (unsigned char)76;
short var_8 = (short)30498;
long long int var_9 = -6900142314097283900LL;
unsigned int var_11 = 2727627897U;
unsigned char var_12 = (unsigned char)170;
unsigned long long int var_13 = 8758451490061995355ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-29041;
long long int var_16 = 1341326884553137076LL;
unsigned short var_17 = (unsigned short)38023;
unsigned char var_18 = (unsigned char)120;
short var_19 = (short)25831;
int var_20 = 952078944;
short var_21 = (short)-11217;
unsigned int var_22 = 236864152U;
long long int var_23 = -1554783147878934231LL;
unsigned short var_24 = (unsigned short)38883;
int var_25 = -225739939;
signed char var_26 = (signed char)-75;
unsigned int var_27 = 1804135331U;
int var_28 = -553988712;
unsigned long long int var_29 = 1021261909532991054ULL;
long long int var_30 = -8365556358911280632LL;
short var_31 = (short)571;
signed char var_32 = (signed char)41;
unsigned char arr_0 [14] ;
unsigned long long int arr_3 [14] [14] ;
short arr_5 [14] [14] [14] ;
short arr_6 [14] ;
long long int arr_7 [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] ;
unsigned long long int arr_12 [14] [14] ;
int arr_15 [14] ;
long long int arr_20 [10] [10] ;
unsigned int arr_4 [14] ;
long long int arr_18 [14] [14] [14] [14] ;
int arr_21 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 8685611102195946818ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-31216;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-2186 : (short)23797;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 7880838121368110174LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2199222183523325893ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 1351815062975831550ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 2030465695;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = -8483224660837149381LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 4142529636U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 39705838314868240LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 756890836;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
