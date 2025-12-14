#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9186936447132690278LL;
unsigned char var_3 = (unsigned char)39;
unsigned char var_5 = (unsigned char)26;
long long int var_6 = -2157584404278524176LL;
int var_8 = 405731867;
int var_11 = -2020217269;
long long int var_12 = 8931943430044253644LL;
int var_14 = -520631438;
unsigned char var_16 = (unsigned char)12;
int zero = 0;
long long int var_17 = -8250215620214241215LL;
unsigned char var_18 = (unsigned char)243;
unsigned char var_19 = (unsigned char)198;
int var_20 = 2143672697;
long long int var_21 = 3536547860513462927LL;
unsigned char var_22 = (unsigned char)102;
int var_23 = 1237109582;
long long int var_24 = -5575275243922601334LL;
unsigned char var_25 = (unsigned char)209;
unsigned char var_26 = (unsigned char)65;
int var_27 = 670662589;
long long int var_28 = 6812068548600808993LL;
long long int var_29 = 4697041272052619972LL;
int var_30 = 224737789;
long long int arr_0 [13] ;
int arr_1 [13] [13] ;
int arr_3 [13] ;
int arr_7 [12] ;
int arr_19 [12] [12] ;
int arr_4 [13] [13] ;
int arr_5 [13] [13] ;
long long int arr_27 [12] ;
int arr_38 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4269338889527914018LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1913246809;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 912299438;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -455462818;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 2090146383 : -289122238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1230657915;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -246163675;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = -5131056586099681081LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = -1726520657;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
