#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12773466994091935168ULL;
unsigned long long int var_3 = 16119278584836349903ULL;
unsigned long long int var_4 = 15589015010349999050ULL;
unsigned long long int var_7 = 2542403109678841474ULL;
unsigned long long int var_8 = 6522601821832239709ULL;
unsigned long long int var_10 = 2650938035648696441ULL;
unsigned long long int var_12 = 6138829446052921536ULL;
int zero = 0;
unsigned long long int var_13 = 11930943240347000612ULL;
unsigned long long int var_14 = 1096645418009660040ULL;
unsigned long long int var_15 = 12644058036670748189ULL;
unsigned long long int var_16 = 6831981116559497975ULL;
unsigned long long int var_17 = 11608044257386824462ULL;
unsigned long long int var_18 = 10921889035184559820ULL;
unsigned long long int var_19 = 12699625201577323908ULL;
unsigned long long int var_20 = 5247732143666458891ULL;
unsigned long long int var_21 = 38489997451028512ULL;
unsigned long long int var_22 = 7193385797297809163ULL;
unsigned long long int var_23 = 10447648526474859909ULL;
unsigned long long int var_24 = 12373236930775345378ULL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_3 [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] [20] ;
unsigned long long int arr_17 [20] [20] [20] [20] ;
unsigned long long int arr_11 [20] [20] ;
unsigned long long int arr_19 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 4113689542553159183ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2319758185612426331ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10096051136979702449ULL : 6758238461213261181ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 10440602251336703965ULL : 6504579643938996650ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 11406633888634980411ULL : 14097313529416793119ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 17265292465219237374ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 2870270483179948526ULL : 5518012462134126006ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7289483700635926027ULL : 17618928395501613446ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9022382513919921192ULL : 2688678730574105650ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 16590782766238869018ULL : 16868253436060701856ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 13899745917395878103ULL : 1056429529262375233ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
