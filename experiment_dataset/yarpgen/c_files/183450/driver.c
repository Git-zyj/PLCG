#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
short var_2 = (short)19429;
short var_3 = (short)1622;
unsigned long long int var_4 = 3540637801524787396ULL;
long long int var_5 = 5955068415746354187LL;
unsigned int var_6 = 2756205572U;
unsigned long long int var_7 = 8013153526182392946ULL;
unsigned int var_8 = 2475532030U;
long long int var_9 = -3438143447269094264LL;
int var_10 = 843099242;
signed char var_11 = (signed char)-77;
unsigned int var_12 = 3486370776U;
int zero = 0;
unsigned int var_13 = 2751438607U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4901454379606541688LL;
long long int var_16 = -476003161342125018LL;
unsigned int arr_4 [12] [12] ;
short arr_10 [12] ;
unsigned char arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 2641345566U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)31332;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
