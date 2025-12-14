#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3409351511U;
unsigned int var_1 = 69883361U;
unsigned int var_2 = 3898135818U;
unsigned int var_3 = 3210827029U;
unsigned int var_4 = 3186503220U;
unsigned int var_5 = 281958503U;
unsigned int var_6 = 2912010740U;
unsigned int var_7 = 4007836092U;
unsigned int var_8 = 379377070U;
unsigned int var_9 = 706672495U;
unsigned int var_10 = 3823367033U;
unsigned int var_11 = 2358886528U;
unsigned int var_12 = 3029961411U;
unsigned int var_13 = 2772376508U;
unsigned int var_14 = 2339781799U;
unsigned int var_15 = 885429702U;
unsigned int var_16 = 2744138451U;
int zero = 0;
unsigned int var_17 = 1431792650U;
unsigned int var_18 = 3671344860U;
unsigned int var_19 = 3063859314U;
unsigned int var_20 = 3717733148U;
unsigned int var_21 = 81054238U;
unsigned int var_22 = 249493590U;
unsigned int var_23 = 1267960013U;
unsigned int var_24 = 799983955U;
unsigned int var_25 = 2871406210U;
unsigned int var_26 = 3966641126U;
unsigned int var_27 = 2870839620U;
unsigned int var_28 = 612679515U;
unsigned int var_29 = 714531197U;
unsigned int var_30 = 1708208405U;
unsigned int var_31 = 1819109955U;
unsigned int var_32 = 2547187940U;
unsigned int var_33 = 781536509U;
unsigned int var_34 = 271605171U;
unsigned int var_35 = 3275783979U;
unsigned int var_36 = 3745829068U;
unsigned int var_37 = 2294788555U;
unsigned int var_38 = 861115078U;
unsigned int var_39 = 4271416136U;
unsigned int var_40 = 306444386U;
unsigned int var_41 = 193685363U;
unsigned int var_42 = 3567454091U;
unsigned int var_43 = 2379776350U;
unsigned int var_44 = 3473083042U;
unsigned int var_45 = 198952113U;
unsigned int var_46 = 947862651U;
unsigned int var_47 = 4009361609U;
unsigned int var_48 = 1085081584U;
unsigned int arr_0 [14] ;
unsigned int arr_3 [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] [14] ;
unsigned int arr_7 [14] [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
unsigned int arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_12 [14] [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] ;
unsigned int arr_18 [14] [14] [14] [14] ;
unsigned int arr_19 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_22 [14] ;
unsigned int arr_25 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_27 [14] [14] [14] [14] [14] ;
unsigned int arr_34 [14] ;
unsigned int arr_37 [14] [14] [14] [14] ;
unsigned int arr_40 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 242846651U : 45501375U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2815170851U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3796755581U : 1827528329U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3560647491U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2653608149U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2679046442U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 672681118U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 90590052U : 1538079825U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3704907302U : 146630385U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1305334434U : 279055349U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1869796553U : 1582192433U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 2934599399U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 3080923341U : 915301413U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 1368157034U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2763528198U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 3584331412U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = 2940983247U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 133670680U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 559976207U : 1909551668U;
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
