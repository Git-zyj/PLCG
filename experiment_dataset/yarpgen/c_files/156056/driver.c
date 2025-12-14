#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned short var_5 = (unsigned short)21969;
unsigned int var_7 = 960469917U;
unsigned long long int var_9 = 4215141437985362097ULL;
unsigned long long int var_11 = 604761970631442470ULL;
int zero = 0;
unsigned long long int var_15 = 1684992960673385119ULL;
unsigned int var_16 = 1063744981U;
unsigned long long int var_17 = 6461801128068919346ULL;
int var_18 = -790789353;
unsigned long long int var_19 = 3162935856473098549ULL;
unsigned long long int var_20 = 2111847297562273505ULL;
long long int arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -4749252514273703535LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 18075117579471791748ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3161851549U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
