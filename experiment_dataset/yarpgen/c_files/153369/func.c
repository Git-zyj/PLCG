/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153369
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
    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((_Bool) var_0))))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += (_Bool)1;
        arr_2 [i_0] = (_Bool)1;
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (arr_3 [(_Bool)0] [i_1])));
    }
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 |= ((_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
        arr_8 [(_Bool)1] [i_2] = ((_Bool) ((arr_5 [i_2]) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((-(((/* implicit */int) arr_1 [i_2] [i_2]))))));
        var_17 = arr_6 [i_2];
        var_18 += var_3;
        arr_9 [(_Bool)0] &= ((_Bool) (+(((/* implicit */int) ((_Bool) var_0)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_3] = ((_Bool) ((_Bool) (_Bool)1));
                    var_19 = var_2;
                    var_20 = ((_Bool) ((_Bool) (_Bool)1));
                    var_21 = (((+(((/* implicit */int) ((_Bool) var_4))))) < (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((_Bool) ((_Bool) arr_10 [i_3]));
                        var_23 &= ((/* implicit */_Bool) ((((_Bool) min((var_6), ((_Bool)0)))) ? (((/* implicit */int) (_Bool)1)) : (((((_Bool) var_8)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((arr_13 [(_Bool)1]) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))));
                        arr_26 [i_3] [i_4 + 1] [i_3] [i_3] = ((_Bool) (_Bool)1);
                        var_25 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (arr_11 [i_3] [i_7])));
                    }
                }
            } 
        } 
        arr_27 [i_3] = arr_23 [i_3] [i_3];
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), ((_Bool)1)));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((_Bool) arr_28 [i_8] [(_Bool)1]))))))));
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_30 [(_Bool)1] |= (_Bool)1;
        var_30 = ((/* implicit */_Bool) min((var_30), (((_Bool) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((_Bool) arr_3 [i_9] [i_9]))));
        var_32 = (_Bool)1;
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_17 [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_40 [i_10] [i_10] = ((/* implicit */_Bool) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1] [i_9])) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_17 [i_11] [i_10] [i_9])) : (((/* implicit */int) (_Bool)1))));
                    var_35 &= var_10;
                    arr_41 [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_36 += arr_33 [i_9];
    }
    var_37 &= var_6;
}
