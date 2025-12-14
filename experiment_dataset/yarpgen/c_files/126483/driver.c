#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)215;
int var_9 = 1920026116;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2487065648U;
unsigned char var_16 = (unsigned char)53;
_Bool var_17 = (_Bool)1;
long long int var_18 = -272798917213176528LL;
unsigned int var_19 = 3325528335U;
signed char var_20 = (signed char)88;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13906535567191710510ULL;
unsigned long long int arr_6 [18] [18] [18] [18] ;
_Bool arr_8 [18] [18] ;
long long int arr_11 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 11261875926849704360ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = -2864205806343416381LL;
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
