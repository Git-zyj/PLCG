#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15346770194190533697ULL;
unsigned short var_1 = (unsigned short)64299;
long long int var_2 = 8309080679818848761LL;
unsigned long long int var_3 = 11764124151010490555ULL;
signed char var_5 = (signed char)-104;
signed char var_6 = (signed char)-55;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_13 = -1050434683509737359LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-99;
unsigned int var_16 = 39320476U;
signed char var_17 = (signed char)9;
_Bool var_18 = (_Bool)0;
unsigned char arr_3 [24] [24] ;
long long int arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -749066775506938866LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)18186;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
