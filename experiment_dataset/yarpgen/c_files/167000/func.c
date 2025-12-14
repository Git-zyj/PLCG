/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167000
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
    var_19 = ((/* implicit */_Bool) ((var_11) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
    var_20 = (_Bool)1;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 + 1])) ^ (((/* implicit */int) (_Bool)1))));
                        arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_1]))))));
                        arr_15 [i_3] [i_1] [i_1] [i_2] [i_2] [i_3 + 1] = ((_Bool) (_Bool)0);
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = var_14;
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_5] [i_4] [i_5] = (_Bool)1;
                            arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? (((/* implicit */int) max((arr_2 [i_2] [i_5]), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_4 - 1] [i_6] [i_6]) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_4 [i_0] [i_2])) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((((_Bool) (_Bool)0)), (max((var_13), ((_Bool)1)))))) : (((/* implicit */int) var_14))));
                            var_23 = ((/* implicit */_Bool) (((+(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)))))) >> (((/* implicit */int) (!((_Bool)1))))));
                            var_24 = (_Bool)1;
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 ^= ((/* implicit */_Bool) (((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_7])))) ^ (((/* implicit */int) (_Bool)1)))) >> (((var_17) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                            var_27 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_26 [i_2] [i_1])) : ((-(((/* implicit */int) var_3))))));
                            arr_31 [i_0] [i_7] [i_2] [i_7] = arr_6 [i_1] [i_7] [i_8];
                            arr_32 [i_8] [i_8] [i_7] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0]))));
                        }
                    }
                    var_28 = (_Bool)1;
                }
            } 
        } 
        arr_33 [(_Bool)1] = var_6;
        var_29 = ((/* implicit */_Bool) max((var_29), (arr_3 [i_0 - 1] [i_0] [i_0])));
        arr_34 [i_0] [i_0] = ((/* implicit */_Bool) max((((arr_0 [i_0 - 1]) ? (((/* implicit */int) (!(arr_7 [(_Bool)1] [i_0])))) : (((/* implicit */int) var_15)))), (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((min((var_10), (arr_25 [i_9] [(_Bool)1] [i_9]))) ? (((((/* implicit */int) arr_29 [i_9])) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_36 [i_9]))))));
        var_31 |= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9])) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                arr_50 [i_9] [i_12] = arr_3 [i_10] [i_12] [i_13];
                                var_33 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (!((_Bool)1))))))));
                                var_34 = ((/* implicit */_Bool) (((+(((/* implicit */int) ((_Bool) (_Bool)1))))) & (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_35 = ((_Bool) ((_Bool) ((var_16) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_9])))));
                    arr_51 [i_9] = var_12;
                    arr_52 [(_Bool)1] [i_10] [(_Bool)1] [i_11] &= var_7;
                    var_36 ^= (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) arr_37 [i_9] [i_9] [i_9])) ^ (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                arr_59 [i_14 - 1] = arr_10 [i_14] [(_Bool)1];
                var_38 ^= ((/* implicit */_Bool) (+(((((/* implicit */int) arr_35 [i_14 - 1])) ^ (((/* implicit */int) (_Bool)0))))));
                var_39 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_14] [i_14 - 1] [i_14] [i_14] [i_14] [i_14] [i_14])) ^ (((/* implicit */int) arr_11 [i_14] [i_14] [(_Bool)1] [i_15]))))));
                var_40 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
