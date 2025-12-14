#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24156;
signed char var_1 = (signed char)99;
int var_2 = 2017313365;
int var_3 = -2010883998;
unsigned long long int var_5 = 3571927615338469744ULL;
unsigned long long int var_6 = 8408650842659185570ULL;
unsigned int var_7 = 72474728U;
unsigned long long int var_8 = 2723357316514884698ULL;
int var_9 = 1347576196;
unsigned long long int var_10 = 8209796465190670900ULL;
unsigned long long int var_11 = 13207645835710103099ULL;
short var_12 = (short)20826;
unsigned long long int var_13 = 6178420873093785747ULL;
short var_14 = (short)-25164;
int var_15 = 650531511;
unsigned short var_16 = (unsigned short)33160;
int zero = 0;
short var_18 = (short)4794;
unsigned long long int var_19 = 1285593129446874346ULL;
long long int var_20 = 6242415859363541240LL;
unsigned short var_21 = (unsigned short)61135;
unsigned short var_22 = (unsigned short)50728;
long long int var_23 = 1630782599377170645LL;
int var_24 = -269835466;
long long int arr_6 [21] ;
int arr_7 [21] [21] [21] ;
unsigned long long int arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -8111587156393282808LL : 6033257209309291738LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1161555828 : -652460444;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 6098845683949775325ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
