#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1128580664;
int var_2 = 1801357806;
int var_3 = 1199208755;
int var_5 = -757568504;
int var_6 = 1702454677;
int var_7 = 913298605;
int var_8 = -599273202;
int var_9 = -104146139;
int var_10 = 1432265962;
int var_11 = -812153808;
int var_15 = -287036552;
int var_16 = -427981265;
int var_17 = -45268172;
int var_18 = -225064151;
int zero = 0;
int var_19 = 1025382411;
int var_20 = 1866064159;
int var_21 = 916771592;
int var_22 = -153416844;
int var_23 = 618056675;
int var_24 = -395652900;
int var_25 = -641293415;
int var_26 = -947946931;
int var_27 = 1901092865;
int var_28 = -1886960375;
int var_29 = -921748753;
int var_30 = -580069331;
int var_31 = 1044434032;
int var_32 = -236617151;
int var_33 = 1593643873;
int arr_0 [20] [20] ;
int arr_1 [20] ;
int arr_2 [20] ;
int arr_3 [20] ;
int arr_4 [20] [20] ;
int arr_5 [20] [20] [20] ;
int arr_9 [20] ;
int arr_11 [20] ;
int arr_12 [20] [20] [20] ;
int arr_18 [11] ;
int arr_25 [11] [11] [11] ;
int arr_7 [20] [20] ;
int arr_13 [20] ;
int arr_14 [20] ;
int arr_21 [11] [11] [11] ;
int arr_22 [11] [11] ;
int arr_26 [11] [11] ;
int arr_27 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2036523999;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1269548000;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -249690090;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1361145480;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1216296640;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 151512599;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = -1746874452;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1588305162;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1747768433;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -2051425139 : 1237386893;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 841446128 : -1625478204;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 1639989571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -9249571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 2073640563;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1948297378 : 412008008;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -940094804 : -23575263;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 1639875418 : 1457713523;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 2011987862 : 366066157;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
