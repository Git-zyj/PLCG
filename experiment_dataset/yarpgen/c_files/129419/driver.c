#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6643853337375110361LL;
unsigned short var_1 = (unsigned short)55132;
unsigned char var_2 = (unsigned char)138;
unsigned long long int var_4 = 13263646690021729616ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -398892641;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)23;
int zero = 0;
unsigned char var_13 = (unsigned char)103;
int var_14 = 1334702322;
int var_15 = 1248810426;
unsigned short var_16 = (unsigned short)52237;
unsigned short var_17 = (unsigned short)10029;
signed char var_18 = (signed char)85;
int var_19 = 144942491;
unsigned short var_20 = (unsigned short)8785;
int var_21 = -235241712;
_Bool var_22 = (_Bool)1;
short var_23 = (short)5558;
short var_24 = (short)-26205;
unsigned short var_25 = (unsigned short)28039;
unsigned long long int var_26 = 7351190382721425140ULL;
signed char var_27 = (signed char)-74;
_Bool var_28 = (_Bool)1;
int var_29 = -1740653570;
short var_30 = (short)-23200;
unsigned long long int var_31 = 6568552447327782499ULL;
unsigned char var_32 = (unsigned char)161;
signed char var_33 = (signed char)6;
unsigned long long int arr_2 [11] ;
signed char arr_3 [11] [11] [11] ;
unsigned short arr_5 [11] [11] [11] [11] ;
long long int arr_7 [11] [11] [11] ;
unsigned short arr_8 [11] [11] [11] [11] [11] ;
signed char arr_9 [11] ;
unsigned int arr_13 [11] [11] [11] [11] [11] ;
signed char arr_14 [11] [11] [11] [11] [11] [11] ;
signed char arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 15388726838138522306ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)20910 : (unsigned short)20294;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2338044720524320325LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49052;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3512780414U : 2941136117U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)30;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
