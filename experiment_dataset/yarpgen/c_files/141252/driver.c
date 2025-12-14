#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151130489U;
int var_1 = -368989935;
long long int var_2 = -8281464272140282091LL;
long long int var_5 = -2599611996950172022LL;
unsigned long long int var_6 = 17097893025235681845ULL;
int var_8 = -1072224244;
unsigned short var_9 = (unsigned short)11475;
unsigned char var_11 = (unsigned char)3;
unsigned short var_12 = (unsigned short)23458;
unsigned int var_14 = 2628572074U;
signed char var_15 = (signed char)-49;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
unsigned int var_17 = 1781601248U;
int var_18 = 236492774;
long long int var_19 = 772313178111324032LL;
int var_20 = 2038470233;
signed char arr_0 [18] [18] ;
int arr_1 [18] ;
_Bool arr_2 [18] ;
long long int arr_3 [18] ;
long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1418507131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -5387805656596681534LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 6035226245835493750LL : 4931618096380349230LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
