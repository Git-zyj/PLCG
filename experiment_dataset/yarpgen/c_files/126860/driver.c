#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 352142601U;
unsigned short var_4 = (unsigned short)22391;
unsigned long long int var_12 = 15423218805612824315ULL;
int var_15 = -943414316;
unsigned short var_16 = (unsigned short)60887;
unsigned int var_17 = 2882771467U;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 7355571424286231252LL;
unsigned int var_21 = 2722263218U;
unsigned long long int var_22 = 7998230529283394887ULL;
_Bool var_23 = (_Bool)1;
unsigned int arr_0 [25] ;
long long int arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3469313474U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 6160633269999393079LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3232920374360902918LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
