#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3211712212U;
long long int var_5 = 2329141968706280935LL;
unsigned int var_6 = 1790070150U;
unsigned long long int var_7 = 9237808656634763171ULL;
unsigned int var_8 = 3821505529U;
unsigned short var_11 = (unsigned short)27407;
int zero = 0;
unsigned int var_13 = 472482989U;
long long int var_14 = 2384357288152526750LL;
signed char var_15 = (signed char)99;
unsigned long long int var_16 = 3576690546830221885ULL;
unsigned long long int var_17 = 11905390763582996646ULL;
signed char var_18 = (signed char)107;
unsigned short var_19 = (unsigned short)9368;
unsigned long long int var_20 = 4549262348423219158ULL;
unsigned long long int var_21 = 5136391436126727380ULL;
int var_22 = -667862457;
long long int arr_3 [25] [25] ;
unsigned long long int arr_6 [25] ;
unsigned short arr_7 [25] ;
unsigned long long int arr_9 [25] [25] [25] ;
unsigned long long int arr_19 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 8901128245567838754LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 8790000461004987978ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)8234;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 644535770788362394ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = 12319162578159048929ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
