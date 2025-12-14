#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4108981971U;
signed char var_10 = (signed char)87;
short var_12 = (short)26436;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-80;
int zero = 0;
unsigned long long int var_16 = 11640946888692253409ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13762917672852115786ULL;
long long int var_19 = 3477873671303555656LL;
unsigned int var_20 = 1641676125U;
int var_21 = -2080013881;
unsigned int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4083113331U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3908969191309599390ULL : 4186127589383413994ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
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
