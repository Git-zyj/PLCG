#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17953428945512256236ULL;
int var_1 = 794097818;
long long int var_2 = -3229751224237538193LL;
unsigned long long int var_3 = 9523541446257978708ULL;
unsigned short var_4 = (unsigned short)36821;
unsigned short var_5 = (unsigned short)47679;
unsigned char var_6 = (unsigned char)103;
short var_9 = (short)6468;
signed char var_10 = (signed char)126;
int var_11 = -895620691;
int zero = 0;
unsigned short var_13 = (unsigned short)58575;
unsigned long long int var_14 = 1407970792511619954ULL;
unsigned long long int var_15 = 3865755417964148273ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8949955384845670040LL;
unsigned short var_18 = (unsigned short)47591;
unsigned char var_19 = (unsigned char)186;
short arr_0 [24] [24] ;
long long int arr_1 [24] [24] ;
int arr_2 [24] [24] ;
int arr_4 [24] [24] [24] ;
short arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 513496693830192075LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -530398661;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1360706207;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)21281;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4362700830622563013ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
