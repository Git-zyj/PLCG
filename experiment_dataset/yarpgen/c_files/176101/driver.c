#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3364;
long long int var_4 = -8916144349177192586LL;
signed char var_8 = (signed char)45;
signed char var_12 = (signed char)6;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 10909037897953927946ULL;
unsigned int var_16 = 1861796455U;
unsigned int var_17 = 4094270647U;
long long int var_18 = 7634267775693356802LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-27;
long long int var_21 = 1953346126406719208LL;
int var_22 = -2089979456;
int arr_0 [19] ;
long long int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -693740244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 8100536201159547347LL : -3244641526551136433LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 850396701476275285ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2118807084881867204ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
