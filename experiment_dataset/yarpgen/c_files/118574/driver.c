#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3734941302U;
int var_2 = -175359917;
_Bool var_3 = (_Bool)0;
long long int var_4 = -3261490835681763257LL;
long long int var_5 = 6875151319335214573LL;
long long int var_6 = -5988433386007873483LL;
long long int var_7 = -256046320237057928LL;
signed char var_8 = (signed char)20;
int var_9 = -1786723684;
unsigned int var_10 = 4022471578U;
unsigned char var_11 = (unsigned char)176;
unsigned short var_12 = (unsigned short)47102;
long long int var_13 = 851046113631987765LL;
long long int var_14 = 1431256935259759400LL;
int zero = 0;
unsigned int var_15 = 3070147892U;
unsigned char var_16 = (unsigned char)45;
unsigned int var_17 = 3401846852U;
unsigned long long int var_18 = 8614917498052706037ULL;
long long int var_19 = -7372780922875466048LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1564082472U;
unsigned long long int var_22 = 13104005815499819111ULL;
unsigned int var_23 = 737038027U;
unsigned long long int var_24 = 14731136258868019672ULL;
unsigned long long int var_25 = 6961643288332632440ULL;
unsigned short var_26 = (unsigned short)6331;
unsigned int var_27 = 3305609815U;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)65414;
int var_30 = -1790162120;
unsigned long long int var_31 = 3178385496046828600ULL;
unsigned int var_32 = 1617034873U;
unsigned int var_33 = 604945674U;
unsigned short var_34 = (unsigned short)59273;
signed char var_35 = (signed char)-7;
unsigned int var_36 = 401160533U;
long long int arr_0 [10] ;
signed char arr_1 [10] ;
int arr_2 [10] [10] ;
unsigned char arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] ;
int arr_12 [10] [10] [10] [10] ;
short arr_15 [10] [10] [10] ;
unsigned int arr_20 [10] ;
unsigned int arr_22 [10] ;
unsigned int arr_23 [10] [10] [10] ;
int arr_40 [24] ;
unsigned long long int arr_41 [24] [24] ;
unsigned char arr_43 [20] ;
unsigned long long int arr_16 [10] ;
int arr_21 [10] [10] [10] [10] ;
int arr_26 [10] [10] [10] ;
long long int arr_27 [10] [10] ;
unsigned char arr_30 [10] ;
unsigned long long int arr_37 [10] [10] [10] ;
long long int arr_38 [10] ;
unsigned long long int arr_48 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -7078668875066068207LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1684355372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)127 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17879100866837919496ULL : 7342616728006195597ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -348975417;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-2851;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 1012183498U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = 2764249212U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1563448592U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = 763465774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_41 [i_0] [i_1] = 17911611887699652719ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_43 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 9251823350944241874ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -428722437;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -759878453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = 3543228727212343841LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 6428413864288264684ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_38 [i_0] = 7595833306365985343LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 4023310113822743175ULL : 6039833897941127702ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
