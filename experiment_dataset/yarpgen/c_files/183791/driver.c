#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -265771024;
signed char var_1 = (signed char)-20;
unsigned long long int var_2 = 6538600591306450956ULL;
unsigned long long int var_3 = 1140960395895266913ULL;
unsigned int var_4 = 20634772U;
long long int var_5 = 677220148071655999LL;
unsigned short var_6 = (unsigned short)34835;
long long int var_7 = 4240886902519608938LL;
signed char var_8 = (signed char)-20;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
unsigned long long int var_10 = 15463782862490143616ULL;
unsigned int var_11 = 3457705797U;
signed char var_12 = (signed char)-97;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)225;
unsigned long long int var_15 = 18442219712295448131ULL;
unsigned short var_16 = (unsigned short)50716;
unsigned short var_17 = (unsigned short)39002;
unsigned long long int var_18 = 8790395205130072414ULL;
unsigned long long int var_19 = 767322016301929070ULL;
long long int var_20 = 3090378826705534667LL;
long long int var_21 = -4094746420571536593LL;
unsigned short var_22 = (unsigned short)53861;
signed char var_23 = (signed char)79;
unsigned short var_24 = (unsigned short)50356;
unsigned int var_25 = 461650404U;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)163;
long long int var_28 = 147022871559803325LL;
unsigned long long int var_29 = 7920167727457804586ULL;
unsigned long long int var_30 = 3163424190989094039ULL;
unsigned int var_31 = 2872509914U;
unsigned long long int var_32 = 6219607667392052388ULL;
short var_33 = (short)-16329;
unsigned long long int var_34 = 12550848969709485973ULL;
long long int var_35 = 3219477985036585844LL;
unsigned int var_36 = 4287455042U;
unsigned long long int var_37 = 18375303790526035944ULL;
long long int var_38 = -6596257691293675210LL;
unsigned long long int var_39 = 16912644323784270844ULL;
unsigned short var_40 = (unsigned short)30875;
unsigned int var_41 = 1756289239U;
unsigned char var_42 = (unsigned char)52;
unsigned int var_43 = 4148607450U;
unsigned long long int var_44 = 9530493940680002590ULL;
unsigned long long int var_45 = 11962314240067037419ULL;
signed char var_46 = (signed char)-6;
unsigned int var_47 = 3676846955U;
signed char var_48 = (signed char)55;
long long int var_49 = 8344308936957726427LL;
long long int var_50 = -1488558317038708726LL;
unsigned long long int var_51 = 305954618867531899ULL;
unsigned long long int var_52 = 8895651927003960558ULL;
unsigned long long int var_53 = 4228643213931353922ULL;
unsigned long long int var_54 = 10782802687240384211ULL;
long long int var_55 = 3998917208038768629LL;
unsigned long long int arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned short arr_2 [24] [24] [24] ;
int arr_3 [24] [24] [24] ;
int arr_4 [24] ;
unsigned short arr_5 [24] [24] [24] ;
long long int arr_8 [24] ;
unsigned char arr_9 [24] ;
unsigned short arr_12 [24] ;
int arr_18 [24] [24] ;
unsigned long long int arr_19 [24] [24] [24] [24] ;
unsigned long long int arr_20 [24] [24] [24] [24] ;
_Bool arr_22 [24] [24] [24] ;
unsigned int arr_23 [24] [24] [24] [24] ;
_Bool arr_24 [24] [24] ;
signed char arr_28 [22] [22] ;
unsigned long long int arr_35 [13] [13] [13] ;
unsigned long long int arr_36 [13] ;
_Bool arr_37 [13] [13] [13] [13] [13] ;
short arr_42 [13] [13] [13] [13] [13] ;
unsigned char arr_50 [13] ;
unsigned int arr_64 [25] ;
long long int arr_66 [25] [25] ;
unsigned long long int arr_68 [25] [25] ;
short arr_69 [25] [25] [25] [25] ;
signed char arr_70 [25] [25] [25] ;
int arr_6 [24] [24] [24] ;
signed char arr_7 [24] [24] [24] ;
long long int arr_26 [24] ;
_Bool arr_30 [22] [22] ;
signed char arr_57 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_60 [13] ;
unsigned long long int arr_71 [25] [25] [25] [25] ;
unsigned long long int arr_72 [25] [25] [25] ;
short arr_73 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 16933199845648915705ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)57401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1458430708;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -964612638;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)33133;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -402037980466048341LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1648 : (unsigned short)47999;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 307914150;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 5176700248021206481ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 17666686919614222423ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 1447157493U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13204223020667045789ULL : 4808371941334530456ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 10101027365607895010ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)12060;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_50 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_64 [i_0] = 3839357530U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_66 [i_0] [i_1] = -2448933853224551419LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_68 [i_0] [i_1] = 1183379766249139465ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = (short)9026;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)22 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1281117076;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = -1112633821078438383LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)0 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? 3328905276U : 3890386409U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 13428480579149721575ULL : 262838016315091695ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = 12770200816424840363ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_73 [i_0] = (short)9571;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_72 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_73 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
