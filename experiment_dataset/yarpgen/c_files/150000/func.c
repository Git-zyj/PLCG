/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150000
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
    var_11 = ((/* implicit */short) max((var_11), (var_7)));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(short)0] [i_0])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)-24184))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (min((((/* implicit */unsigned int) var_5)), (var_0))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_4 [(signed char)7] [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                arr_12 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) ((short) var_4))) + (2147483647))) << (((((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_0 [i_0])) + (104))))) - (48939008)))));
                var_15 = ((((/* implicit */_Bool) (short)17255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24192))) : (arr_6 [i_3]));
            }
            for (unsigned int i_4 = 1; i_4 < 7; i_4 += 3) 
            {
                var_16 = ((/* implicit */short) arr_6 [i_0]);
                arr_16 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) var_5);
                arr_17 [i_4] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-28))))) ? (((((/* implicit */_Bool) 8386560U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_2])))) : (((/* implicit */int) arr_11 [i_4 + 2]))));
                arr_18 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (short)-1);
            }
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)8001)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (arr_6 [i_0])));
            arr_19 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20965)) << (((((/* implicit */int) var_9)) - (5962)))))) ? (((((/* implicit */int) (signed char)3)) - (((/* implicit */int) arr_4 [(short)1] [(short)7])))) : (((/* implicit */int) ((signed char) var_3)))));
            arr_20 [(signed char)4] [3U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_6 [i_0])));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-22564))));
            arr_26 [i_0] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_23 [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_23 [i_5] [i_0] [i_0]))));
            var_18 = ((((/* implicit */_Bool) arr_5 [i_5] [i_0])) ? (arr_24 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_5))))));
            var_19 -= ((/* implicit */short) (signed char)0);
        }
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_33 [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) arr_32 [i_8 + 1] [9U] [i_8 + 1] [i_8 + 1])) ? (arr_32 [i_8 - 1] [i_8 - 2] [i_6] [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24198))));
                        var_21 = var_6;
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_9 [i_0] [i_6]))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) arr_5 [i_6] [i_0])) ? (arr_5 [i_0] [i_6]) : (arr_10 [i_0] [i_6])))));
                        }
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-22892)) - (((/* implicit */int) (short)-8559))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        arr_44 [(signed char)9] [(signed char)9] [i_7] [i_0] [(signed char)9] = min((((/* implicit */unsigned int) arr_28 [i_0] [i_6] [(short)3])), (((((/* implicit */_Bool) min((var_8), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (min((arr_24 [(short)10] [i_0] [i_0]), (arr_13 [i_0]))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) ((short) ((signed char) var_6)));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_35 [i_6]))));
                            var_28 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_39 [i_12 + 2] [i_12 + 1] [i_12])) ? (arr_39 [i_12 - 2] [i_12 + 2] [i_12 - 2]) : (arr_39 [i_12 + 2] [i_12 + 2] [i_12 - 1]))), (((arr_39 [i_12 - 1] [i_12 - 1] [i_12 + 2]) / (arr_39 [i_12 - 1] [i_12 - 2] [i_12])))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 2; i_13 < 9; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) << (((arr_27 [i_11 - 1] [i_11 - 1]) - (934758544U)))));
                            arr_51 [i_0] [i_0] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_11 + 1] [i_6] [i_13 + 2])) * (((/* implicit */int) arr_21 [i_11 + 1] [i_0] [i_13 + 1]))));
                        }
                    }
                    for (signed char i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 2; i_15 < 9; i_15 += 1) 
                        {
                            arr_58 [i_15] [i_6] [i_14] [i_14 - 1] [i_15] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((short) arr_36 [10U] [10U] [0U] [10U])), (((short) (short)5265))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_56 [i_0] [i_6] [i_7] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) arr_40 [i_0] [i_6] [i_14] [i_14 + 1]))))))) : (((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_14 + 1] [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((arr_32 [(signed char)3] [i_6] [(signed char)3] [i_14]) - (var_8)))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_7 [i_14 + 1] [(short)7])) ? (((/* implicit */int) (short)17877)) : (((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) arr_11 [(short)6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_0] [i_15 + 2] [i_7] [i_14 + 1])) - (((/* implicit */int) arr_45 [i_0] [i_15 + 2] [i_15] [i_14 - 1]))))) : (((unsigned int) ((short) (short)32767)))));
                            var_31 = ((/* implicit */short) ((((((/* implicit */int) arr_38 [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_7])) << (((((/* implicit */int) var_2)) - (14623))))) << (((((/* implicit */int) arr_38 [i_15 - 1] [i_0] [(signed char)9] [(signed char)9] [(signed char)9])) - (85)))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((var_2), (arr_29 [i_14 - 1]))))));
                            var_33 = ((/* implicit */short) arr_48 [i_15 - 1] [i_15 + 1] [i_14] [i_14 - 1] [i_14 - 1]);
                        }
                        /* vectorizable */
                        for (short i_16 = 1; i_16 < 10; i_16 += 4) 
                        {
                            arr_63 [i_16 + 1] [(signed char)10] [(short)8] [(signed char)10] [(short)8] [(short)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [i_6] [i_6] [(short)4] [6U] [i_14 - 1])) ? (((((/* implicit */_Bool) var_5)) ? (arr_62 [i_0] [9U] [i_0] [i_6] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_16] [i_16] [i_16 - 1] [i_16] [i_16 - 1])))));
                            arr_64 [(signed char)9] = ((/* implicit */signed char) arr_54 [i_6] [i_7] [i_16 + 1]);
                        }
                        var_34 = ((((unsigned int) arr_53 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1])) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-128))))));
                        var_35 = ((/* implicit */signed char) arr_23 [i_14 + 1] [i_0] [i_7]);
                    }
                    for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) max((var_36), ((signed char)61)));
                            var_37 ^= ((/* implicit */unsigned int) (short)32618);
                        }
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            arr_72 [3U] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned int) min((arr_41 [i_0] [i_0] [i_0] [i_0]), (arr_67 [i_19] [(signed char)5] [i_7] [5U] [i_17] [i_6] [i_7])))), (((unsigned int) arr_62 [i_19] [(short)0] [i_7] [i_6] [5U]))));
                            var_38 ^= ((/* implicit */signed char) var_10);
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) var_3))))) : (var_0)));
                            var_40 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_30 [i_6] [i_17] [i_19])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_7])) : (((/* implicit */int) (short)32767)))));
                        }
                        var_41 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_62 [i_0] [(signed char)6] [4U] [i_7] [i_7])) ? (arr_62 [i_17] [i_7] [i_7] [i_6] [i_0]) : (arr_62 [i_17] [i_17] [i_7] [(short)7] [i_7]))));
                        arr_73 [(short)7] [(short)7] [(signed char)7] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_34 [i_7]))) ? (((((/* implicit */_Bool) arr_34 [i_17])) ? (arr_34 [i_0]) : (arr_34 [i_0]))) : (min((arr_34 [i_0]), (var_8)))));
                    }
                    /* LoopNest 2 */
                    for (short i_20 = 2; i_20 < 8; i_20 += 1) 
                    {
                        for (unsigned int i_21 = 1; i_21 < 9; i_21 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_20 + 2] [i_20 - 2] [i_21 + 1])) - (((/* implicit */int) arr_31 [i_20 - 2] [i_21 + 2]))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_6] [i_6] [i_7] [i_0]))) + (var_1))) << (((((((/* implicit */_Bool) var_5)) ? (arr_47 [(short)1] [i_20 + 2] [i_7] [(short)4]) : (arr_6 [i_7]))) - (3667120569U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_40 [i_21] [i_21] [i_21] [(short)7]))) ? (((/* implicit */int) arr_45 [i_20 + 2] [i_20 + 2] [i_20 - 2] [i_20 + 2])) : (((/* implicit */int) arr_37 [i_7] [i_21])))))));
                                var_43 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 1803787407U)) ? (((((/* implicit */_Bool) (short)-818)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-15945)))) : (((/* implicit */int) (short)7722)))));
                                var_44 = ((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
