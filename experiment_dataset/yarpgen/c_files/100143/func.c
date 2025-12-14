/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100143
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
    var_12 ^= ((/* implicit */unsigned char) ((var_4) < (((/* implicit */int) min(((unsigned char)254), ((unsigned char)128))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), ((unsigned char)135)));
                    arr_8 [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned char)145))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)254)) != (96659749)));
                    var_15 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)135))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(unsigned char)8] [i_1] [i_1] [i_2] [i_3 - 2])) & (var_6))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) (+(var_6)));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_3 + 1] [10])) ? (((/* implicit */int) arr_3 [(signed char)6] [i_2 + 2] [i_3 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_2 + 2] [i_3 - 1])))))));
                            var_19 = ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_3 + 1] [i_4 - 1])));
                        }
                        var_20 = ((/* implicit */int) arr_0 [(signed char)9] [i_3]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)11))) & (((/* implicit */int) arr_12 [i_1 - 2]))));
                        var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)187)))) - (((int) (unsigned char)131))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 + 3] [i_1 + 1])) : (((/* implicit */int) (unsigned char)175))));
                        arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2 - 4] [(signed char)5] [i_5]))));
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_24 = ((((((/* implicit */int) (unsigned char)137)) == (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_11)) : (((((-231406996) + (2147483647))) << (((((/* implicit */int) arr_4 [i_6] [i_1] [i_0])) - (10))))));
                        var_25 -= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)4))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [(signed char)6])))) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [(unsigned char)8])) : (((/* implicit */int) var_2))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0] [i_7] [i_1 + 1])) : (((/* implicit */int) var_11))))));
                    }
                }
            } 
        } 
        arr_23 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [13] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_6))) : (((/* implicit */int) arr_0 [i_0] [(signed char)0]))));
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_27 &= ((((/* implicit */_Bool) arr_25 [(unsigned char)9] [i_8])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8])));
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_8])) ? (((/* implicit */int) arr_7 [i_0] [i_8] [i_8] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_8]))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-54)) > (((/* implicit */int) (unsigned char)251))))) + (((/* implicit */int) ((signed char) arr_2 [i_0]))))))));
            arr_26 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_30 ^= ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_8] [(unsigned char)15]));
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_10)))));
                    }
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)(-127 - 1)))))))))));
            /* LoopSeq 3 */
            for (int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                arr_39 [i_11] [15] [15] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_11] [i_11] [i_11] [i_12])) / (arr_2 [i_0])));
                var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-55))));
                arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) arr_38 [i_0])) : (var_9)));
            }
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                arr_43 [i_0] [i_0] [12] [12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) -96659738)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)127))));
                arr_44 [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_11] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
            }
            for (signed char i_14 = 1; i_14 < 13; i_14 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) arr_42 [i_14 + 4] [i_14 + 3] [i_14 + 3]);
                var_36 = ((unsigned char) arr_27 [i_14 + 3] [i_14 + 1] [i_14 + 1]);
                arr_47 [i_0] [(signed char)8] [i_14] = var_1;
                var_37 ^= ((/* implicit */unsigned char) ((int) var_2));
                var_38 = ((/* implicit */signed char) ((631759294) <= (((/* implicit */int) (signed char)123))));
            }
        }
        for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_4 [i_15 - 1] [i_15] [i_15 - 1])) * (((/* implicit */int) var_1)))))))));
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_56 [i_0] [i_16] [i_16] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_29 [(unsigned char)12] [(signed char)3] [(unsigned char)12])) : (((/* implicit */int) var_2)))))));
                        var_40 = arr_52 [i_0] [i_15];
                    }
                } 
            } 
            arr_57 [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_15 + 1] [i_15 - 1] [(signed char)14] [i_15]))));
            var_41 = ((/* implicit */int) arr_29 [i_0] [i_0] [(signed char)1]);
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_19 = 4; i_19 < 16; i_19 += 4) 
            {
                var_42 ^= ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_42 [(unsigned char)1] [i_18] [i_18])) + (122)))))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54))))));
                var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) ^ (var_6)));
                var_44 = var_3;
                var_45 ^= ((/* implicit */unsigned char) var_4);
            }
            for (unsigned char i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                    {
                        {
                            arr_72 [i_22] [i_21] [i_20] [(unsigned char)11] [i_18] [(signed char)1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)136))));
                            var_46 = ((/* implicit */signed char) (-(((((/* implicit */int) var_0)) >> (((var_9) - (2058541329)))))));
                        }
                    } 
                } 
                arr_73 [i_20] [i_18] [i_20] = ((/* implicit */signed char) ((unsigned char) -96659739));
                arr_74 [i_0] [i_18] [i_20] = ((/* implicit */unsigned char) ((var_4) | (var_9)));
            }
            var_47 ^= ((/* implicit */signed char) var_9);
        }
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            for (unsigned char i_25 = 3; i_25 < 14; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 15; i_26 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_27 = 0; i_27 < 15; i_27 += 1) 
                        {
                            arr_87 [i_24] [i_24] [i_25 - 1] [(unsigned char)13] [i_27] [(signed char)7] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_23] [(unsigned char)8] [(signed char)4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_55 [i_25] [i_25] [i_25 - 2] [i_25 - 2]))));
                            arr_88 [13] [(unsigned char)6] [i_25] [i_25] [i_23] [(signed char)9] [i_23] = arr_70 [i_25 - 1] [i_25 - 3] [i_25 + 1] [i_25] [i_25 - 1];
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_25 - 2])) + (var_6)));
                            arr_89 [i_23] [(signed char)12] [i_25] [i_25] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)1))));
                            var_49 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) arr_84 [i_25] [i_25 - 1] [(signed char)3] [i_25]))));
                        }
                        for (signed char i_28 = 2; i_28 < 12; i_28 += 4) 
                        {
                            var_50 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_53 [i_28] [i_24] [i_24] [i_28])) << (((((/* implicit */int) arr_3 [i_23] [i_23] [(unsigned char)12])) - (151)))));
                            arr_92 [i_23] [i_23] [i_25] [i_26] [i_28] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) arr_52 [i_23] [16])))) != (((/* implicit */int) arr_66 [i_25 + 1] [i_24] [i_25 + 1] [i_28 - 1] [i_28]))));
                        }
                        arr_93 [i_23] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) || (((/* implicit */_Bool) var_0))));
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)79)) <= (((/* implicit */int) arr_32 [i_25 - 2] [(unsigned char)8] [(unsigned char)0] [i_23])))))));
                        var_52 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)78))));
                    }
                } 
            } 
        } 
        var_53 = ((unsigned char) (unsigned char)251);
        arr_94 [i_23] [i_23] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-60)) < (((/* implicit */int) (unsigned char)128)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_23] [i_23] [(signed char)14])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_66 [i_23] [(unsigned char)0] [(unsigned char)15] [i_23] [(unsigned char)0])))))));
    }
    for (unsigned char i_29 = 0; i_29 < 22; i_29 += 2) 
    {
        var_54 = var_5;
        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -328505416)))))));
        var_56 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_95 [i_29])) ? (((/* implicit */int) arr_96 [i_29])) : (((/* implicit */int) ((unsigned char) var_0))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (arr_95 [i_29])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)178))))));
    }
    /* vectorizable */
    for (signed char i_30 = 0; i_30 < 14; i_30 += 3) 
    {
        var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_85 [i_30] [i_30] [(unsigned char)14] [i_30] [i_30])) ? (arr_85 [i_30] [i_30] [i_30] [i_30] [i_30]) : (arr_85 [i_30] [i_30] [i_30] [i_30] [i_30]))))));
        var_58 = ((/* implicit */unsigned char) var_9);
        var_59 = ((/* implicit */unsigned char) ((arr_58 [6] [i_30] [i_30]) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
}
