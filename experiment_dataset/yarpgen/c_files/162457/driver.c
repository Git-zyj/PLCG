#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3926575288U;
int var_1 = 1775003127;
int var_3 = 1647262891;
signed char var_4 = (signed char)-32;
long long int var_5 = 4797784506983971906LL;
signed char var_9 = (signed char)-93;
unsigned char var_11 = (unsigned char)215;
signed char var_12 = (signed char)100;
int var_15 = 1209400015;
int zero = 0;
unsigned long long int var_16 = 10101155586506220637ULL;
long long int var_17 = -944166210022368733LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-110;
short var_20 = (short)-4842;
long long int var_21 = -8374739734088593716LL;
int var_22 = 418057812;
short var_23 = (short)-295;
unsigned char var_24 = (unsigned char)12;
_Bool var_25 = (_Bool)0;
int var_26 = 1474173611;
long long int arr_3 [25] [25] ;
unsigned long long int arr_12 [25] ;
unsigned int arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2866856786404613229LL : -1805614383465646895LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 13221869561676466340ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 696152882U : 2113886402U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
