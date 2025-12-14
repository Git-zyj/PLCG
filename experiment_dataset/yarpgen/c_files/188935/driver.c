#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2772730832736353156LL;
long long int var_2 = -7735025841618538971LL;
unsigned short var_3 = (unsigned short)56920;
signed char var_4 = (signed char)108;
signed char var_6 = (signed char)33;
long long int var_9 = 6425535152976123618LL;
unsigned long long int var_10 = 10221120483171771540ULL;
unsigned long long int var_11 = 6862467986557125002ULL;
signed char var_13 = (signed char)-13;
unsigned int var_14 = 1485964936U;
unsigned int var_15 = 3256383425U;
signed char var_16 = (signed char)-123;
unsigned int var_18 = 1523446084U;
int zero = 0;
unsigned long long int var_19 = 12646894628370845887ULL;
long long int var_20 = 3611299440518838352LL;
long long int var_21 = 6293486530934981386LL;
long long int var_22 = -9018849634942444953LL;
unsigned int var_23 = 1139905022U;
unsigned int var_24 = 762927U;
unsigned int var_25 = 3693545991U;
unsigned int var_26 = 3125370008U;
unsigned short var_27 = (unsigned short)29379;
unsigned long long int var_28 = 543508307666008744ULL;
long long int var_29 = 3704161283194521824LL;
unsigned int var_30 = 3332160831U;
signed char arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
long long int arr_4 [19] ;
long long int arr_6 [19] [19] [19] [19] ;
long long int arr_16 [10] [10] ;
long long int arr_30 [10] [10] [10] ;
unsigned int arr_36 [11] ;
unsigned short arr_37 [11] ;
unsigned int arr_14 [19] [19] ;
unsigned short arr_25 [10] [10] [10] ;
signed char arr_26 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)22955;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)15145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 490081921295475739LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1083576707225544797LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = -6395035984459269522LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = -1290921496737704373LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = 2976697068U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = (unsigned short)10483;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 3161790723U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)3457;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (signed char)98;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
