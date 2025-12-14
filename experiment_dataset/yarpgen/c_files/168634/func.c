/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168634
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
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), ((_Bool)1)));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)64526))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8388))))) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_4] [i_4] [i_2] [(unsigned short)8] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned short)275)))), (((/* implicit */int) min((var_5), (arr_10 [i_4] [i_2] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_6), (arr_10 [i_0] [i_1] [i_1] [i_2]))))));
                }
                for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_5 - 2] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_4 [(short)12])) : (((((/* implicit */int) arr_15 [i_0] [(unsigned short)8] [i_5 - 2] [i_5 - 2])) / (((/* implicit */int) var_0)))))) ^ (((((/* implicit */_Bool) (unsigned short)28)) ? (((((/* implicit */_Bool) (short)26321)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_5 - 2] [i_5 - 2])))) : (((/* implicit */int) (unsigned short)30516))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 4; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_15 [i_1] [i_5] [i_6 + 1] [(unsigned short)4])))), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_18 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_7])) : (((/* implicit */int) max((arr_15 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 2]), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_19 = min((((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_3))))), (var_9));
                            var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) max(((unsigned short)57147), ((unsigned short)6)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (_Bool)1))))) : ((~(((/* implicit */int) (unsigned short)65525)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_7] [(unsigned short)6] [i_5 - 1] [i_5 - 1] [i_1] [i_7])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5 - 1])) ? (((/* implicit */int) (short)-27633)) : (((/* implicit */int) arr_2 [i_6] [i_6]))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_5 - 2] [i_6 + 1] [i_6 - 2] [i_6 + 1]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
                        }
                        var_22 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [(short)10] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((unsigned short) var_8))))), (((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5] [i_6 - 4] [i_6 - 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_5 + 1]))))));
                        var_23 = ((/* implicit */_Bool) (((!(arr_16 [i_6 - 3] [i_5 - 2] [i_1]))) ? ((~(((/* implicit */int) arr_15 [i_6 - 4] [(unsigned short)3] [i_6] [i_6])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_6 - 3] [i_6] [i_5] [i_1] [i_1])), (arr_9 [i_6] [i_5] [i_5] [i_5]))))));
                    }
                    for (unsigned short i_8 = 4; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_24 += ((/* implicit */unsigned short) ((((var_5) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_8])) ? (((/* implicit */int) (unsigned short)29056)) : (((/* implicit */int) (unsigned short)41098)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_6))))))) << (((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)41098)) : (((/* implicit */int) (unsigned short)4944)))), (((/* implicit */int) arr_22 [i_5 + 2] [i_5 + 1] [i_8 - 1])))) - (41092)))));
                        var_25 = var_8;
                        var_26 = (unsigned short)28364;
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                        var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned short) (unsigned short)57173)), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8736))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [(unsigned short)8] [i_1] [i_1] [i_5] [(unsigned short)0])) == (((/* implicit */int) (unsigned short)65500))))) : (((/* implicit */int) max(((unsigned short)24443), ((unsigned short)60585))))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)4951))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_5 + 1]))));
                            arr_29 [i_9] [i_1] [i_5 + 2] [i_9] [i_9] [i_10] = ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_13 [i_10] [i_5 - 1] [(unsigned short)11] [i_10] [i_10])));
                        }
                        var_31 ^= ((/* implicit */_Bool) (short)873);
                    }
                    var_32 = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_5 + 1]);
                    arr_30 [i_0] [i_1] [i_5 - 2] = ((/* implicit */_Bool) min((min((((/* implicit */int) max((arr_15 [(short)10] [(short)10] [i_5] [i_5]), ((unsigned short)41085)))), (((((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_1])) ^ (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_5 - 1] [i_1])))))), ((-(((/* implicit */int) var_7))))));
                }
                for (unsigned short i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_1] [i_13] [i_11] [i_12] [i_12] [(unsigned short)7] = arr_20 [(unsigned short)7] [(unsigned short)7] [i_12];
                                arr_39 [i_0] [i_13] = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_10 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 - 1])), ((-(((/* implicit */int) var_7)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24437)) ? (((/* implicit */int) arr_12 [i_13] [(unsigned short)6] [i_11] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_40 [i_11 + 1] [i_0] [i_0] = ((unsigned short) arr_15 [i_0] [i_0] [i_1] [i_1]);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)41089), (((/* implicit */unsigned short) (_Bool)1))))) || (((/* implicit */_Bool) max((max((arr_26 [(_Bool)1] [i_0] [i_1] [i_1] [i_1]), (arr_23 [i_1] [(_Bool)1] [i_14] [(unsigned short)0]))), (((/* implicit */unsigned short) arr_19 [i_14] [i_14] [i_1] [i_1] [i_0])))))));
                    var_34 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_13 [i_0] [i_14] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_14] [i_1]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            {
                var_35 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48961)))), ((~(((((/* implicit */int) arr_43 [i_15] [i_16])) & (((/* implicit */int) (unsigned short)4946))))))));
                var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_44 [i_16] [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_16] [i_15])))), ((+(((/* implicit */int) arr_44 [i_16] [i_15]))))));
                arr_48 [i_15] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_43 [i_15] [i_16])))) ? (((/* implicit */int) arr_43 [(_Bool)1] [(short)2])) : (((((/* implicit */int) ((short) var_5))) << ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)50023)) : (((/* implicit */int) (_Bool)1)))) - (49998)))))));
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) (unsigned short)13689);
}
