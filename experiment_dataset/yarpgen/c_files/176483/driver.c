#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
unsigned long long int var_2 = 17742482839629580733ULL;
unsigned char var_3 = (unsigned char)205;
unsigned int var_4 = 1502054710U;
unsigned int var_5 = 1244860774U;
unsigned char var_6 = (unsigned char)191;
unsigned long long int var_7 = 12610945682210022492ULL;
int var_8 = -1503612421;
unsigned int var_9 = 2069928221U;
unsigned long long int var_10 = 16339898271054215322ULL;
unsigned char var_11 = (unsigned char)42;
unsigned char var_12 = (unsigned char)142;
unsigned char var_13 = (unsigned char)48;
unsigned char var_14 = (unsigned char)191;
unsigned char var_15 = (unsigned char)85;
unsigned int var_16 = 1381468951U;
unsigned long long int var_17 = 15481838886698384736ULL;
int var_18 = 1519522353;
int zero = 0;
unsigned long long int var_19 = 4520343699947247933ULL;
int var_20 = -587167018;
unsigned char var_21 = (unsigned char)128;
unsigned long long int var_22 = 16078889427989090155ULL;
unsigned int var_23 = 3345132470U;
unsigned char var_24 = (unsigned char)73;
unsigned long long int var_25 = 4892864549464041730ULL;
unsigned char var_26 = (unsigned char)240;
unsigned char var_27 = (unsigned char)20;
int var_28 = -1086319207;
int var_29 = 1926299116;
unsigned int var_30 = 1201833111U;
int var_31 = 1764106876;
int var_32 = -1423505606;
unsigned long long int var_33 = 13220541706226697951ULL;
unsigned long long int var_34 = 8071993691171321021ULL;
unsigned long long int var_35 = 6827425799995465063ULL;
unsigned int var_36 = 1118608998U;
unsigned char var_37 = (unsigned char)156;
unsigned int var_38 = 3365746603U;
unsigned int var_39 = 1063504713U;
int var_40 = 142064680;
unsigned long long int var_41 = 86431436968259573ULL;
unsigned long long int var_42 = 8386342313344726075ULL;
unsigned long long int var_43 = 15253684257691318910ULL;
unsigned long long int var_44 = 10382889922411588108ULL;
unsigned char var_45 = (unsigned char)9;
unsigned int var_46 = 370817969U;
unsigned char var_47 = (unsigned char)144;
unsigned char var_48 = (unsigned char)51;
unsigned int var_49 = 2197553597U;
unsigned int var_50 = 403232210U;
unsigned char var_51 = (unsigned char)46;
unsigned int var_52 = 1894228588U;
unsigned int var_53 = 3609042301U;
unsigned char var_54 = (unsigned char)42;
unsigned long long int var_55 = 8568352780828907681ULL;
unsigned char var_56 = (unsigned char)145;
int var_57 = 165370880;
unsigned char var_58 = (unsigned char)65;
unsigned char var_59 = (unsigned char)183;
unsigned int var_60 = 2586533648U;
unsigned long long int var_61 = 4898869242714160712ULL;
unsigned long long int var_62 = 82580303010163154ULL;
unsigned long long int var_63 = 15414227818549463278ULL;
unsigned char var_64 = (unsigned char)27;
unsigned char var_65 = (unsigned char)247;
unsigned char var_66 = (unsigned char)231;
unsigned long long int var_67 = 2653041509992952437ULL;
unsigned char var_68 = (unsigned char)220;
unsigned char var_69 = (unsigned char)32;
unsigned char var_70 = (unsigned char)192;
unsigned char var_71 = (unsigned char)165;
unsigned char var_72 = (unsigned char)86;
unsigned int var_73 = 2802135073U;
unsigned char var_74 = (unsigned char)143;
unsigned char var_75 = (unsigned char)236;
unsigned int var_76 = 907084760U;
unsigned char var_77 = (unsigned char)26;
unsigned char var_78 = (unsigned char)205;
unsigned int var_79 = 2539722328U;
unsigned int var_80 = 3658277688U;
unsigned long long int var_81 = 10565341582871415047ULL;
unsigned char var_82 = (unsigned char)31;
unsigned long long int var_83 = 16519118317389898515ULL;
unsigned char var_84 = (unsigned char)123;
unsigned char var_85 = (unsigned char)114;
unsigned int var_86 = 894521560U;
unsigned char var_87 = (unsigned char)24;
int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_3 [19] [19] [19] ;
unsigned int arr_4 [19] [19] [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] ;
unsigned long long int arr_7 [19] ;
unsigned long long int arr_8 [19] ;
unsigned long long int arr_9 [19] ;
unsigned int arr_10 [19] ;
unsigned char arr_20 [14] [14] [14] ;
unsigned char arr_23 [14] [14] [14] ;
unsigned long long int arr_24 [16] ;
unsigned long long int arr_25 [16] [16] ;
unsigned long long int arr_26 [16] ;
unsigned char arr_28 [16] ;
unsigned long long int arr_31 [16] [16] [16] ;
unsigned int arr_32 [16] ;
int arr_37 [16] [16] [16] ;
unsigned char arr_38 [16] ;
unsigned int arr_41 [16] [16] ;
unsigned char arr_42 [16] [16] [16] [16] ;
unsigned long long int arr_56 [13] [13] [13] ;
int arr_59 [15] ;
unsigned char arr_60 [15] ;
unsigned long long int arr_62 [15] ;
unsigned long long int arr_64 [15] ;
unsigned char arr_68 [15] [15] [15] ;
unsigned long long int arr_73 [15] [15] [15] ;
unsigned char arr_74 [15] [15] ;
unsigned char arr_75 [15] [15] [15] [15] ;
unsigned long long int arr_77 [15] ;
unsigned int arr_78 [15] [15] [15] [15] ;
unsigned long long int arr_83 [15] [15] [15] [15] [15] ;
unsigned char arr_91 [15] [15] [15] [15] [15] ;
unsigned long long int arr_95 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_11 [19] [19] [19] ;
unsigned char arr_12 [19] [19] ;
unsigned int arr_16 [11] [11] ;
unsigned long long int arr_19 [14] [14] ;
unsigned char arr_30 [16] [16] [16] ;
int arr_34 [16] [16] ;
unsigned long long int arr_35 [16] [16] [16] ;
unsigned int arr_36 [16] [16] ;
unsigned long long int arr_39 [16] [16] ;
unsigned long long int arr_40 [16] ;
unsigned long long int arr_43 [16] [16] [16] [16] ;
unsigned int arr_44 [16] [16] [16] [16] ;
unsigned long long int arr_45 [16] [16] [16] [16] ;
unsigned long long int arr_46 [16] ;
unsigned int arr_58 [13] [13] ;
int arr_70 [15] [15] [15] [15] ;
unsigned char arr_80 [15] [15] [15] [15] ;
unsigned char arr_92 [15] [15] [15] [15] [15] ;
unsigned int arr_93 [15] [15] [15] [15] [15] [15] [15] ;
int arr_100 [15] [15] [15] [15] [15] ;
unsigned char arr_106 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_107 [15] [15] [15] [15] [15] ;
unsigned char arr_108 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1579058765;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 226785044U : 570303274U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 11858015538474634568ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 10849986U : 1923493857U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 14252035290710062248ULL : 9778507798593124735ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 14381574445555371327ULL : 10063949768919938205ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 2806602751872332669ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1310624295U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = 3026755494859475892ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = 15375476927775715452ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = 1006910510443547056ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 16986649071408866006ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = 3757514495U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = -888810626;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_38 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_41 [i_0] [i_1] = 3013241675U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 2009880547648285466ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = 751344291;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_60 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_62 [i_0] = 7197524252069802286ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_64 [i_0] = 10936259554146265638ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = 5584807737161988203ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_74 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)70 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_77 [i_0] = 10283266593598386086ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1940858763U : 2449044308U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_83 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 10862732165403517425ULL : 9557285374288265195ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_95 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 3409401006256448616ULL : 10483918429555139665ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 663362734U : 2415519868U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 3405932311U : 2570312531U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 18048476988076907522ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)239 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = -1844770027;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 15278888997902190502ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = 2130108005U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_39 [i_0] [i_1] = 17266311041617384385ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = 16086667154999729249ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 11751037240499146271ULL : 8415135067221189439ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4003555086U : 1016469350U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6576570886475485969ULL : 2972154214026478679ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = 15214786975625761947ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? 1541190437U : 1199977140U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1667388287 : -117200378;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_80 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)111 : (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)119 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 2614565940U : 2903292805U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 345520214 : -914771039;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_106 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)65 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_107 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)136 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_108 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)184 : (unsigned char)32;
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
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_80 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_106 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_107 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_108 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
