#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4254864353507658302LL;
unsigned int var_1 = 387589233U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8528641964148743285LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)185;
unsigned short var_8 = (unsigned short)13862;
long long int var_9 = -1068462896647775887LL;
signed char var_10 = (signed char)47;
unsigned char var_11 = (unsigned char)121;
unsigned int var_12 = 4073206141U;
short var_14 = (short)25696;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3174636738639297605ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1633753328;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)7;
_Bool var_21 = (_Bool)0;
short arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_3 [24] [24] ;
int arr_4 [24] ;
unsigned char arr_5 [24] [24] [24] [24] ;
long long int arr_7 [24] [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)12890;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7388890962351671304ULL : 4584686641132071958ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 7812452534759500403LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 751996326 : -727768954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6468361366389681932LL : 6670507065583366845LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 12586349333514126657ULL : 17483609467900636602ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
