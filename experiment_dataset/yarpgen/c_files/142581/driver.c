#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17997326275335471225ULL;
unsigned long long int var_3 = 13449205231636576027ULL;
unsigned long long int var_4 = 14310215375336431794ULL;
unsigned long long int var_5 = 13628216810126926439ULL;
unsigned long long int var_7 = 4062224579127554584ULL;
unsigned long long int var_9 = 13152823457931118737ULL;
unsigned long long int var_10 = 11408114746905186548ULL;
unsigned long long int var_13 = 5605100523008166254ULL;
unsigned long long int var_14 = 1729385211826559149ULL;
unsigned long long int var_15 = 8311013754090998148ULL;
unsigned long long int var_16 = 9917348243544285961ULL;
int zero = 0;
unsigned long long int var_17 = 15382742366932248023ULL;
unsigned long long int var_18 = 7389453879260247354ULL;
unsigned long long int var_19 = 6481318798095061290ULL;
unsigned long long int var_20 = 7763311532290421631ULL;
unsigned long long int var_21 = 16032908275156802893ULL;
unsigned long long int var_22 = 9468216571303486892ULL;
unsigned long long int var_23 = 15095806667639757754ULL;
unsigned long long int var_24 = 18033563643855592024ULL;
unsigned long long int var_25 = 17114498687243492114ULL;
unsigned long long int var_26 = 6831671167417166710ULL;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_4 [23] ;
unsigned long long int arr_5 [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 13963735723248004982ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4648534823119498881ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 11198686356909104981ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 2929378912962955829ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 15294790630124005051ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 8464355557827783223ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 9751794863780537629ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 17588121336781815248ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
