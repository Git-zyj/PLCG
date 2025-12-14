#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49935;
unsigned long long int var_2 = 14518617580070671696ULL;
unsigned long long int var_3 = 2101597010365096106ULL;
unsigned long long int var_5 = 8651499663924754200ULL;
unsigned int var_6 = 3859705291U;
unsigned long long int var_8 = 10978710345681987504ULL;
unsigned long long int var_9 = 525222652549220015ULL;
unsigned long long int var_10 = 12191573495645860092ULL;
int zero = 0;
unsigned long long int var_11 = 14618344309220554487ULL;
unsigned long long int var_12 = 17281123715904269839ULL;
unsigned int var_13 = 3688955110U;
unsigned long long int var_14 = 9279486199976772513ULL;
unsigned short var_15 = (unsigned short)43746;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
unsigned int arr_4 [15] [15] [15] [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 867139789U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)13365;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9357104191207796391ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 974898638U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2481127061556306770ULL : 2525112412396005643ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
