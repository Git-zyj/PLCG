#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2796642991U;
long long int var_2 = 3554283153111680037LL;
unsigned int var_3 = 2395369252U;
signed char var_5 = (signed char)-85;
signed char var_10 = (signed char)84;
short var_11 = (short)-9474;
long long int var_12 = 3871273935707712405LL;
unsigned char var_15 = (unsigned char)227;
long long int var_18 = -5555801443929613310LL;
int zero = 0;
int var_20 = -478725660;
signed char var_21 = (signed char)66;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-5377;
_Bool var_24 = (_Bool)0;
int var_25 = 100003399;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 1622925368U;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)44;
int var_31 = -977081514;
int var_32 = 1112426874;
signed char var_33 = (signed char)116;
unsigned int var_34 = 3607775079U;
long long int var_35 = 4892774835259327109LL;
short var_36 = (short)-4250;
unsigned long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
long long int arr_4 [11] ;
int arr_6 [11] ;
short arr_7 [11] ;
long long int arr_8 [11] [11] ;
unsigned long long int arr_12 [24] [24] ;
unsigned long long int arr_13 [24] ;
signed char arr_14 [21] ;
signed char arr_16 [21] [21] ;
short arr_2 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_9 [11] [11] ;
long long int arr_10 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 9486334268779843220ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5799373921815512957ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2299973691480756724LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -1566832833;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)27763;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -6295221804664024408LL : -6464719843709324091LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 6245114764897451136ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 9357666752488163070ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)3752;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 9161941143359246810LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 3366540143425043276ULL : 2266480501117961378ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2202215847147104777LL : 2372251319910437284LL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
