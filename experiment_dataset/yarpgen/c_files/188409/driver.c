#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 341371576047648550ULL;
signed char var_1 = (signed char)-69;
unsigned int var_2 = 2878800999U;
int var_3 = -736105203;
unsigned short var_4 = (unsigned short)18318;
unsigned long long int var_6 = 12215097979544830602ULL;
short var_7 = (short)-25346;
short var_9 = (short)-15951;
int zero = 0;
unsigned long long int var_10 = 17536291218092899342ULL;
unsigned short var_11 = (unsigned short)40437;
unsigned long long int var_12 = 14265662390471675390ULL;
int var_13 = -1443704981;
unsigned short arr_2 [23] [23] ;
_Bool arr_3 [23] [23] ;
signed char arr_4 [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9855;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 4912626999443513568LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
