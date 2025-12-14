#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16019833139946952672ULL;
unsigned int var_9 = 1906392269U;
signed char var_10 = (signed char)37;
unsigned short var_11 = (unsigned short)44480;
long long int var_14 = -2728841524331824491LL;
unsigned int var_18 = 2773003781U;
int zero = 0;
unsigned int var_19 = 3135865944U;
unsigned long long int var_20 = 6584772985936520669ULL;
unsigned short var_21 = (unsigned short)43550;
unsigned int var_22 = 415999860U;
unsigned long long int var_23 = 1721736645949287400ULL;
unsigned int var_24 = 2454884982U;
long long int var_25 = 5042214354235348791LL;
unsigned int var_26 = 1982805294U;
_Bool var_27 = (_Bool)1;
long long int var_28 = 2716974728721917810LL;
unsigned int var_29 = 1279900103U;
unsigned int var_30 = 2016440481U;
long long int var_31 = 3044818510025705857LL;
long long int arr_1 [11] [11] ;
signed char arr_9 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_10 [11] [11] [11] [11] ;
unsigned int arr_11 [11] [11] ;
signed char arr_13 [14] [14] ;
signed char arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 9130324479839290529LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 513481448U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)34;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
