/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142825
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min(((((!(var_3))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))), (((/* implicit */int) ((_Bool) ((_Bool) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) ? (((((/* implicit */int) var_4)) << (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                var_19 = ((/* implicit */_Bool) max((var_19), (arr_1 [i_3 - 1])));
                arr_11 [i_1] [i_2] [i_1] = ((_Bool) arr_0 [i_1 - 1] [i_1]);
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_20 *= ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_15 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) + (0U))))))) / ((~(((/* implicit */int) (_Bool)1))))));
            }
            var_21 = 2607083481U;
            var_22 = arr_6 [i_1 - 2] [i_2 - 1];
            var_23 = ((_Bool) (_Bool)0);
        }
        var_24 = ((/* implicit */_Bool) ((arr_13 [i_1 - 1] [i_1 - 2] [i_1]) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2])))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((var_15) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5]))))));
        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_5] [i_5] [i_5] [i_5])))));
        var_27 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 1; i_8 < 7; i_8 += 4) 
                    {
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5])) * ((((((_Bool)0) || (var_12))) ? (((/* implicit */int) ((4294967275U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!((_Bool)0))))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (arr_7 [i_7] [i_7])));
                        arr_27 [i_6] [i_7] [i_8 - 1] = var_15;
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_6] [2U] [i_7] [2U] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_29 [i_5] [(_Bool)1] [i_5] [(_Bool)1] [i_5] [i_5] [i_5]), (arr_1 [i_5])))), (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 23U))))) : (((/* implicit */int) (_Bool)1))));
                            arr_31 [i_5] [i_6] [i_7] [i_6] [i_9 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [(_Bool)1] [i_7] [i_8 + 4] [i_9]))))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_29 [(_Bool)1] [i_9] [i_9] [i_6] [i_9 - 1] [i_9 - 1] [i_9 - 1])) ^ (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_6] [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                            arr_32 [i_5] [i_6 - 1] [i_7] [i_6] [i_9 - 1] = (_Bool)0;
                            var_30 = ((/* implicit */_Bool) min((var_30), (arr_13 [i_5] [i_6 - 1] [12U])));
                            var_31 *= ((/* implicit */unsigned int) arr_3 [i_6]);
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_32 -= var_9;
                            var_33 = ((/* implicit */_Bool) var_8);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_5] [i_7 - 1] [i_7]))));
                            var_34 = (!((_Bool)1));
                            var_35 = ((/* implicit */_Bool) ((arr_14 [i_6 - 1] [i_8] [i_6 - 1] [i_8 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_5] [i_6] [i_7] [i_8 + 1]))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_36 *= ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1))))));
                            arr_43 [i_5] [i_6] [i_7] [i_8] [(_Bool)1] [i_7] = var_2;
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (_Bool)0))));
                            var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_6] [i_7 - 1])), (((arr_10 [i_5] [i_5] [i_6] [i_7 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)))));
                            var_39 = ((/* implicit */_Bool) arr_8 [i_6 - 1] [i_7 - 1] [i_8 + 3] [i_12 - 1]);
                        }
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_46 [i_6] = ((/* implicit */unsigned int) (!(var_12)));
                        arr_47 [i_5] [i_5] [(_Bool)1] [i_7] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) min((var_3), ((!(((/* implicit */_Bool) var_1)))))))));
                        arr_48 [i_6] [i_6] [i_13] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_5] [i_7]))) : (var_8)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_24 [i_13] [i_6] [i_6] [i_5]))))));
                        var_40 = var_3;
                    }
                    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) 
                    {
                        var_41 = var_10;
                        arr_52 [i_6] = ((/* implicit */_Bool) 317731989U);
                    }
                    var_42 = ((/* implicit */unsigned int) max((var_42), (var_1)));
                    arr_53 [i_6] = ((/* implicit */_Bool) ((arr_28 [i_6]) ? (((arr_23 [i_6] [i_7 - 1]) ? (((/* implicit */int) arr_41 [i_5] [i_5] [i_7 - 1] [i_6 - 1] [i_6])) : (((arr_21 [i_5]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_29 [i_5] [(_Bool)1] [i_6 - 1] [i_6] [8U] [i_7] [10U])))))) : ((+(((/* implicit */int) var_12))))));
                    arr_54 [i_6] [i_6] [i_7] = ((((/* implicit */_Bool) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) arr_41 [i_5] [i_6] [i_6 - 1] [i_7 + 1] [i_5]))))) && (var_7));
                }
            } 
        } 
    }
    var_43 = var_10;
    var_44 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1))));
    var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
}
