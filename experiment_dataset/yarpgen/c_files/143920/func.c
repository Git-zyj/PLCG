/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143920
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
    var_13 = var_0;
    var_14 = (_Bool)1;
    var_15 = (_Bool)1;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = var_10;
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_2 [i_1]))) - (((/* implicit */int) var_4))));
        var_18 += arr_6 [i_1] [i_1];
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = arr_6 [i_1] [i_2];
                    arr_14 [i_2] [i_2] [i_2] [i_2] = (!(((_Bool) arr_10 [i_1] [i_2] [i_2] [i_3])));
                }
            } 
        } 
    }
    var_20 &= (_Bool)0;
}
