#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40766;
long long int var_3 = -4387902626045296926LL;
unsigned int var_5 = 1636650462U;
unsigned long long int var_6 = 17963027391931874870ULL;
unsigned short var_7 = (unsigned short)65168;
unsigned short var_8 = (unsigned short)58548;
signed char var_11 = (signed char)21;
unsigned short var_12 = (unsigned short)18155;
int zero = 0;
short var_14 = (short)188;
short var_15 = (short)15020;
long long int var_16 = -5891875005720513074LL;
short var_17 = (short)30233;
unsigned short var_18 = (unsigned short)42029;
unsigned int var_19 = 283751837U;
short var_20 = (short)20140;
short var_21 = (short)30168;
unsigned short var_22 = (unsigned short)61773;
unsigned short var_23 = (unsigned short)53969;
long long int var_24 = -3011909357645752969LL;
unsigned int var_25 = 2047169163U;
unsigned long long int var_26 = 9262583649579460346ULL;
short var_27 = (short)18283;
unsigned int var_28 = 3404229858U;
signed char var_29 = (signed char)-22;
short var_30 = (short)10447;
unsigned short var_31 = (unsigned short)58599;
unsigned int var_32 = 3829261672U;
short var_33 = (short)8729;
long long int var_34 = 7763830629028048773LL;
long long int var_35 = -7757467174102432583LL;
unsigned short arr_0 [21] [21] ;
long long int arr_1 [21] ;
unsigned short arr_2 [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_4 [15] ;
unsigned short arr_5 [15] ;
short arr_6 [15] ;
unsigned short arr_8 [10] ;
short arr_9 [10] [10] ;
unsigned short arr_10 [10] [10] ;
long long int arr_12 [10] ;
short arr_14 [10] ;
unsigned long long int arr_16 [10] [10] ;
long long int arr_17 [10] [10] [10] ;
short arr_20 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7185;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8759619216136636097LL : -2392151234851061138LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)28664;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)49345;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3525113836U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)42952;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-563;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)28693;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)57692;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = -5124378971498482403LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)23279 : (short)20922;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 1679664649558200343ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -2534854762096248806LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)24043 : (short)28035;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
