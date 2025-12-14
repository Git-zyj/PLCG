#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43813;
signed char var_1 = (signed char)7;
unsigned int var_2 = 114232070U;
unsigned char var_3 = (unsigned char)250;
long long int var_4 = -2419580652268688732LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2162585097268319498LL;
unsigned long long int var_8 = 7121238098025112134ULL;
unsigned long long int var_9 = 322767680901660773ULL;
unsigned long long int var_11 = 2673023564680760605ULL;
unsigned int var_12 = 3658878690U;
int zero = 0;
long long int var_13 = -7021321264190964205LL;
unsigned int var_14 = 2007451608U;
unsigned short var_15 = (unsigned short)46042;
unsigned short var_16 = (unsigned short)11253;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6390385214420510448LL;
unsigned char var_19 = (unsigned char)187;
unsigned int var_20 = 3624790683U;
short var_21 = (short)-9898;
signed char var_22 = (signed char)12;
unsigned short var_23 = (unsigned short)17304;
unsigned int var_24 = 3256715496U;
short var_25 = (short)-725;
signed char var_26 = (signed char)73;
signed char arr_15 [17] [17] [17] ;
unsigned short arr_16 [17] ;
long long int arr_19 [23] [23] ;
unsigned int arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)27202;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = 3782243216342539545LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = 2484935135U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
