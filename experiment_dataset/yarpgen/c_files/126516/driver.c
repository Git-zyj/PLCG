#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
short var_1 = (short)22690;
long long int var_3 = -424021562666341493LL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8848764309573589532LL;
int var_12 = -1539720069;
unsigned int var_13 = 3586238219U;
unsigned long long int var_15 = 6404995893674793003ULL;
unsigned short var_18 = (unsigned short)45247;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 11405155130754375187ULL;
long long int var_21 = -9157061257044338751LL;
unsigned short var_22 = (unsigned short)22864;
unsigned long long int var_23 = 15192276108914473622ULL;
unsigned short var_24 = (unsigned short)28814;
unsigned char var_25 = (unsigned char)14;
short var_26 = (short)-6251;
unsigned short var_27 = (unsigned short)27249;
_Bool arr_0 [20] ;
short arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned int arr_3 [20] [20] ;
unsigned char arr_8 [20] [20] [20] [20] ;
unsigned short arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-2895;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1708122678U : 3961072469U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2859415807U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)52 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6543 : (unsigned short)42128;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
