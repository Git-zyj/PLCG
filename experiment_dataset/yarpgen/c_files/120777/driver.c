#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19167;
unsigned long long int var_6 = 7037397399154052650ULL;
long long int var_10 = 1451272947145750048LL;
int zero = 0;
long long int var_17 = 3216606565666368232LL;
unsigned short var_18 = (unsigned short)13199;
unsigned long long int var_19 = 12234595992769762068ULL;
unsigned short var_20 = (unsigned short)20536;
long long int var_21 = -6898944952595978661LL;
long long int var_22 = -1527321793969025664LL;
unsigned short var_23 = (unsigned short)29095;
unsigned int var_24 = 2236197272U;
signed char var_25 = (signed char)31;
unsigned int var_26 = 2766680964U;
unsigned short var_27 = (unsigned short)56232;
unsigned long long int var_28 = 15716659404645605906ULL;
signed char var_29 = (signed char)-73;
unsigned int var_30 = 1409440035U;
unsigned short var_31 = (unsigned short)34359;
unsigned long long int var_32 = 342508539663678956ULL;
unsigned short arr_0 [18] ;
long long int arr_1 [18] ;
unsigned int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
long long int arr_6 [18] [18] ;
unsigned int arr_8 [18] [18] ;
unsigned int arr_10 [12] ;
unsigned int arr_12 [12] ;
long long int arr_31 [16] ;
long long int arr_3 [18] ;
long long int arr_9 [18] [18] [18] ;
unsigned int arr_14 [12] ;
unsigned long long int arr_26 [12] [12] [12] ;
unsigned long long int arr_43 [16] [16] [16] [16] [16] ;
long long int arr_44 [16] ;
signed char arr_45 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)61034;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -887678463828023307LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3423401068U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 10595758175539213180ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 7864119375840783629LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 1525242485U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3903544026U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 3962623151U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? -2769825376925785138LL : -5920005863604487328LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -7570535644822355788LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4467603777529300126LL : 3950671354751622823LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 2886148839U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12839921771444090715ULL : 13247430600449905302ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 12417493886131803154ULL : 13618811022537299078ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 1183654188034730869LL : 1297063304116408479LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (signed char)-96 : (signed char)106;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
