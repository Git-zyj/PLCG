#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
long long int var_6 = -5670304548177706561LL;
unsigned long long int var_7 = 14927535052023476811ULL;
unsigned long long int var_8 = 8954752093508287301ULL;
long long int var_9 = -6914754477234780173LL;
int zero = 0;
long long int var_18 = 4793191395530458009LL;
unsigned short var_19 = (unsigned short)47956;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2092564781881446665LL;
signed char var_22 = (signed char)-126;
unsigned long long int arr_2 [15] ;
unsigned char arr_8 [22] ;
unsigned long long int arr_10 [22] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17245422961934686281ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 285552474760868861ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -1810928501891422073LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
