#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13772590381240568141ULL;
unsigned long long int var_4 = 17584129752105815058ULL;
unsigned long long int var_7 = 12096211455176234554ULL;
unsigned long long int var_9 = 7328853894826302378ULL;
unsigned long long int var_11 = 15411029353801601423ULL;
unsigned long long int var_14 = 8000507623417767519ULL;
unsigned long long int var_18 = 1848975297877601589ULL;
int zero = 0;
unsigned long long int var_19 = 16920501582197970357ULL;
unsigned long long int var_20 = 2234972821985005288ULL;
unsigned long long int var_21 = 8837552628705742653ULL;
unsigned long long int var_22 = 7622712439478003428ULL;
unsigned long long int var_23 = 10260062649324870449ULL;
unsigned long long int var_24 = 15929158405394782422ULL;
unsigned long long int var_25 = 7497935960965783337ULL;
unsigned long long int var_26 = 12384863516255239546ULL;
unsigned long long int var_27 = 15496263923223350470ULL;
unsigned long long int var_28 = 12488890515037646240ULL;
unsigned long long int var_29 = 5893438211291995713ULL;
unsigned long long int var_30 = 1873938422181696920ULL;
unsigned long long int var_31 = 11090629148807188966ULL;
unsigned long long int var_32 = 9424157832416144815ULL;
unsigned long long int var_33 = 5306231800475437404ULL;
unsigned long long int var_34 = 7546351160441905945ULL;
unsigned long long int var_35 = 9844660725550191854ULL;
unsigned long long int var_36 = 5862642534251332186ULL;
unsigned long long int arr_11 [19] [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7969196682101923566ULL : 16847066615318073553ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 16010400626556018770ULL : 17671383088249703415ULL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
