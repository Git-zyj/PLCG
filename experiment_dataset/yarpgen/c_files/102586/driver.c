#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1067566226164332697LL;
long long int var_2 = -7551778722266015301LL;
long long int var_4 = 3905705909123121164LL;
long long int var_6 = 5236422529018084332LL;
long long int var_9 = -5476105357096180663LL;
long long int var_12 = -5904752005731412614LL;
long long int var_14 = -5375966476307256986LL;
int zero = 0;
long long int var_18 = -2519393605600702715LL;
long long int var_19 = -905212128023882042LL;
long long int var_20 = 4242628641983644678LL;
long long int var_21 = 9079533503899990899LL;
long long int var_22 = -1787950651622665077LL;
long long int var_23 = -4496389640902694708LL;
long long int var_24 = 5095369411679966042LL;
long long int var_25 = 1831084871037392947LL;
long long int var_26 = 6633375870683138967LL;
long long int var_27 = -4251152151511407101LL;
long long int var_28 = -884379746928359237LL;
long long int var_29 = -8963126608949290065LL;
long long int var_30 = -3565350384460990911LL;
long long int var_31 = 8041708554222771776LL;
long long int var_32 = 6590973401083495505LL;
long long int var_33 = 226485906897159231LL;
long long int var_34 = 8485185628765835475LL;
long long int var_35 = 3475792881089528152LL;
long long int arr_1 [24] ;
long long int arr_4 [24] [24] [24] ;
long long int arr_7 [24] ;
long long int arr_9 [24] [24] [24] [24] ;
long long int arr_14 [24] [24] [24] [24] [24] ;
long long int arr_24 [24] [24] [24] ;
long long int arr_2 [24] ;
long long int arr_8 [24] [24] [24] ;
long long int arr_13 [24] [24] ;
long long int arr_19 [24] [24] ;
long long int arr_28 [12] ;
long long int arr_29 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 6182921384478530751LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 586453431376472637LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -5777765531903537056LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 7498640286719102192LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = -3435943187065705356LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 5506827806086852715LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4396401452271495160LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6185679417114707323LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 4736336923270474732LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 2791375615762581826LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = -715164483958865486LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = -748592531706302697LL;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
