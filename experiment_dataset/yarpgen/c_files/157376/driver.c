#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7042216160495386288ULL;
unsigned long long int var_1 = 16689265259282059412ULL;
unsigned long long int var_3 = 14351892514624494190ULL;
unsigned long long int var_4 = 2911311643728480172ULL;
unsigned long long int var_5 = 15812895845946198565ULL;
unsigned long long int var_7 = 1889344719856691235ULL;
unsigned long long int var_8 = 364043735641294853ULL;
unsigned long long int var_11 = 4157185486431963473ULL;
int zero = 0;
unsigned long long int var_15 = 13578106828921140427ULL;
unsigned long long int var_16 = 10809673029088865593ULL;
unsigned long long int var_17 = 13661597906052849197ULL;
unsigned long long int var_18 = 11341553036487816310ULL;
unsigned long long int var_19 = 2634045423194579210ULL;
unsigned long long int var_20 = 10388926334023699170ULL;
unsigned long long int var_21 = 4311875394221033001ULL;
unsigned long long int var_22 = 11479634530852420090ULL;
unsigned long long int var_23 = 4988964875700529129ULL;
unsigned long long int var_24 = 10084239075036767546ULL;
unsigned long long int var_25 = 17215470065954496040ULL;
unsigned long long int var_26 = 7064042257613883217ULL;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_2 [18] [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
unsigned long long int arr_12 [20] ;
unsigned long long int arr_14 [14] ;
unsigned long long int arr_6 [18] [18] [18] [18] ;
unsigned long long int arr_9 [18] ;
unsigned long long int arr_10 [18] [18] ;
unsigned long long int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 9457367002751413549ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4938653325519279223ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 14792499273338406191ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6118492633217034418ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6456815296653866714ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4101924676858082988ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 3135640624847688503ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 16532850919528799280ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 11125595779801476887ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 4345428016544296244ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 2641031672730458580ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 12647961005658768227ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
