#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32724;
unsigned int var_2 = 1285532566U;
signed char var_3 = (signed char)-35;
signed char var_4 = (signed char)22;
short var_5 = (short)9617;
signed char var_7 = (signed char)108;
unsigned int var_8 = 4077092898U;
long long int var_9 = -7486961921016583066LL;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
signed char var_11 = (signed char)14;
signed char var_12 = (signed char)-29;
signed char var_13 = (signed char)-52;
signed char var_14 = (signed char)62;
long long int var_15 = -5688706628132211040LL;
int var_16 = 876658011;
unsigned long long int var_17 = 1943322026400626413ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)60;
unsigned short var_20 = (unsigned short)13877;
short var_21 = (short)1140;
signed char var_22 = (signed char)25;
unsigned long long int var_23 = 7685485984710056034ULL;
int var_24 = 619890585;
signed char var_25 = (signed char)-11;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 2999156703798450983ULL;
unsigned char var_28 = (unsigned char)9;
short var_29 = (short)-30580;
unsigned long long int var_30 = 3155485588327930284ULL;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 1619022584U;
unsigned short var_33 = (unsigned short)17324;
unsigned short var_34 = (unsigned short)39894;
unsigned char var_35 = (unsigned char)131;
unsigned int var_36 = 4136223482U;
long long int var_37 = 2471559291711088172LL;
_Bool var_38 = (_Bool)0;
short var_39 = (short)10118;
signed char arr_0 [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_3 [23] ;
int arr_5 [23] [23] ;
int arr_7 [23] [23] ;
short arr_9 [23] [23] [23] [23] [23] ;
signed char arr_14 [23] [23] [23] [23] [23] ;
short arr_15 [23] [23] [23] [23] ;
short arr_20 [23] [23] ;
int arr_23 [23] [23] [23] ;
short arr_28 [23] [23] [23] [23] [23] [23] [23] ;
short arr_30 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 15848976598724438660ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -1420024271;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -319306413;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)3439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)14193;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (short)31456;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1093991836;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)24798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)-29721 : (short)24053;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
