#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5291361824618334261LL;
long long int var_1 = -7592517828916443785LL;
short var_3 = (short)-12591;
short var_4 = (short)-16991;
unsigned long long int var_5 = 256543731035268825ULL;
short var_6 = (short)4184;
long long int var_8 = 8462368529780630209LL;
signed char var_9 = (signed char)-22;
int zero = 0;
long long int var_10 = -5812323308455836208LL;
signed char var_11 = (signed char)-37;
signed char var_12 = (signed char)28;
signed char var_13 = (signed char)-104;
short var_14 = (short)-3447;
int var_15 = -669073548;
unsigned long long int var_16 = 10233158488884745507ULL;
long long int var_17 = 5652542129872846550LL;
signed char arr_3 [19] ;
signed char arr_4 [19] ;
short arr_5 [19] [19] ;
signed char arr_6 [19] ;
long long int arr_2 [15] ;
_Bool arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-24325;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -7100802328793490218LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
