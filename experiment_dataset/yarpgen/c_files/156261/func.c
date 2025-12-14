/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156261
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
    var_17 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((_Bool) var_0)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [(_Bool)1] = (_Bool)1;
            arr_6 [i_0] = ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) var_16)));
        }
        arr_7 [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = (_Bool)0;
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_3] = var_16;
            arr_16 [i_2] [i_3] [i_3] = (!(arr_8 [i_2] [i_2]));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_23 [i_5] = (_Bool)0;
                        arr_24 [i_5] [i_6] = arr_9 [i_2] [i_4];
                        arr_25 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    }
                } 
            } 
            arr_26 [i_2] [i_4] = arr_8 [i_2] [i_2];
        }
        arr_27 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))) | (((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0)))) ^ (((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_31 [i_2] [i_2] [i_7] = (_Bool)1;
            arr_32 [i_2] [(_Bool)1] = ((_Bool) ((((/* implicit */int) max((arr_30 [i_2] [i_2]), ((_Bool)1)))) <= ((-(((/* implicit */int) (_Bool)1))))));
            arr_33 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))) | ((~(((/* implicit */int) ((_Bool) var_12)))))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_38 [(_Bool)1] |= ((/* implicit */_Bool) (~(((/* implicit */int) max((var_1), (var_12))))));
        arr_39 [i_8] = (_Bool)0;
        arr_40 [(_Bool)0] = ((_Bool) max((max(((_Bool)1), ((_Bool)1))), ((!(var_11)))));
    }
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
}
