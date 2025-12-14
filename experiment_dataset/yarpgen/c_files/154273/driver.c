#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2058704305;
unsigned char var_1 = (unsigned char)246;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)33120;
unsigned long long int var_17 = 1774565666664471175ULL;
unsigned short var_18 = (unsigned short)4001;
unsigned long long int var_19 = 14496630092866767510ULL;
long long int var_20 = -5568571576287922645LL;
unsigned long long int arr_2 [14] ;
signed char arr_3 [14] [14] ;
signed char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 14390216947942370624ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-92 : (signed char)-43;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
