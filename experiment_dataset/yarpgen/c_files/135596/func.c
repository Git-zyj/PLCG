/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135596
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_10 [i_3]), (var_8)));
                                var_16 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)24078)) ? (((/* implicit */int) (unsigned short)25003)) : (((/* implicit */int) (signed char)110)))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? ((-((-(arr_8 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (arr_6 [i_3 + 1] [i_1])))))));
                                var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1645254337U)) && (((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)1] [(unsigned short)1] [i_3] [i_4] [(unsigned short)1]))))))));
                                arr_17 [(signed char)0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [3U] [i_4])) ? (((((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_2]))) + (((/* implicit */int) ((signed char) (signed char)-33))))) : (max((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_13)))), ((-(((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)6981)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2]))) : (((arr_10 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                                var_20 = (~(max((arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) * (arr_1 [i_1] [i_2]))))));
                                var_21 = max((arr_1 [i_6] [i_2]), (((/* implicit */unsigned int) ((unsigned short) arr_4 [i_0] [i_1 - 1] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned short)5])) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                        arr_25 [i_2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_13 [i_0] [i_2])))));
                        var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_7] [i_0] [i_0] [i_7 + 1]))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 4; i_8 < 14; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_9 - 1])) ? (((((/* implicit */_Bool) (signed char)-16)) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9 - 3] [i_9])))));
                            arr_39 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_9 - 3])) && (((/* implicit */_Bool) arr_7 [i_9 - 2] [(unsigned short)3] [i_9] [i_8 - 2]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)41460)) <= (((/* implicit */int) arr_37 [i_0] [i_0] [11U] [11U] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-111)))))) : (arr_29 [i_8])));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)19)) + (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)117))));
                    arr_45 [i_0] [(unsigned short)8] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47747)) ? (((/* implicit */int) (unsigned short)41458)) : (((/* implicit */int) (unsigned short)26808))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (4214139467U)));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [(signed char)7] [(signed char)2]))))) * (((/* implicit */int) arr_44 [i_8 - 3] [i_8 - 3] [i_8 - 2] [(unsigned short)2])))))));
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 14; i_15 += 1) 
                    {
                        var_29 = (signed char)116;
                        arr_50 [(unsigned short)14] [(signed char)1] [(unsigned short)14] [i_13] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)126)) == (((/* implicit */int) (signed char)127))));
                    }
                }
                var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_8 - 4] [i_12])))))));
            }
        }
        /* LoopNest 3 */
        for (signed char i_16 = 1; i_16 < 13; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        var_31 = arr_26 [i_0] [i_0] [i_17];
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_56 [i_19] [i_17] [i_17])))));
                            var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_32 [0U] [i_18] [0U])), ((-(((/* implicit */int) arr_7 [i_19] [(signed char)14] [i_16] [(signed char)9]))))));
                            var_34 = ((/* implicit */signed char) arr_14 [i_0] [i_0] [(signed char)6] [i_17] [i_18] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 1) 
                        {
                            arr_66 [i_0] [i_0] [i_0] [i_18] [i_0] |= (~(arr_1 [i_0] [i_0]));
                            arr_67 [i_17] [i_16 + 1] [14U] [i_16] = ((/* implicit */unsigned short) ((unsigned int) var_9));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            arr_71 [10U] [10U] [(signed char)0] [i_17] [0U] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)17788)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (signed char)80)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))));
                            var_35 *= ((signed char) 14U);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
                        {
                            var_36 = ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-111)) + (((/* implicit */int) arr_43 [10U] [(signed char)3] [i_17] [i_18]))))));
                            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 15; i_23 += 1) 
                        {
                            var_38 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2110870557U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1519248265U))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 4294967281U)) ? (arr_9 [i_0]) : (arr_74 [i_23])))))));
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)58555)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1256958527U)) ? (((/* implicit */int) arr_63 [i_0] [i_16] [9U] [i_24])) : (((/* implicit */int) (signed char)-90)))) != (((/* implicit */int) arr_34 [i_0] [i_16 + 2] [i_17] [i_0] [i_18] [i_24])))))));
                            var_41 = ((/* implicit */unsigned short) ((unsigned int) (signed char)80));
                            var_42 += ((/* implicit */unsigned short) (~((+(1519248265U)))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 4) 
    {
        var_43 += ((/* implicit */signed char) 1813034190U);
        arr_80 [i_25] = var_13;
    }
    var_44 = ((/* implicit */signed char) (unsigned short)54146);
}
