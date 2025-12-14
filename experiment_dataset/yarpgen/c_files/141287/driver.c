#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2043336297384308187LL;
signed char var_1 = (signed char)95;
long long int var_3 = -182641730477769661LL;
unsigned short var_5 = (unsigned short)44201;
unsigned int var_6 = 1791167054U;
short var_7 = (short)5276;
unsigned short var_8 = (unsigned short)37796;
long long int var_9 = 2859045591360060403LL;
unsigned short var_11 = (unsigned short)35421;
unsigned short var_12 = (unsigned short)14598;
int zero = 0;
long long int var_14 = -5265931849170666474LL;
unsigned long long int var_15 = 10489860601578233458ULL;
long long int var_16 = -1267076384753416082LL;
unsigned int var_17 = 2904215197U;
unsigned long long int var_18 = 13824013534842541201ULL;
long long int var_19 = -4767554442456366607LL;
long long int var_20 = 6570427108997156929LL;
int var_21 = -459201175;
long long int var_22 = -6544599113097052665LL;
unsigned short var_23 = (unsigned short)22823;
_Bool arr_0 [24] ;
long long int arr_1 [24] ;
unsigned char arr_5 [10] ;
long long int arr_10 [21] ;
unsigned long long int arr_12 [11] ;
long long int arr_3 [24] [24] ;
unsigned int arr_8 [10] ;
long long int arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -6139029479733239871LL : 3335960779855865884LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -1997856338289012405LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 14494004228891602386ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 4820121297960463131LL : 3477717317736619706LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 3924098181U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 1267056508089319114LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
