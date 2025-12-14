#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -417956589;
short var_1 = (short)7832;
unsigned long long int var_2 = 3806143269948337603ULL;
int var_3 = 1403317957;
signed char var_5 = (signed char)5;
signed char var_6 = (signed char)56;
unsigned long long int var_7 = 6442338943471347261ULL;
signed char var_8 = (signed char)4;
signed char var_9 = (signed char)72;
unsigned int var_10 = 3510561747U;
unsigned long long int var_11 = 14118278959871018295ULL;
unsigned int var_12 = 3926155386U;
int zero = 0;
unsigned long long int var_13 = 9057830716333742460ULL;
long long int var_14 = -6789827327420287459LL;
signed char var_15 = (signed char)56;
unsigned short var_16 = (unsigned short)35935;
int var_17 = -1761768276;
short var_18 = (short)-30739;
unsigned short var_19 = (unsigned short)980;
short var_20 = (short)6213;
signed char var_21 = (signed char)(-127 - 1);
_Bool var_22 = (_Bool)0;
int var_23 = 1056015837;
int var_24 = 1285912967;
unsigned char var_25 = (unsigned char)162;
int var_26 = 1427343179;
unsigned int var_27 = 2182929979U;
int arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
unsigned long long int arr_5 [25] [25] [25] [25] ;
signed char arr_6 [25] ;
unsigned int arr_7 [25] [25] [25] [25] ;
long long int arr_15 [15] ;
signed char arr_20 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1425996065;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -9036346201632804729LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11795698279687678565ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7612049510321954391ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 15626061237731754833ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1992214567U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 2054944192574983791LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-101;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
