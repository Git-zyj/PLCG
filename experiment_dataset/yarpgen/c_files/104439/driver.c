#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17222761290063825293ULL;
unsigned long long int var_7 = 12063358522784331704ULL;
long long int var_9 = 3639667210984561502LL;
unsigned int var_10 = 4104361050U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2689945161U;
int var_18 = -563683750;
short var_19 = (short)2867;
unsigned long long int var_20 = 17596481236434371108ULL;
_Bool var_21 = (_Bool)1;
unsigned char arr_1 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3632436222U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
