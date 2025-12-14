#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8835324973186900839LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1265015751U;
short var_5 = (short)-15242;
short var_6 = (short)27564;
long long int var_12 = -4703008523255817726LL;
signed char var_13 = (signed char)2;
int zero = 0;
unsigned short var_15 = (unsigned short)11565;
short var_16 = (short)-10547;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2941058389U;
long long int var_19 = 8617090737444245517LL;
long long int var_20 = -5007750727863575729LL;
unsigned int var_21 = 3330071576U;
unsigned long long int arr_1 [25] ;
unsigned int arr_3 [25] [25] [25] ;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4842781839888614714ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 797807685U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
