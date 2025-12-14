#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1526376260204201944LL;
unsigned int var_1 = 2519249243U;
unsigned long long int var_2 = 1407356591860835216ULL;
unsigned long long int var_3 = 4577825048581625844ULL;
unsigned int var_5 = 832084023U;
long long int var_7 = 213011358115554237LL;
unsigned long long int var_8 = 1476780548178810483ULL;
unsigned int var_9 = 1802639376U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3186614288U;
unsigned long long int var_12 = 12287187623621855682ULL;
unsigned int var_13 = 428532179U;
unsigned int var_14 = 899681544U;
unsigned long long int var_17 = 5553614622634209190ULL;
int zero = 0;
unsigned long long int var_18 = 11479723096531687170ULL;
unsigned long long int var_19 = 15572242570243513053ULL;
unsigned int var_20 = 1922086083U;
unsigned int var_21 = 21688443U;
short var_22 = (short)-7367;
unsigned long long int var_23 = 3421437414524463638ULL;
unsigned long long int var_24 = 2259238382966664433ULL;
unsigned long long int var_25 = 7640306866986633114ULL;
unsigned int var_26 = 3063819432U;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 4996724219413818866ULL;
unsigned int var_29 = 2151262229U;
long long int var_30 = -5266741610736967332LL;
unsigned long long int var_31 = 14047062789059836645ULL;
long long int var_32 = 166721058078911253LL;
unsigned long long int var_33 = 9157000531767663485ULL;
unsigned int var_34 = 2844999897U;
long long int var_35 = 5150708539994680920LL;
unsigned long long int var_36 = 14103854528411930010ULL;
unsigned long long int var_37 = 14846095898592525038ULL;
unsigned long long int var_38 = 12757343419119871274ULL;
unsigned int var_39 = 1103017926U;
unsigned long long int var_40 = 12050415673283689388ULL;
long long int var_41 = 4014848585841180746LL;
unsigned long long int var_42 = 17874239174715644943ULL;
unsigned long long int var_43 = 10309036284732133487ULL;
short arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_3 [25] [25] ;
short arr_4 [25] ;
unsigned long long int arr_5 [25] ;
long long int arr_7 [25] ;
unsigned long long int arr_8 [17] ;
long long int arr_10 [17] ;
unsigned int arr_13 [17] [17] [17] [17] ;
_Bool arr_14 [17] [17] [17] ;
long long int arr_15 [17] [17] [17] ;
unsigned int arr_16 [17] [17] ;
short arr_25 [17] [17] ;
unsigned long long int arr_32 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)9746;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3339412444919931076ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3199100987U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)14296;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2927434790053630051ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1857446956450371837LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 1754920558080723947ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -1710277157835867261LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3642984102U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -3502674982721583269LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 3175459683U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (short)27158;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 10470178136556837613ULL;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
