/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153574
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 ^= ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            arr_6 [(unsigned char)9] [0] [7ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(2280825051561224909ULL)))) || (((/* implicit */_Bool) max((((/* implicit */int) var_3)), (max((arr_5 [(short)9] [i_1 + 2]), (arr_4 [i_0]))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((arr_2 [i_0]) / (249594636999753415ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)224)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))) ? (max(((+(((/* implicit */int) (unsigned char)227)))), (((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (3776925781277189765ULL)))))))));
        }
        arr_7 [i_0] |= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */short) 18197149436709798201ULL);
        var_23 *= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_19))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (8421816259970756946ULL))) >= (((/* implicit */unsigned long long int) ((1899181413) / (((/* implicit */int) (signed char)51))))))))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_12 [i_2] [1U] |= ((/* implicit */short) ((unsigned int) var_18));
        arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (arr_4 [i_2])))) ? ((-(arr_4 [i_2]))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_4 [i_2]) : (((/* implicit */int) (unsigned char)70))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */int) (_Bool)0);
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            arr_22 [i_3] [i_3] [i_4 - 1] = ((/* implicit */signed char) ((var_3) || (((/* implicit */_Bool) arr_18 [i_4 + 1] [i_3 + 1] [i_4]))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_4 + 1])) ? (arr_15 [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_16)))))))));
            var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_4 - 1] [i_3 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4 + 3])))))));
        }
        var_26 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3 + 1])) && (((/* implicit */_Bool) 3693570448U)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_27 = ((((/* implicit */_Bool) arr_18 [12ULL] [i_5] [i_5])) ? (((((/* implicit */int) min(((unsigned char)81), (((/* implicit */unsigned char) var_9))))) >> (((/* implicit */int) ((_Bool) arr_5 [i_5] [i_5]))))) : (((((/* implicit */_Bool) min((-2180123318384334433LL), (8935141660703064064LL)))) ? (1373107889) : (-2021820795))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_5] [i_6])) && (((/* implicit */_Bool) (-(arr_5 [i_6] [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_29 += ((/* implicit */unsigned int) max((arr_15 [0] [i_8]), (((/* implicit */unsigned long long int) (+(((1899181426) / (((/* implicit */int) (short)6866)))))))));
                        arr_33 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_14 [i_6]))) < (((-997439814) | (((/* implicit */int) arr_30 [i_7])))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_6)))));
                        var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((2180123318384334432LL) < (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 + 1] [i_6])))))), (arr_15 [i_5] [i_5])));
                    }
                } 
            } 
            arr_34 [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_25 [i_5] [i_5])))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) (((+(((/* implicit */int) var_5)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)5]))) >= (3646425256U))))))) >= (((/* implicit */int) ((max((var_17), (((/* implicit */unsigned long long int) arr_4 [4])))) >= (((/* implicit */unsigned long long int) var_14))))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_32 *= ((/* implicit */unsigned char) var_10);
            arr_37 [15ULL] [i_5] |= (_Bool)1;
        }
        var_33 = ((/* implicit */signed char) arr_25 [i_5] [i_5]);
    }
    for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (unsigned int i_12 = 3; i_12 < 23; i_12 += 2) 
            {
                {
                    arr_47 [1] [i_12] |= ((/* implicit */unsigned int) 540516826);
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2180123318384334433LL)) ? (((/* implicit */unsigned long long int) var_11)) : (4653487608387964140ULL)))) ? (min((var_18), (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) && (((/* implicit */_Bool) 540516826)))))))) ? (5207172129507579016ULL) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6845)) ? (arr_40 [23U] [23U]) : (((/* implicit */int) var_8))))), (arr_42 [i_12 - 2] [i_12 + 1] [i_12 - 1]))))))));
                    var_35 *= ((/* implicit */unsigned char) min(((-(arr_41 [i_10 - 3] [i_10 - 1]))), (((/* implicit */unsigned int) var_3))));
                }
            } 
        } 
        var_36 &= ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)174), (arr_44 [i_10] [i_10] [i_10 + 1])))) ? (arr_38 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13239571944201972599ULL) >= (((/* implicit */unsigned long long int) 613249600881216531LL))))))));
        var_37 ^= ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) 535822336U)), (arr_43 [i_10 - 2])))));
    }
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        var_38 *= ((/* implicit */short) ((min((((_Bool) -8316997833118175322LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_13] [i_13]))) >= (arr_42 [i_13] [i_13] [i_13]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_48 [3ULL]) > (var_18))))) % (min((var_17), (((/* implicit */unsigned long long int) (short)224)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5207172129507579016ULL))))))));
        var_39 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)88))));
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            var_40 = ((/* implicit */short) min(((+(arr_46 [i_13] [i_13]))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)219)) / (((/* implicit */int) (short)112)))), ((+(((/* implicit */int) (short)224)))))))));
            var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((arr_41 [i_13] [i_13]), (((/* implicit */unsigned int) arr_39 [i_13])))) / (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1244948998)))) : (-8316997833118175322LL)));
        }
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            arr_58 [(signed char)3] = ((/* implicit */_Bool) ((signed char) ((arr_54 [i_13]) >= (var_7))));
            var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) -5301901611973661060LL))));
            var_43 *= min((((var_10) / (var_16))), (((((/* implicit */_Bool) ((unsigned int) arr_52 [i_13]))) ? (((/* implicit */int) var_3)) : (-873354929))));
        }
        for (unsigned char i_16 = 3; i_16 < 19; i_16 += 4) 
        {
            arr_63 [i_13] = ((signed char) ((unsigned long long int) 8384165891285096268LL));
            var_44 -= ((/* implicit */unsigned long long int) ((-1591687542) / ((-(var_18)))));
            var_45 *= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((3739905331U) / (1688482753U)))), (((((/* implicit */unsigned long long int) var_6)) / (13239571944201972581ULL)))))));
        }
        /* LoopSeq 2 */
        for (short i_17 = 1; i_17 < 18; i_17 += 4) 
        {
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_13])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (short)-10711)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_13] [i_17])) * (((/* implicit */int) arr_39 [i_17]))))), (((((/* implicit */_Bool) -1047020054719776830LL)) ? (((/* implicit */unsigned int) 1927304541)) : (17U)))))) : (((unsigned long long int) min((2323551532036228969LL), (((/* implicit */long long int) arr_52 [i_13])))))));
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_47 += ((/* implicit */int) (-(min((((/* implicit */unsigned int) -1429193168)), (42U)))));
                        var_48 = ((/* implicit */unsigned int) max((var_48), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_13] [i_13] [i_13]))))) ? (((/* implicit */unsigned int) (-((~(-121377850)))))) : (1515797646U)))));
                        var_49 ^= ((/* implicit */_Bool) arr_46 [i_18] [i_17 + 2]);
                        arr_72 [i_17] = ((/* implicit */int) arr_57 [i_13] [i_17 + 1]);
                        arr_73 [i_18] [i_17] [(signed char)1] = ((/* implicit */unsigned char) arr_55 [(short)7] [(signed char)8]);
                    }
                } 
            } 
        }
        for (int i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            var_50 ^= ((/* implicit */int) ((unsigned long long int) min((6964721137108524265ULL), (((/* implicit */unsigned long long int) (signed char)-36)))));
            arr_78 [3] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_20])) - (((/* implicit */int) arr_51 [i_13] [i_13] [i_20]))))) ? (((((/* implicit */_Bool) arr_56 [(short)12] [(short)12] [i_20])) ? (arr_56 [i_13] [i_20] [i_13]) : (((/* implicit */int) arr_71 [i_13])))) : (min((var_10), (-1637617582)))));
            /* LoopSeq 1 */
            for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                arr_81 [i_21] [i_21] [i_21] = ((/* implicit */long long int) (-(((int) arr_62 [i_13]))));
                var_51 = ((/* implicit */short) arr_45 [i_21]);
            }
            arr_82 [i_13] [i_20] [i_13] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_13] [i_13]))))));
        }
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            for (int i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 2; i_24 < 18; i_24 += 1) 
                    {
                        for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            {
                                arr_92 [18] [(short)8] [i_23] [i_24] [i_22] = ((/* implicit */signed char) var_18);
                                arr_93 [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (121377849) : (1814354607))), ((-(((/* implicit */int) arr_62 [i_13]))))))) ? ((-(arr_43 [i_22]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 571238698U)) - (16330458232770303341ULL)))) ? (min((var_1), (((/* implicit */unsigned int) arr_70 [i_25] [i_22] [i_24])))) : (((4294967253U) ^ (((/* implicit */unsigned int) 1921280327)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_26 = 0; i_26 < 20; i_26 += 1) 
                    {
                        var_52 ^= ((/* implicit */short) (~(121377849)));
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_88 [i_22] [i_26] [(signed char)18] [i_23])) ? (1848177511007963104ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967254U)) ? (((/* implicit */unsigned long long int) var_15)) : (var_17)))) ? (((/* implicit */int) arr_57 [i_26] [i_22])) : (((/* implicit */int) ((short) var_7))))))));
                        var_54 = min((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_57 [i_13] [i_26])), (arr_45 [17LL])))), (-1016390689))), (min((((((/* implicit */int) arr_61 [i_13] [i_22] [i_23])) % (((/* implicit */int) arr_87 [i_26] [(signed char)10] [i_26] [6ULL])))), (((int) var_2)))));
                    }
                    for (short i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        arr_100 [i_22] [i_22] [(short)12] [i_22] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)224)))))) >= (var_6)))) - ((-(var_4)))));
                        var_55 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2199021158400LL)) ? (2147483647) : (((/* implicit */int) arr_79 [(unsigned char)13] [(unsigned char)0] [i_23] [i_23]))))))) ? (((((/* implicit */_Bool) 601396847U)) ? ((~(6964721137108524265ULL))) : (((/* implicit */unsigned long long int) arr_98 [i_13] [i_13] [i_22] [18ULL] [i_27])))) : (min((((((/* implicit */_Bool) -1566771313)) ? (((/* implicit */unsigned long long int) 1071447574)) : (arr_88 [i_22] [i_22] [14] [14]))), (((/* implicit */unsigned long long int) ((int) arr_38 [i_13])))))));
                    }
                    var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -615142784)) || (((/* implicit */_Bool) (-(15413538786270928546ULL))))));
                    arr_101 [i_22] = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
    }
    var_57 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((1758685091U), (((/* implicit */unsigned int) (signed char)-113)))) : (610043755U)))) ? (min((((1108441171U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (min((((/* implicit */unsigned int) 911288767)), (var_1))))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)112))))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) : (19U)))))));
    var_58 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned int) var_12)), (var_1))) : (((/* implicit */unsigned int) ((int) 2536282204U)))))));
}
