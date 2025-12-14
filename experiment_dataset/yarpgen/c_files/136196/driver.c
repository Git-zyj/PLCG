#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15742;
unsigned short var_1 = (unsigned short)1691;
unsigned short var_2 = (unsigned short)33613;
unsigned short var_3 = (unsigned short)24998;
unsigned short var_4 = (unsigned short)51609;
unsigned int var_5 = 2003453319U;
unsigned int var_6 = 1568808728U;
unsigned int var_7 = 1874277850U;
unsigned int var_8 = 1751326186U;
unsigned int var_9 = 3575679722U;
unsigned short var_10 = (unsigned short)38982;
int zero = 0;
unsigned short var_11 = (unsigned short)11252;
unsigned int var_12 = 4056520534U;
unsigned short var_13 = (unsigned short)56361;
unsigned int var_14 = 624904298U;
unsigned int var_15 = 1289373935U;
unsigned int var_16 = 3672622350U;
unsigned int var_17 = 3027084975U;
unsigned int var_18 = 1359682442U;
unsigned short var_19 = (unsigned short)62935;
unsigned short var_20 = (unsigned short)56329;
unsigned int var_21 = 3155779112U;
unsigned short var_22 = (unsigned short)37480;
unsigned short var_23 = (unsigned short)44580;
unsigned short var_24 = (unsigned short)183;
unsigned int var_25 = 612362901U;
unsigned int var_26 = 811855027U;
unsigned short var_27 = (unsigned short)2023;
unsigned short var_28 = (unsigned short)61704;
unsigned int var_29 = 3293722690U;
unsigned int var_30 = 3304317567U;
unsigned short var_31 = (unsigned short)45834;
unsigned int var_32 = 372943726U;
unsigned int var_33 = 3208833209U;
unsigned short var_34 = (unsigned short)46440;
unsigned short var_35 = (unsigned short)7315;
unsigned int arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_3 [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
unsigned short arr_6 [18] ;
unsigned short arr_7 [18] [18] [18] ;
unsigned int arr_8 [18] [18] ;
unsigned short arr_9 [18] ;
unsigned int arr_10 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_11 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_13 [18] [18] [18] [18] [18] [18] [18] ;
unsigned int arr_14 [18] [18] [18] [18] [18] ;
unsigned int arr_19 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_21 [18] [18] [18] [18] ;
unsigned int arr_22 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_25 [18] ;
unsigned short arr_27 [18] [18] [18] ;
unsigned int arr_30 [18] [18] [18] [18] [18] ;
unsigned int arr_37 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_39 [18] [18] ;
unsigned int arr_46 [18] [18] [18] [18] [18] [18] [18] ;
unsigned short arr_12 [18] ;
unsigned short arr_15 [18] ;
unsigned int arr_20 [18] ;
unsigned int arr_23 [18] ;
unsigned short arr_24 [18] [18] [18] [18] [18] ;
unsigned int arr_29 [18] [18] [18] [18] [18] ;
unsigned int arr_34 [18] ;
unsigned short arr_35 [18] [18] [18] [18] [18] ;
unsigned int arr_36 [18] ;
unsigned int arr_42 [18] [18] [18] [18] [18] ;
unsigned int arr_47 [18] [18] [18] [18] [18] ;
unsigned int arr_48 [18] [18] [18] [18] ;
unsigned short arr_51 [18] [18] [18] [18] ;
unsigned int arr_52 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2740474592U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3591019172U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3421635223U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3412709675U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3249381397U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)28025;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)47351;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 953763970U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)37048;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3741480573U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)41705;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 1153414020U : 364360128U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 1844161027U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4093898394U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 817833496U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 243599284U : 2494062680U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned short)958;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)24430;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 3059513349U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1051969507U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_39 [i_0] [i_1] = 395663440U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 4208744954U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)22530;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46950 : (unsigned short)56336;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 3164677322U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2508733887U : 1322763846U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)39901 : (unsigned short)53868;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 2471335605U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = 2504343708U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)63125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = 151602716U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 2861382177U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 1947651496U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3068713948U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38773;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = 3561811118U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
