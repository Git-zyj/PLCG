#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13199293169571527612ULL;
long long int var_1 = -1633116983773121531LL;
unsigned long long int var_2 = 16926185272079082158ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -5210142072938838923LL;
unsigned long long int var_7 = 11496358667761733417ULL;
unsigned long long int var_9 = 8852211163355394749ULL;
long long int var_11 = 2873312617235379455LL;
long long int var_14 = -4022061090563545617LL;
int zero = 0;
unsigned long long int var_16 = 16407689409656297659ULL;
unsigned long long int var_17 = 580080952215133131ULL;
int var_18 = 796024046;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)76;
unsigned char var_21 = (unsigned char)131;
unsigned long long int var_22 = 17909731247901447262ULL;
_Bool arr_3 [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
long long int arr_8 [24] [24] [24] ;
long long int arr_13 [24] [24] [24] [24] [24] [24] ;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6809717931170131604ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -3006835491316157934LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2181876904299103151LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1325782621;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
