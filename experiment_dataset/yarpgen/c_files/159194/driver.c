#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8870217901571988220LL;
long long int var_4 = -3220777519060719201LL;
long long int var_6 = -5481537899541693596LL;
long long int var_7 = -3752251370588428060LL;
long long int var_9 = 9190164418458710290LL;
long long int var_11 = -2409037699144260781LL;
long long int var_13 = -8069843282664236855LL;
long long int var_14 = -90343965911440148LL;
long long int var_17 = -4974872714018518447LL;
long long int var_18 = -8155552464436012321LL;
int zero = 0;
long long int var_19 = 936015163456307195LL;
long long int var_20 = 6865604465501723386LL;
long long int var_21 = 1006434386662116544LL;
long long int var_22 = 1202343997690243041LL;
long long int var_23 = -7472336745141900696LL;
long long int var_24 = -8399339038182667052LL;
long long int var_25 = -8272480040703803828LL;
long long int var_26 = -8529531840442238391LL;
long long int var_27 = -5934843101796999539LL;
long long int var_28 = -758111875492923542LL;
long long int var_29 = 4087956311567577795LL;
long long int var_30 = 2884912327910218929LL;
long long int arr_0 [23] ;
long long int arr_1 [23] ;
long long int arr_2 [23] ;
long long int arr_3 [23] [23] [23] ;
long long int arr_6 [23] [23] [23] ;
long long int arr_7 [23] [23] ;
long long int arr_8 [23] [23] [23] [23] ;
long long int arr_10 [23] [23] [23] [23] [23] ;
long long int arr_11 [23] ;
long long int arr_12 [23] ;
long long int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 594796667601376842LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6537084144538981115LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7236451492382197828LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6739374382574911013LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -7079461749374765593LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3207756376253005005LL : -7791315249080454103LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6251953130948568753LL : 7217746839897299786LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -2137005736347954165LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1131246477592473899LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 4454054065041174159LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 2371818818132398158LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
