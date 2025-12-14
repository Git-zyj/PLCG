#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11939784296403913539ULL;
unsigned long long int var_1 = 2430822203301112132ULL;
unsigned long long int var_2 = 17774945310884567895ULL;
unsigned long long int var_3 = 831006932601147215ULL;
unsigned long long int var_4 = 14281662338648080045ULL;
unsigned long long int var_5 = 3015989999856134057ULL;
unsigned long long int var_7 = 11642161218049380640ULL;
unsigned long long int var_8 = 5634242625292417080ULL;
unsigned long long int var_9 = 1600886493815583730ULL;
unsigned long long int var_10 = 15995979370494217966ULL;
unsigned long long int var_11 = 6258364289776493538ULL;
unsigned long long int var_12 = 12271023909386178498ULL;
unsigned long long int var_13 = 14474296244508970116ULL;
unsigned long long int var_14 = 1219752173802891334ULL;
unsigned long long int var_15 = 7431861467791459206ULL;
int zero = 0;
unsigned long long int var_16 = 12469634643051300521ULL;
unsigned long long int var_17 = 17499727207541258811ULL;
unsigned long long int var_18 = 10369639996952230945ULL;
unsigned long long int var_19 = 7108915816066007524ULL;
unsigned long long int var_20 = 6650308562353607385ULL;
unsigned long long int var_21 = 2759976259629752578ULL;
unsigned long long int var_22 = 14576259869230231101ULL;
unsigned long long int var_23 = 8296223623705690101ULL;
unsigned long long int var_24 = 3155243317272599019ULL;
unsigned long long int var_25 = 5599379543528947934ULL;
unsigned long long int var_26 = 1157796550403193850ULL;
unsigned long long int var_27 = 16387594082964219670ULL;
unsigned long long int var_28 = 12562577315229039610ULL;
unsigned long long int var_29 = 2281658759693234988ULL;
unsigned long long int var_30 = 2471737053190185848ULL;
unsigned long long int var_31 = 5349496909643799013ULL;
unsigned long long int var_32 = 9503538681934749763ULL;
unsigned long long int var_33 = 8308646333265811797ULL;
unsigned long long int var_34 = 13225974091836455911ULL;
unsigned long long int var_35 = 17626643085802049603ULL;
unsigned long long int var_36 = 15174720803886325142ULL;
unsigned long long int var_37 = 1904276239227065123ULL;
unsigned long long int var_38 = 10151240453438976640ULL;
unsigned long long int var_39 = 14109946509636759559ULL;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned long long int arr_7 [11] [11] [11] [11] [11] ;
unsigned long long int arr_9 [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] [11] ;
unsigned long long int arr_14 [11] ;
unsigned long long int arr_15 [11] [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] ;
unsigned long long int arr_18 [11] [11] [11] [11] ;
unsigned long long int arr_24 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_27 [13] [13] ;
unsigned long long int arr_28 [13] ;
unsigned long long int arr_31 [13] [13] ;
unsigned long long int arr_32 [13] [13] [13] ;
unsigned long long int arr_33 [13] [13] [13] ;
unsigned long long int arr_34 [13] [13] [13] ;
unsigned long long int arr_38 [12] ;
unsigned long long int arr_39 [12] [12] ;
unsigned long long int arr_11 [11] [11] [11] [11] [11] ;
unsigned long long int arr_12 [11] [11] [11] ;
unsigned long long int arr_16 [11] [11] [11] ;
unsigned long long int arr_19 [11] [11] [11] [11] ;
unsigned long long int arr_23 [11] [11] [11] [11] ;
unsigned long long int arr_35 [13] [13] ;
unsigned long long int arr_36 [13] ;
unsigned long long int arr_44 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4829686328235301630ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 16088171010071225416ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16265513299894550150ULL : 676165986452360296ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 12790735058215241138ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 4198590605775244978ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 12026486899529458951ULL : 9840853660931206050ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 6729256128636223567ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 6599833468343907998ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 10457633517715335470ULL : 17802728765535708741ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 61319089883370875ULL : 10648909785089241956ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 2217106121372792791ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2698737083963186329ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4300601164348014599ULL : 4902420519240777464ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 18184637026181242795ULL : 15892317470813303471ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 3794773717454810056ULL : 5636473927885818594ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = 16817464163780031354ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 14092573001845675926ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_31 [i_0] [i_1] = 16391107276318742261ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 18249586261288188588ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 5618765203463577616ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 13002413945269397631ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = 17007959673758332261ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = 9609852960053646851ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 10316930485323751885ULL : 16732796636063915307ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5206391674223560222ULL : 12544472099602033574ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 170905368508674714ULL : 16194628313470550330ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7441982276164552750ULL : 17916702894255836047ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10107889186471637864ULL : 7199418646530396641ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = 5059572490624732386ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 10923220862977690752ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_44 [i_0] [i_1] = 9597057348381067052ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
