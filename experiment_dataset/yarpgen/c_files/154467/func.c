/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154467
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (arr_0 [i_1]) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0] [i_0]));
        }
        for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((arr_0 [i_0]) < (arr_0 [i_0])));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_8));
        }
        for (int i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) var_7));
            var_19 += ((/* implicit */_Bool) var_12);
            var_20 |= ((/* implicit */_Bool) arr_8 [i_3 - 1] [(_Bool)1] [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned int i_5 = 3; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [(unsigned char)19] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_5 - 1]);
                        var_21 = ((/* implicit */unsigned int) var_5);
                        arr_19 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_3]);
                    }
                } 
            } 
        }
        for (int i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
        {
            arr_24 [19U] [i_0] [2U] = ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [14U] [14U])) ? (((/* implicit */int) arr_5 [(_Bool)0])) : (var_10)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2583827457U) : (2657048671U))) : (var_8))))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [(unsigned char)8])) ? (var_8) : (var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1]))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                var_24 += ((/* implicit */unsigned int) arr_29 [(unsigned char)8] [(unsigned char)8] [i_7] [(unsigned char)8]);
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)127))))) : (arr_26 [i_7] [i_7 + 4])));
            }
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
            {
                arr_32 [8] [i_0] [i_9] = ((/* implicit */unsigned char) arr_4 [i_0] [(unsigned char)23]);
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_7] [i_9] [i_10] [i_0] = ((/* implicit */int) var_6);
                            arr_39 [i_0] [i_0] [i_0] [9U] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_0] [i_0]))));
                            var_26 = ((/* implicit */unsigned int) arr_14 [i_10]);
                            var_27 = arr_26 [1] [i_0];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            arr_48 [i_13] [i_0] [i_9] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_40 [i_0] [i_7 + 3])) : (var_12)))) ? (var_9) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0])) : (var_11)))));
                            var_28 = arr_10 [i_0];
                            var_29 = ((/* implicit */unsigned char) arr_36 [i_0] [i_7] [i_9] [i_0] [i_0]);
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) var_11);
                var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_14])));
                var_32 = ((/* implicit */_Bool) var_3);
                arr_51 [i_0] = arr_50 [i_0] [i_0] [i_0];
            }
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [8] [i_7] [i_0])) ? (((/* implicit */int) var_7)) : (var_9)));
                        var_34 *= ((/* implicit */int) var_13);
                        var_35 += ((/* implicit */_Bool) var_9);
                        var_36 = ((/* implicit */int) ((unsigned char) var_5));
                        var_37 = ((/* implicit */int) arr_54 [i_0] [(unsigned char)7] [i_15] [14]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_17 = 1; i_17 < 22; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_0] [i_7])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_30 [i_0] [i_7] [i_17 - 1] [i_7 + 4]))));
                var_39 += ((/* implicit */unsigned char) ((var_14) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */int) var_3)))) : (var_11)));
                arr_60 [(_Bool)1] [i_0] [i_7] = ((/* implicit */unsigned int) arr_47 [i_0] [i_0]);
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_18 - 1] [i_18 - 1])) ? (arr_26 [i_18 - 1] [i_18 - 1]) : (arr_26 [i_18 - 1] [i_18 - 1])));
            arr_63 [i_0] = ((/* implicit */unsigned char) var_12);
        }
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            var_41 = ((var_14) ? (((((/* implicit */_Bool) arr_0 [9])) ? (var_1) : (((/* implicit */int) arr_5 [10])))) : (((/* implicit */int) var_4)));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                for (unsigned int i_21 = 2; i_21 < 21; i_21 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_56 [i_0])));
                        arr_73 [i_0] [i_19] [i_0] [i_21 + 1] [i_21] = ((/* implicit */int) arr_21 [i_0] [i_19]);
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) arr_27 [i_0] [i_20] [i_0])))) : (var_8)));
                        var_44 = ((/* implicit */unsigned int) arr_45 [(unsigned char)18] [(unsigned char)18] [i_21] [20U] [i_21 + 3]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_22 = 2; i_22 < 21; i_22 += 1) 
            {
                var_45 = ((/* implicit */unsigned int) ((arr_58 [9] [2] [2]) ? (((var_9) - (var_2))) : (((/* implicit */int) arr_4 [i_0] [i_19]))));
                arr_76 [(unsigned char)6] [i_0] [4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [i_22] [i_22 + 3] [i_22] [i_0])) ? (((/* implicit */int) var_14)) : (arr_27 [i_0] [i_22 + 3] [i_22 + 3])));
                arr_77 [i_22] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_66 [8])) : (arr_27 [i_0] [i_22 - 2] [i_19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_19] [i_0]))) : (((unsigned int) var_8)));
                var_46 = ((unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_19] [i_19] [i_22 - 1]))));
            }
            for (int i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_47 ^= ((/* implicit */unsigned int) arr_5 [16U]);
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_65 [5U] [i_24])) : (((/* implicit */int) arr_58 [i_0] [i_19] [i_23]))))) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (arr_80 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_82 [i_0] [i_23] [i_0] = arr_41 [i_24] [i_23];
                    arr_83 [17] [i_19] [11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_40 [i_23] [i_23])) : (var_11)));
                }
                for (int i_25 = 2; i_25 < 23; i_25 += 1) 
                {
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) arr_85 [i_0] [i_19] [(_Bool)1] [i_25]))));
                    var_50 |= ((/* implicit */_Bool) var_15);
                    var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) arr_66 [i_0]))));
                }
            }
        }
    }
    var_52 = ((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_15))));
}
