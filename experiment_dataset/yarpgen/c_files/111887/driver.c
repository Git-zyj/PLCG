#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
long long int var_1 = 6836589263274172865LL;
unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 1098535626U;
unsigned int var_4 = 1823868148U;
unsigned long long int var_5 = 9473335614784183955ULL;
short var_6 = (short)-9807;
long long int var_7 = -9121569394978195796LL;
unsigned char var_8 = (unsigned char)248;
short var_9 = (short)-22037;
long long int var_10 = 4270465928477219197LL;
int zero = 0;
int var_11 = 1476287461;
long long int var_12 = 3368627023731906409LL;
long long int var_13 = 2040093418513111457LL;
unsigned int var_14 = 2098656708U;
unsigned short var_15 = (unsigned short)53983;
unsigned char var_16 = (unsigned char)161;
unsigned long long int var_17 = 11445641954284728993ULL;
unsigned short var_18 = (unsigned short)60050;
unsigned long long int var_19 = 2085430751358017890ULL;
long long int var_20 = 8539649587717862733LL;
long long int var_21 = -8126336819377952928LL;
short var_22 = (short)-7442;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_3 [24] [24] ;
signed char arr_4 [24] ;
unsigned int arr_5 [24] [24] [24] ;
signed char arr_6 [24] ;
unsigned char arr_7 [24] [24] ;
unsigned long long int arr_10 [23] ;
unsigned int arr_11 [23] ;
int arr_12 [23] ;
unsigned char arr_14 [23] [23] [23] [23] ;
unsigned short arr_18 [24] [24] ;
signed char arr_30 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_2 [24] [24] ;
long long int arr_8 [24] ;
unsigned int arr_9 [24] [24] [24] [24] ;
signed char arr_16 [23] [23] ;
unsigned char arr_31 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4531620918189217985LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 16264151632488755393ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 481441376430153798LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 349837371U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 8396259339754193379ULL : 2627975190104681847ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 2867118353U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -182490388;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)31152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 11498169652903458851ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 2108631720269211226LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 646647344U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)95;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
