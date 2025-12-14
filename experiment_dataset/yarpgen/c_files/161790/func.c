/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161790
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (+(((arr_5 [i_1] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((arr_2 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-25875))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)30)), ((short)-25875))))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-30)), (var_4))), (((/* implicit */unsigned short) min((((/* implicit */short) var_18)), (var_13))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (((((/* implicit */unsigned long long int) var_6)) | (var_10))))))));
    var_22 = ((/* implicit */int) (signed char)9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) (short)12362)) == (((/* implicit */int) (unsigned short)9)))))));
        var_24 = ((/* implicit */unsigned char) ((arr_9 [i_2]) ? ((~(((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) arr_9 [i_2]))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((3233251314U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)12366)))));
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 1] [i_4 + 1] [i_4])))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32285))))), (var_1))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_16))))), (var_15)))));
            var_26 ^= ((/* implicit */unsigned char) (((~(arr_15 [i_4 + 2]))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12901)) && ((_Bool)1))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (arr_10 [i_4]) : (arr_10 [i_4]))) > (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [2ULL])))))) == (max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (var_19)))))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_18 [i_3] [i_5] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)20)), ((short)-5704)))), (((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (((/* implicit */int) arr_14 [i_3 - 1])) : (((/* implicit */int) arr_14 [i_3 + 1]))))));
            /* LoopSeq 4 */
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3 + 1])) : (((/* implicit */int) (short)13446))))));
                var_29 = ((/* implicit */unsigned long long int) ((186533511U) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [(unsigned short)1]) < (-1078726507)))))));
                arr_21 [i_6] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-25875)) : (((/* implicit */int) (unsigned char)255))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) + (2590578669648546758LL))))));
                    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((9521780598665373314ULL) <= (((/* implicit */unsigned long long int) arr_19 [i_3 - 1] [i_5] [i_5] [i_5])))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-9131)))) != (((((/* implicit */_Bool) var_9)) ? (2529811718U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    arr_27 [i_3 + 1] [i_3] [i_3] [i_3 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1]))));
                    var_33 ^= ((/* implicit */int) ((932739437U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1951052692466138304LL)) ? (((/* implicit */int) (signed char)30)) : (arr_19 [i_3] [i_5] [i_3] [i_8]))))));
                    arr_28 [i_3 + 1] [i_3 + 1] [6] [i_3 + 1] [6] [i_3 + 1] = ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    arr_29 [i_3] [i_5] [12ULL] [i_8] = ((/* implicit */long long int) ((short) arr_26 [i_3 + 1] [i_3 + 1] [i_5] [i_5]));
                }
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_34 = ((/* implicit */long long int) max((max((arr_11 [i_3 - 1]), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((((((/* implicit */int) (short)0)) / (-1520961180))) >= (((((/* implicit */int) (unsigned short)48405)) & (((/* implicit */int) (signed char)-66)))))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((1343336203) - (1372827342))) + (((/* implicit */int) (unsigned char)15))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (2147483647) : (arr_19 [i_9] [i_9] [i_3] [i_3])))) ? (arr_23 [i_3] [i_5] [i_5] [i_9] [i_10]) : (((/* implicit */long long int) var_15))))));
                        var_36 ^= ((short) (~(arr_11 [i_10 - 2])));
                    }
                    arr_35 [i_3] [i_5] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) arr_10 [i_3 + 1])));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (-(((int) arr_8 [i_6]))))) ? ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_3])))))))));
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) arr_30 [i_9] [i_5] [i_5] [i_5] [i_3])), (var_14))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-95))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_5])), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_33 [i_3 + 1])))))))))))));
                }
                for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    arr_39 [i_3] = ((/* implicit */unsigned long long int) arr_23 [i_3 - 1] [i_3 - 1] [i_6] [i_6] [i_3 - 1]);
                    arr_40 [i_6] [i_6] [(short)4] [(short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5414812606236765650ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) / (((/* implicit */int) (unsigned char)240)))))));
                }
            }
            for (short i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    arr_46 [i_3 + 1] [i_12] [i_3 + 1] [i_5] [i_3 + 1] = ((((((/* implicit */_Bool) (short)-15096)) ? (((/* implicit */int) (unsigned char)0)) : (-1520961180))) >= (((/* implicit */int) arr_45 [i_3 - 1] [i_3 + 1])));
                    var_39 = ((/* implicit */int) ((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)698)))))) < (((/* implicit */int) var_11))));
                    arr_47 [i_3] [i_3] [i_3] [i_13] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) (short)-13271);
                    arr_48 [i_3 - 1] [i_5] [i_12] [i_3 - 1] = ((/* implicit */unsigned int) var_18);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        var_40 = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_15])), (arr_13 [i_3 - 1] [i_3 - 1] [i_14])))) / (((/* implicit */int) ((arr_37 [i_3 + 1] [i_3 + 1] [i_12] [i_12] [i_15]) < (((/* implicit */long long int) ((/* implicit */int) ((1921656780U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))))))))));
                        var_41 = ((/* implicit */int) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5129))) + (4297690228477133633ULL)))))));
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)33)))));
                        var_43 = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (short)-32757)) : (37614813))) > (((/* implicit */int) ((unsigned short) 0ULL)))))), (1520961180)));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */short) (~(((/* implicit */int) (short)-21743))));
                        var_45 = ((/* implicit */short) (unsigned char)222);
                    }
                    var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_56 [i_5] [i_12] [i_5] [i_5] [i_3] [i_3] [i_3])), (417444029447289948ULL)))) ? (((/* implicit */int) arr_26 [i_3] [i_5] [i_12] [i_5])) : (((/* implicit */int) (unsigned char)0)))))));
                    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((3439622744U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_5]) : (((/* implicit */int) (unsigned char)37)))))))) ? (((/* implicit */unsigned long long int) arr_15 [i_12])) : (((14149053845232417982ULL) * (((/* implicit */unsigned long long int) 5428425256362077637LL))))));
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) ((2113929216U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_5] [i_14])))))), (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4272127091U))))))))));
                }
                var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) > ((+(((/* implicit */int) var_18)))))))));
                var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */int) ((((/* implicit */unsigned long long int) 8384512)) > (14149053845232417983ULL)))) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_3] [i_3 - 1] [i_12] [i_3])) ? (var_14) : (((/* implicit */unsigned long long int) arr_11 [i_12])))) == (((/* implicit */unsigned long long int) (-(var_6)))))))))));
                arr_59 [9LL] [9LL] [9LL] [9LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_19)) <= (((unsigned long long int) 1710968376))));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                var_51 = ((/* implicit */unsigned int) ((int) arr_33 [i_3 + 1]));
                /* LoopSeq 2 */
                for (signed char i_19 = 1; i_19 < 11; i_19 += 1) 
                {
                    arr_65 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_3 - 1] [i_19 - 1] [i_19 + 2] [i_19 - 1] [i_19 + 1])) && (((/* implicit */_Bool) arr_37 [i_3 - 1] [i_19 - 1] [i_19 + 2] [i_3 - 1] [i_19 + 1]))));
                    arr_66 [i_5] [i_5] [i_5] [i_3] = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (unsigned char)73)))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 2; i_20 < 12; i_20 += 3) 
                    {
                        var_52 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 22840205U)) > (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_19] [i_5])))))));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3 + 1])) ? (((/* implicit */int) arr_17 [i_3 - 1] [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) arr_17 [i_3 - 1] [i_19 + 2] [i_20 + 1]))));
                        var_54 = ((/* implicit */_Bool) (~((-(var_10)))));
                    }
                    for (signed char i_21 = 2; i_21 < 9; i_21 += 4) 
                    {
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) (short)5769))));
                        arr_71 [i_3] [i_3 - 1] [i_3] [12LL] [i_3] [12LL] [i_3] = ((/* implicit */short) ((arr_64 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 17045651456LL)) <= (var_14))))));
                    }
                }
                for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 1) 
                {
                    arr_75 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)8))));
                    arr_76 [10] [10] [10] [10] [i_22] = ((((/* implicit */int) (unsigned char)44)) + (((/* implicit */int) var_13)));
                    var_56 = ((/* implicit */int) var_2);
                    var_57 = ((/* implicit */short) min((var_57), (((short) ((2026933410) - (arr_69 [i_5] [i_5] [i_5] [i_5]))))));
                }
                var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_18])) ? (arr_15 [i_5]) : (((/* implicit */int) var_8))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            }
            /* vectorizable */
            for (unsigned short i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 3) 
                {
                    var_59 = ((/* implicit */short) var_2);
                    var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_80 [i_3] [i_3] [i_5] [i_3])) + (((/* implicit */int) (unsigned char)26))))) ? (arr_62 [i_3 - 1] [i_23] [i_23]) : (((/* implicit */unsigned long long int) (+(arr_24 [i_5] [i_23] [i_5] [i_5] [i_3])))))))));
                    arr_82 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_23] = ((/* implicit */short) arr_38 [i_3] [i_5] [i_23]);
                }
                var_61 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) | (var_14)));
            }
        }
        var_62 = ((/* implicit */unsigned int) arr_63 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
        var_63 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_81 [i_3] [i_3] [10LL] [10LL] [i_3 - 1] [i_3 + 1])), ((-((+(7315312388630414489ULL)))))));
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 3) 
            {
                for (signed char i_27 = 1; i_27 < 10; i_27 += 3) 
                {
                    {
                        var_64 = ((/* implicit */_Bool) ((unsigned short) 1610394268));
                        arr_90 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_26] [i_3 + 1] [i_27 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_3]))));
                        var_65 ^= ((/* implicit */int) (((-(arr_24 [1] [i_27 + 3] [1] [1] [i_27 + 1]))) == (((/* implicit */int) min(((unsigned char)63), (((/* implicit */unsigned char) (signed char)-113)))))));
                    }
                } 
            } 
        } 
    }
}
