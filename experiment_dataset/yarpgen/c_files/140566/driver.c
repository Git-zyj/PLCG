#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7667457596562502387ULL;
unsigned long long int var_1 = 16493588117985929638ULL;
unsigned long long int var_2 = 15676546415440694623ULL;
unsigned short var_3 = (unsigned short)64781;
unsigned short var_4 = (unsigned short)15360;
unsigned long long int var_5 = 17457513168754460517ULL;
unsigned short var_6 = (unsigned short)16247;
unsigned long long int var_7 = 2295456299171662794ULL;
unsigned long long int var_9 = 16134034173988948216ULL;
unsigned long long int var_10 = 13753744728281318583ULL;
unsigned long long int var_11 = 13021581045832097450ULL;
unsigned short var_12 = (unsigned short)65501;
unsigned short var_13 = (unsigned short)6587;
int zero = 0;
unsigned long long int var_14 = 2186342969845074567ULL;
unsigned short var_15 = (unsigned short)53839;
unsigned short var_16 = (unsigned short)2504;
unsigned long long int var_17 = 18314883555024351332ULL;
unsigned short var_18 = (unsigned short)47465;
unsigned long long int var_19 = 13339204390165504254ULL;
unsigned long long int var_20 = 6380824163451105484ULL;
unsigned long long int var_21 = 6587620544915251273ULL;
unsigned long long int var_22 = 11768026746191990034ULL;
unsigned long long int var_23 = 11593371920696240277ULL;
unsigned long long int var_24 = 15947775560539941304ULL;
unsigned short var_25 = (unsigned short)33701;
unsigned short var_26 = (unsigned short)34703;
unsigned short var_27 = (unsigned short)58180;
unsigned long long int var_28 = 7078331893198778695ULL;
unsigned short var_29 = (unsigned short)36932;
unsigned short var_30 = (unsigned short)5956;
unsigned long long int var_31 = 15354011929892909771ULL;
unsigned short var_32 = (unsigned short)55855;
unsigned short var_33 = (unsigned short)65294;
unsigned short var_34 = (unsigned short)43858;
unsigned short var_35 = (unsigned short)27112;
unsigned short var_36 = (unsigned short)26586;
unsigned short var_37 = (unsigned short)43762;
unsigned short var_38 = (unsigned short)2831;
unsigned long long int var_39 = 8282785929761180663ULL;
unsigned short var_40 = (unsigned short)24720;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] [24] ;
unsigned short arr_10 [24] [24] [24] [24] [24] ;
unsigned short arr_11 [24] ;
unsigned short arr_12 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_13 [24] [24] [24] [24] [24] ;
unsigned long long int arr_20 [24] ;
unsigned long long int arr_26 [10] ;
unsigned short arr_30 [17] ;
unsigned long long int arr_38 [13] ;
unsigned long long int arr_41 [23] ;
unsigned long long int arr_14 [24] [24] [24] [24] [24] [24] [24] ;
unsigned short arr_17 [24] [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_18 [24] [24] [24] [24] [24] ;
unsigned long long int arr_21 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_33 [17] ;
unsigned long long int arr_36 [19] ;
unsigned short arr_39 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14162915289673237252ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)50062;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)11469;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)50562;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10097192367049865173ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5685556353791793515ULL : 14431159655610424345ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4203977708191838365ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 18222413702510628328ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 5981755479573251560ULL : 3492872595456985992ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)40260;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)56042 : (unsigned short)31638;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37150 : (unsigned short)31124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)58460 : (unsigned short)1414;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)16145 : (unsigned short)2546;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = 2219368211734478334ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 10510638470561073004ULL : 16964516812180133528ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = (unsigned short)1204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = 14596486094447234072ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_41 [i_0] = 14492326353695276071ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 6632903171565680554ULL : 17686329461159715945ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned short)56314 : (unsigned short)35541;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 5226438564849192065ULL : 9817223472131206851ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 15931233139151320482ULL : 8885880740212811437ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59342 : (unsigned short)4844;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 16238884252464580604ULL : 7896409123508739599ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = (unsigned short)47042;
}

void checksum() {
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
