/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133274
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
    var_14 = ((/* implicit */unsigned char) ((((((var_6) - (((/* implicit */int) var_1)))) + (max((((/* implicit */int) var_3)), (var_11))))) / (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = arr_2 [i_0] [i_0];
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [20] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_13 [i_0] [i_1] [i_2] [i_1] = arr_3 [i_0] [i_2];
                    arr_14 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_1])) : (((int) arr_0 [i_1] [(_Bool)1])));
                    arr_15 [i_1] [i_3] [i_2] [i_3] [i_1] [(unsigned char)8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                }
                for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_16 = ((/* implicit */int) max((var_16), ((~(((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                    var_17 *= ((/* implicit */unsigned char) ((arr_12 [i_0] [i_0] [(unsigned char)6] [i_2]) ? (var_11) : (arr_17 [i_0] [i_4] [i_1] [i_4])));
                    var_18 = ((/* implicit */int) arr_3 [22] [22]);
                    var_19 *= ((/* implicit */_Bool) ((var_13) ? (var_4) : (var_9)));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_2] &= (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_6])));
                            var_20 = ((/* implicit */_Bool) (~(var_11)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 23; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_8] = ((((/* implicit */_Bool) arr_21 [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_7 - 1] [(_Bool)1] [i_7])) : (((/* implicit */int) var_3)));
                            arr_31 [(_Bool)1] [i_7 + 1] [i_7 + 1] [22] [6] &= ((((/* implicit */int) arr_12 [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ^ (arr_28 [(unsigned char)16] [i_7] [8] [(_Bool)1] [i_7 - 3]));
                            arr_32 [i_0] [i_2] [i_1] [i_7] = ((/* implicit */_Bool) (unsigned char)215);
                            arr_33 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)130)))) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_7 - 3] [6]))));
                        }
                    } 
                } 
                var_21 = (~(var_12));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) ((arr_0 [i_0] [i_1]) & (arr_34 [i_0] [i_1] [i_10])));
                            var_23 *= ((/* implicit */int) ((unsigned char) ((arr_0 [i_0] [i_0]) > (((/* implicit */int) arr_12 [i_11] [i_10] [20] [i_1])))));
                            var_24 += ((/* implicit */_Bool) ((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_24 [i_11] [i_11])) : ((-(2095104)))));
                            var_25 &= ((/* implicit */unsigned char) (-(arr_6 [i_1] [i_10] [i_10])));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */_Bool) ((unsigned char) arr_28 [i_9] [i_9] [(_Bool)0] [i_0] [i_0]));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_24 [i_12] [i_12])) : (((/* implicit */int) var_13)))))));
                    var_28 = ((int) arr_35 [i_1]);
                    var_29 -= ((/* implicit */_Bool) ((((/* implicit */int) var_13)) % ((((_Bool)1) ? (-6) : (1239948737)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_47 [i_13] [i_1] = arr_26 [i_0] [i_0] [i_1] [i_0] [i_9] [i_13];
                    arr_48 [i_9] [i_1] = ((arr_20 [i_0] [i_1] [(unsigned char)11] [i_13]) >> (((/* implicit */int) arr_26 [i_13] [19] [i_9] [18] [i_13] [i_1])));
                    var_30 = (i_1 % 2 == zero) ? (((((/* implicit */int) arr_3 [i_1] [i_0])) << (((arr_36 [i_1] [i_1]) + (739792065))))) : (((((/* implicit */int) arr_3 [i_1] [i_0])) << (((((arr_36 [i_1] [i_1]) + (739792065))) + (137984672)))));
                    arr_49 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_13])) ? (((/* implicit */int) arr_29 [i_1])) : (arr_40 [i_0] [i_1] [i_9] [i_13] [i_13])))) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (arr_43 [i_13]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5))));
                    arr_50 [i_0] [i_1] [i_1] [i_0] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) (~((~(var_4)))));
                }
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((unsigned char) arr_20 [i_15] [i_1] [i_1] [i_0]))));
                        var_32 = arr_19 [i_0] [i_1] [i_9] [i_14] [i_15];
                        var_33 = ((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (arr_53 [i_0] [(_Bool)1] [(unsigned char)12] [(unsigned char)6] [i_14] [(_Bool)1]) : (arr_8 [i_1] [i_1] [i_14]));
                        var_34 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 3)))));
                        var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_14])))) ? (arr_2 [4] [4]) : (((/* implicit */int) (unsigned char)215))));
                    }
                    arr_55 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(arr_37 [i_0] [i_1] [i_9] [i_1])));
                }
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */int) arr_5 [i_0]);
                arr_58 [i_1] [i_1] [i_16] [i_16] = ((/* implicit */unsigned char) ((arr_54 [i_0]) > (((/* implicit */int) var_2))));
                arr_59 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1]))))) & (((/* implicit */int) var_1))));
            }
        }
        for (int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_37 -= (+(((/* implicit */int) (unsigned char)82)));
            var_38 ^= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)240)) : (2047)));
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_17] [i_17])) ? (((int) arr_53 [i_17] [i_17] [i_0] [i_0] [i_0] [i_0])) : ((+(-642731321)))));
            arr_62 [i_0] [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_17] [(unsigned char)10] [(_Bool)1])) ? (((/* implicit */int) arr_38 [i_0] [i_17])) : (((/* implicit */int) var_2))));
            var_40 = ((/* implicit */unsigned char) (-(arr_52 [i_17] [i_0])));
        }
        for (int i_18 = 1; i_18 < 23; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_41 *= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_19] [i_18 + 1])));
                        var_42 -= ((/* implicit */int) var_7);
                        var_43 = ((/* implicit */int) ((unsigned char) arr_28 [10] [i_18 - 1] [i_18] [(unsigned char)17] [i_18 + 1]));
                        arr_73 [i_0] [i_0] [i_0] [i_20] [i_18] [(unsigned char)12] = ((/* implicit */unsigned char) arr_60 [i_18 - 1] [i_18 + 1] [i_18 + 1]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 23; i_21 += 2) 
            {
                for (int i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    {
                        arr_81 [(unsigned char)0] [i_18] [i_21] [i_22] [i_22] [i_18] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                        var_44 ^= (+(((((/* implicit */_Bool) arr_72 [i_22] [i_22] [i_22] [i_0])) ? (arr_44 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0]) : (((/* implicit */int) arr_16 [i_22] [i_18 - 1] [i_21] [i_22])))));
                        /* LoopSeq 2 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_85 [i_18] [i_22] [(_Bool)1] [i_21] [i_18 + 1] [i_0] [i_18] = ((arr_8 [i_18] [i_21] [i_21 - 1]) & (((/* implicit */int) arr_22 [i_21 - 1] [i_18] [i_18] [i_18 - 1] [i_18] [i_0])));
                            arr_86 [i_18] = ((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_21] [i_22] [i_23]);
                        }
                        for (int i_24 = 0; i_24 < 24; i_24 += 2) 
                        {
                            arr_89 [i_22] [i_18 - 1] [i_18 - 1] [i_22] [(unsigned char)16] |= (~(((/* implicit */int) arr_65 [i_18 + 1] [20] [15])));
                            arr_90 [i_0] [i_18] [i_18] [i_18 - 1] [i_21] [i_22] [i_24] = ((/* implicit */int) arr_72 [i_21 - 1] [i_21 - 1] [i_18] [(_Bool)1]);
                        }
                        arr_91 [i_0] [i_18] [i_18] [i_0] [(unsigned char)16] [i_0] = ((/* implicit */unsigned char) ((arr_39 [i_21 - 3] [i_21 - 3] [i_18 + 1] [i_18 + 1] [i_0] [i_0]) ? (var_6) : (arr_63 [i_18 - 1] [i_22])));
                    }
                } 
            } 
            var_45 = ((/* implicit */int) var_3);
            var_46 = (((!(((/* implicit */_Bool) (unsigned char)2)))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_18 + 1] [15] [i_18])) : (arr_6 [i_0] [i_18 + 1] [i_18 + 1]));
        }
        var_47 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) - (((/* implicit */int) (unsigned char)135)))))));
    }
}
