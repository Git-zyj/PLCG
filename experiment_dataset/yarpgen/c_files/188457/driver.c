#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58128;
int var_4 = 1213943935;
unsigned long long int var_5 = 1717623890121845188ULL;
short var_7 = (short)13490;
unsigned short var_8 = (unsigned short)37573;
unsigned int var_9 = 4185474909U;
long long int var_10 = 980688270911479935LL;
int zero = 0;
unsigned short var_11 = (unsigned short)51094;
int var_12 = 1057663144;
signed char var_13 = (signed char)100;
unsigned short var_14 = (unsigned short)18338;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3026756689714223047LL;
long long int var_17 = -4617036890374140898LL;
unsigned long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3483637119062619535ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-39 : (signed char)61;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
