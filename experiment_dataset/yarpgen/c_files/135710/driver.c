#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 812448550U;
long long int var_4 = -5799874650407936535LL;
signed char var_8 = (signed char)47;
unsigned long long int var_12 = 15599939308879534464ULL;
short var_13 = (short)14828;
signed char var_14 = (signed char)-68;
long long int var_15 = 6081946817779804886LL;
signed char var_16 = (signed char)92;
unsigned int var_17 = 1449457708U;
short var_18 = (short)14389;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 73927593U;
unsigned int var_21 = 279282367U;
unsigned char var_22 = (unsigned char)212;
signed char var_23 = (signed char)92;
signed char var_24 = (signed char)99;
int var_25 = -769800133;
unsigned char var_26 = (unsigned char)182;
long long int var_27 = -129670807774215295LL;
int var_28 = -1262208972;
int var_29 = -1894891417;
signed char var_30 = (signed char)-36;
short var_31 = (short)24869;
unsigned short arr_0 [17] ;
long long int arr_1 [17] [17] ;
unsigned short arr_2 [17] [17] ;
unsigned int arr_3 [17] ;
long long int arr_6 [17] [17] [17] ;
unsigned int arr_12 [20] [20] ;
long long int arr_13 [20] ;
unsigned short arr_4 [17] [17] ;
int arr_11 [17] [17] ;
unsigned int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)57040;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -5979527623180157919LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37523;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1663628715U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3098647604791330074LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 1547810218U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -7421063678735640541LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)39530;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -961549376 : 795043415;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 1469996218U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
