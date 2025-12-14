#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11731246283380846141ULL;
unsigned long long int var_5 = 12240392383102849530ULL;
int var_6 = 1073696078;
unsigned long long int var_7 = 182140302895658963ULL;
short var_8 = (short)-6859;
short var_11 = (short)25243;
unsigned long long int var_12 = 13470772603140991849ULL;
int var_13 = 1266434392;
unsigned long long int var_14 = 7092296392507189523ULL;
int zero = 0;
unsigned long long int var_17 = 7565653343978177484ULL;
unsigned long long int var_18 = 1536771954282971516ULL;
unsigned long long int var_19 = 6903696787027767531ULL;
unsigned long long int var_20 = 15926150238049562159ULL;
unsigned long long int var_21 = 6568472512551285719ULL;
int var_22 = 963693529;
unsigned long long int var_23 = 9003481819331580145ULL;
unsigned long long int var_24 = 13907038799599275365ULL;
unsigned long long int var_25 = 412797693531141555ULL;
unsigned long long int var_26 = 16619428156598779955ULL;
unsigned long long int var_27 = 9956721913984315268ULL;
unsigned long long int var_28 = 17630172534142874305ULL;
unsigned long long int arr_0 [19] ;
int arr_2 [19] ;
unsigned long long int arr_3 [19] [19] [19] ;
short arr_4 [19] [19] [19] ;
unsigned long long int arr_5 [19] ;
short arr_6 [19] [19] [19] ;
int arr_7 [11] ;
short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 13149640472216445603ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1831440294;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2115919270839498563ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)31822;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 16637809266942681659ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)15008;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 2032830907;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-28750 : (short)-32390;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
