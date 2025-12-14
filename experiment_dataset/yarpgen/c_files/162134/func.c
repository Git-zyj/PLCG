/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162134
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? ((~(((/* implicit */int) arr_2 [i_1 - 4])))) : (((/* implicit */int) arr_0 [i_0] [i_1 - 4]))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (arr_0 [i_1] [i_0])));
                    var_20 &= ((arr_6 [i_2] [i_1] [i_1] [i_0]) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 4])) < (((/* implicit */int) arr_2 [i_1 - 3]))))));
                    var_21 |= ((/* implicit */short) arr_2 [i_2 + 2]);
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    arr_11 [i_0] [i_3] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_3 + 1] [i_3 + 1]))));
                    var_22 = ((unsigned short) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))));
                    var_23 = ((/* implicit */short) (unsigned char)114);
                }
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            var_24 ^= arr_12 [i_6 + 1] [i_1] [i_4 - 1] [i_5];
                            var_25 ^= ((/* implicit */short) ((long long int) arr_1 [i_0]));
                        }
                        arr_21 [i_1 - 2] [i_5] [i_5] = ((/* implicit */unsigned char) (-(min(((~(3245197578409942233ULL))), (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5 - 1] [i_5 + 1]))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                            var_27 = (~(var_6));
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [i_4] [i_4] [i_4] [i_4 - 1]);
                            var_29 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((arr_3 [i_4]), (arr_3 [i_4])))) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_5] [i_8])))));
                            var_30 = arr_9 [i_0] [i_0] [i_0] [i_0];
                            var_31 = ((/* implicit */long long int) 3245197578409942231ULL);
                            var_32 = ((/* implicit */short) arr_8 [i_8]);
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            var_33 = 15201546495299609382ULL;
                            var_34 |= ((/* implicit */unsigned long long int) arr_0 [i_1] [i_5 - 2]);
                        }
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 8166046483412962713ULL)) ? ((-(((/* implicit */int) (short)21576)))) : (((((/* implicit */_Bool) 15883376976203086554ULL)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [i_5])) : (((/* implicit */int) arr_19 [i_4] [i_5] [i_4] [i_1] [i_0])))))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        var_36 *= ((/* implicit */unsigned short) arr_17 [i_10 + 1] [i_4 - 1] [i_1 + 1] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 2; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            var_37 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_11 - 1] [i_11 - 2] [i_11 - 1]), (arr_20 [i_4 - 1] [i_1] [i_4 + 1] [i_4 - 1] [i_11 - 2] [i_11] [i_1 - 1])))) ? ((~(((/* implicit */int) arr_20 [i_4 - 1] [i_1] [i_4 + 1] [i_10 + 1] [i_11 + 1] [i_11 - 1] [i_1])))) : (((/* implicit */int) arr_20 [i_4 + 1] [i_1] [i_4] [i_10] [i_11 + 1] [i_4] [i_11]))));
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned long long int) (~((+(((/* implicit */int) (unsigned char)113))))))))));
                        }
                        for (signed char i_12 = 2; i_12 < 18; i_12 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_1]))))) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_10 + 2] [i_0] [i_10 + 1] [i_10 + 1] [i_1 - 4])) : (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] [i_1 + 3])) : (((/* implicit */int) arr_23 [i_10] [i_1 - 3] [i_4] [i_10] [i_12] [i_10] [i_1 - 4]))))));
                            var_40 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_12] [i_4] [i_10] [i_12]);
                        }
                    }
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_1 - 3])))))));
                        var_42 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_20 [i_0] [i_1] [i_4 - 1] [i_13 - 2] [i_4 + 1] [i_0] [i_1])))), (((/* implicit */int) arr_20 [i_0] [i_1] [i_4 - 1] [i_13] [i_13] [i_0] [i_0]))));
                        var_43 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_32 [i_1 + 1] [i_4 + 1] [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 1])) : (((/* implicit */int) arr_32 [i_1 + 1] [i_4 + 1] [i_13 + 1] [i_13] [i_1 + 1] [i_13] [i_13 - 1]))))));
                        var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_4] [i_4 + 1] [i_13 - 1] [i_13] [i_13]))));
                    }
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_45 &= (signed char)88;
                        var_46 = ((/* implicit */unsigned long long int) min((var_46), ((~((-(10164871413817590654ULL)))))));
                        var_47 = ((/* implicit */unsigned long long int) max((var_47), (max((((((/* implicit */_Bool) (~(arr_15 [i_0] [i_1 - 2] [i_4] [i_14])))) ? (((((/* implicit */_Bool) arr_37 [i_4] [i_0] [i_0])) ? (arr_27 [i_0] [i_0] [i_1 + 1] [i_1] [i_4] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0] [i_14]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20863))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_14] [i_1 + 2] [i_0] [i_0])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        arr_46 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_39 [i_1] [i_1] [i_1] [i_1 - 1]);
                        var_48 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)30414)) ? (((/* implicit */int) arr_13 [i_1] [i_4 - 1] [i_15])) : (((/* implicit */int) arr_1 [i_0]))))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_1] [i_1])))))))));
                                arr_53 [i_1] [i_16] [i_17] [i_18] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_50 [i_0] [i_18] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1]))) : (arr_39 [i_0] [i_1 - 1] [i_16] [i_1 - 1])))))));
                                var_50 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)101))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
