#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3844259825873054413ULL;
unsigned long long int var_3 = 6208651977225649773ULL;
unsigned long long int var_4 = 11816687677072675070ULL;
unsigned long long int var_6 = 2343158425438686791ULL;
unsigned long long int var_8 = 11474708116022801691ULL;
unsigned long long int var_10 = 4945221407500712071ULL;
int zero = 0;
unsigned long long int var_11 = 2010592546781786919ULL;
unsigned long long int var_12 = 4415551222378039414ULL;
unsigned long long int var_13 = 15404985197708663357ULL;
unsigned long long int var_14 = 12435616670421891031ULL;
unsigned long long int var_15 = 17893220890112596195ULL;
unsigned long long int var_16 = 1227760528131185843ULL;
unsigned long long int var_17 = 14537847721465850845ULL;
unsigned long long int var_18 = 2736389168247474302ULL;
unsigned long long int var_19 = 91272163539970812ULL;
unsigned long long int var_20 = 8613752606367400721ULL;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned long long int arr_8 [11] ;
unsigned long long int arr_19 [16] [16] [16] [16] ;
unsigned long long int arr_20 [16] ;
unsigned long long int arr_27 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 16078287535019081348ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 7257302208457163494ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 17687899920696513303ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 4259402692658945368ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 5423785504828593486ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 9385510403791435726ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 18407712127431807980ULL : 12977730591267023699ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 703974654115920812ULL : 8734338709844175594ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 14916874460147219564ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
