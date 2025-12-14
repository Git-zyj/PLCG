#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned long long int var_1 = 4012344688295897556ULL;
signed char var_2 = (signed char)-93;
unsigned long long int var_3 = 11261199914901936427ULL;
unsigned char var_4 = (unsigned char)71;
unsigned char var_7 = (unsigned char)91;
unsigned long long int var_8 = 11559191566777843750ULL;
unsigned char var_9 = (unsigned char)89;
signed char var_11 = (signed char)114;
unsigned long long int var_12 = 5065958843559263162ULL;
unsigned int var_13 = 4198092355U;
signed char var_15 = (signed char)-48;
unsigned long long int var_16 = 11429396242050014180ULL;
unsigned char var_17 = (unsigned char)111;
long long int var_18 = -9221087976394499579LL;
signed char var_19 = (signed char)68;
int zero = 0;
int var_20 = -353251887;
unsigned int var_21 = 2937277236U;
signed char var_22 = (signed char)19;
unsigned long long int var_23 = 10836835172717854923ULL;
signed char var_24 = (signed char)73;
unsigned long long int var_25 = 1676373568589370042ULL;
unsigned char var_26 = (unsigned char)22;
unsigned int var_27 = 1340931455U;
unsigned int var_28 = 3075837140U;
unsigned char var_29 = (unsigned char)38;
short var_30 = (short)-8240;
unsigned long long int arr_1 [21] ;
int arr_2 [21] [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] [21] ;
_Bool arr_6 [21] [21] [21] ;
unsigned char arr_13 [21] ;
unsigned int arr_19 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6188240085981243315ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -1750832550;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2347842754280769023ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1416020862U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
