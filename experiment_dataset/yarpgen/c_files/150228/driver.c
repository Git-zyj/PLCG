#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17071437373002932874ULL;
long long int var_2 = 1639217954716011201LL;
short var_3 = (short)3307;
short var_4 = (short)9929;
unsigned int var_6 = 3180368973U;
int var_7 = 1278904865;
short var_9 = (short)23224;
long long int var_10 = -2581294349274709614LL;
int var_12 = -1438480182;
short var_14 = (short)2803;
int var_16 = -524600210;
signed char var_17 = (signed char)-55;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)86;
long long int var_21 = -7873484381490930796LL;
long long int var_22 = -4895509069029661172LL;
unsigned int var_23 = 2799921724U;
unsigned int var_24 = 2352498627U;
_Bool var_25 = (_Bool)1;
long long int var_26 = -4721675305210735678LL;
_Bool var_27 = (_Bool)1;
long long int var_28 = -6017882026323959422LL;
long long int var_29 = 8679300549653471117LL;
signed char var_30 = (signed char)-31;
signed char arr_2 [10] ;
unsigned short arr_5 [15] ;
signed char arr_8 [15] [15] [15] ;
unsigned char arr_10 [15] ;
unsigned int arr_11 [15] ;
unsigned char arr_4 [10] ;
short arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)33483;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 1109649734U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-7560;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
