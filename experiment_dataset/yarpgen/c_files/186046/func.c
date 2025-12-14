/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186046
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 *= ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_3] [i_3 + 1])) + (((/* implicit */int) (short)10222))));
                    var_17 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                    arr_10 [i_1] [i_2] [i_1] = arr_7 [i_1];
                }
            } 
        } 
        var_18 -= ((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_19 += ((/* implicit */short) arr_0 [i_1]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) max((arr_6 [(short)5] [i_4] [(short)5]), (((/* implicit */short) max((arr_0 [i_4]), ((_Bool)0))))));
        arr_15 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))) | (max((((/* implicit */int) var_9)), ((~(((/* implicit */int) arr_4 [(_Bool)1]))))))));
    }
    var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((short) (short)-24872)))))));
}
