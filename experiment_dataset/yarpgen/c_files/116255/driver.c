#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-79;
unsigned int var_13 = 1268355149U;
int zero = 0;
unsigned short var_15 = (unsigned short)14554;
int var_16 = 784544433;
unsigned char var_17 = (unsigned char)34;
unsigned char var_18 = (unsigned char)211;
short var_19 = (short)30989;
unsigned long long int var_20 = 16932292251183790221ULL;
unsigned long long int var_21 = 6018378830086238274ULL;
unsigned short var_22 = (unsigned short)34504;
unsigned long long int var_23 = 10084158241881643992ULL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)76;
short var_26 = (short)14782;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)11329;
unsigned long long int var_29 = 4228770025469419625ULL;
_Bool var_30 = (_Bool)1;
int var_31 = -1770137749;
long long int var_32 = 6481898734489016230LL;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-92;
int var_35 = 22880794;
unsigned short var_36 = (unsigned short)9668;
unsigned char var_37 = (unsigned char)15;
unsigned short arr_0 [22] ;
unsigned short arr_1 [22] ;
long long int arr_2 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_4 [22] [22] [22] ;
_Bool arr_5 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] ;
unsigned char arr_8 [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] ;
int arr_10 [22] ;
unsigned long long int arr_11 [22] [22] ;
int arr_12 [22] ;
unsigned long long int arr_13 [22] [22] [22] ;
unsigned short arr_14 [22] [22] [22] ;
unsigned int arr_15 [22] ;
long long int arr_22 [18] [18] ;
unsigned int arr_23 [18] [18] [18] ;
short arr_24 [18] [18] [18] [18] ;
unsigned long long int arr_30 [19] [19] ;
int arr_31 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)13724;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)53981;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2963551244991808547LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4406634621625451108ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3352368133768715939ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1469469607605545242ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -946014183;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 4983414290614170255ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -718326861;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 16876897157542156384ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)34004;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 2128357834U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = -5745727422103927484LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1039682893U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (short)-31773;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = 9945659048216023608ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -93058397;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
