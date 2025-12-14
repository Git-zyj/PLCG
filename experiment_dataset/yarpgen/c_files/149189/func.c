/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149189
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(var_0))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_17))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) 261581722)) % (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_7 [i_2] [i_3 + 1])) >= (arr_5 [i_1] [i_1] [i_1] [i_1]))))))))))));
                            var_22 = ((/* implicit */unsigned short) var_17);
                            arr_8 [i_0] [i_1] |= ((/* implicit */int) var_9);
                        }
                    } 
                } 
                var_23 |= ((/* implicit */int) (+((+(arr_5 [i_1] [i_0 - 3] [8U] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_24 = ((/* implicit */int) max((var_24), ((+(((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (arr_3 [(signed char)13] [i_0 - 1] [i_0 - 2]) : (arr_3 [i_0] [i_0 - 2] [i_4])))))));
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((4294967295U) >= (3113386588U)))), (min((3113386588U), (1183217548U)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1181580682U))))))) : (((/* implicit */int) arr_1 [i_1] [i_4]))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_26 = ((/* implicit */int) 1349629743U);
                    var_27 |= ((/* implicit */unsigned short) ((((var_15) + (2147483647))) << (((2338694441U) - (2338694441U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_28 ^= 0U;
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 16U)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_10))));
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((var_18) ^ (1183217544U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1050502598)) | (2438974505U)))) ? (arr_21 [i_0 - 3]) : (((/* implicit */unsigned int) ((1789630253) % (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [7U] [2U])))) ? (((/* implicit */int) arr_1 [i_8] [i_0])) : (arr_23 [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 + 1]))))));
                        var_32 ^= ((/* implicit */unsigned int) var_10);
                        var_33 -= var_0;
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */_Bool) ((3905438024U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))) ? (arr_16 [i_0 - 3]) : (max((1183217533U), ((-(2338694457U)))))))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), ((+(var_4)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                    {
                        var_36 += ((/* implicit */signed char) (((-(arr_5 [i_1] [i_1] [i_0 - 3] [i_0 + 1]))) / (((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) / (arr_20 [i_8])))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (min((arr_16 [i_0 + 1]), (max((((/* implicit */unsigned int) arr_2 [i_8] [8U] [i_8])), (7U)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)5111)))))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), ((~(var_4)))));
                            var_40 = ((/* implicit */int) var_8);
                            var_41 *= 1081111493U;
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (signed char)-79))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!(((418938708U) < (((/* implicit */unsigned int) 599729918)))))))));
                            var_44 *= ((((((/* implicit */_Bool) var_6)) ? (arr_15 [i_10]) : (arr_6 [i_0] [i_0]))) | (arr_28 [i_0 - 1] [(signed char)14] [14U] [i_0] [i_0 - 1]));
                        }
                    }
                    var_45 = ((/* implicit */unsigned short) min((var_45), (var_9)));
                    var_46 *= 4294967276U;
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_8] [i_1] [i_8]))))))))))));
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16564))) | (((((/* implicit */_Bool) 1081111493U)) ? (2338694460U) : (2715083017U))))))));
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 17; i_14 += 4) 
                    {
                        var_49 ^= arr_10 [i_1] [i_1] [i_13];
                        arr_36 [8] [8] [(unsigned short)8] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8491)) ? (arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (arr_15 [i_13])));
                        var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) >> (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])) - (6274)))))));
                    }
                    var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((1U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))))))));
                }
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) 2537645572U)) ? (max((-709209263), (((/* implicit */int) (unsigned short)17597)))) : (arr_23 [i_0 - 2] [i_1] [i_15] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        for (int i_17 = 1; i_17 < 17; i_17 += 2) 
                        {
                            {
                                var_53 ^= ((unsigned short) ((((var_2) + (2147483647))) >> (((var_0) - (3234345875U)))));
                                var_54 *= ((/* implicit */unsigned int) (-((~(var_2)))));
                                var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), ((+(((/* implicit */int) (unsigned short)17597)))))))));
                            }
                        } 
                    } 
                    var_56 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) | (var_18)));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 4; i_18 < 17; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 1; i_19 < 17; i_19 += 2) 
                        {
                            {
                                var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) arr_30 [i_0 + 1] [6] [i_0 + 1] [i_15] [i_19 - 1] [i_1]))));
                                var_58 ^= ((/* implicit */signed char) -1007754300);
                                var_59 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(4294967294U)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (var_15))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (min((((/* implicit */unsigned int) (unsigned short)65534)), (4114279611U)))))))))));
    var_61 = ((/* implicit */unsigned int) max((var_61), ((~(6U)))));
}
