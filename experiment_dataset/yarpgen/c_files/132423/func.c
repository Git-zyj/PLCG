/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132423
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(max((((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
        arr_4 [i_0] = var_11;
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) (_Bool)0))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(_Bool)1])) >= (((/* implicit */int) var_0)));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) * ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_0]))))));
                    }
                } 
            } 
            var_18 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((_Bool) var_6);
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */_Bool) ((arr_25 [(_Bool)1] [i_7 - 1] [i_7 - 1] [i_7]) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                            var_21 -= ((_Bool) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)0)));
            var_23 -= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_24 = (!(arr_22 [(_Bool)1] [i_0] [i_0] [(_Bool)1]));
        }
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_25 *= arr_18 [i_0] [i_0] [i_10] [i_11];
                    arr_33 [i_0] [i_10] = (!((_Bool)1));
                    arr_34 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                    arr_35 [i_0] [i_0] = (!((_Bool)1));
                    arr_36 [i_0] [i_0] [i_10] [i_0] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_46 [i_13] [i_13] [(_Bool)1] [i_13] [i_13] = (_Bool)1;
                        arr_47 [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_17 [i_13] [i_13]))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((var_26), (((_Bool) arr_16 [i_12] [i_12] [(_Bool)1]))));
        arr_48 [i_12] [i_12] = var_6;
        var_27 ^= arr_30 [i_12] [i_12];
    }
    /* LoopSeq 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) || ((_Bool)1));
                                arr_64 [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_65 [i_16] [i_16] [(_Bool)0] [(_Bool)0] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) (-(((var_2) ? (((/* implicit */int) min((var_5), ((_Bool)1)))) : (((/* implicit */int) arr_54 [i_16]))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                arr_73 [i_16] [i_21] [(_Bool)1] = (_Bool)1;
                                arr_74 [i_16] [i_21] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
        arr_75 [i_16] = (!((_Bool)1));
        arr_76 [(_Bool)0] [i_16] &= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_29 [i_16])))) <= ((-(((/* implicit */int) (_Bool)0)))))) ? ((~(((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) : ((-(((/* implicit */int) arr_17 [i_16] [i_16]))))));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1)))))))))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) % ((~((-(((/* implicit */int) (_Bool)0))))))));
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_81 [i_24] [i_24] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))));
        arr_82 [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_80 [i_24])))) : (max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))), ((-(((/* implicit */int) (_Bool)1))))))));
        arr_83 [i_24] [i_24] = ((/* implicit */_Bool) (~(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_33 &= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_79 [i_24]) || (arr_79 [i_24])))) % ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        arr_84 [i_24] = arr_79 [i_24];
    }
}
