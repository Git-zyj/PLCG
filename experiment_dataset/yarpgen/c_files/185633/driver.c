#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
signed char var_4 = (signed char)-110;
short var_8 = (short)18789;
unsigned short var_9 = (unsigned short)29337;
signed char var_10 = (signed char)-69;
int var_11 = -214819963;
unsigned short var_15 = (unsigned short)23826;
int zero = 0;
long long int var_16 = -3825961171262290580LL;
signed char var_17 = (signed char)11;
short var_18 = (short)17450;
unsigned long long int var_19 = 9149471768487292336ULL;
unsigned short var_20 = (unsigned short)23725;
unsigned char arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)129 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 576494659U : 849057304U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
