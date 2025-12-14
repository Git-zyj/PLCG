#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)58020;
unsigned int var_8 = 3489107393U;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)33404;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7180042577117245055ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)91;
unsigned int var_20 = 241464004U;
int var_21 = -1726636856;
unsigned char var_22 = (unsigned char)133;
unsigned int var_23 = 3548001786U;
long long int arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -679866384802616112LL : -1171443507943455540LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1043695720U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
