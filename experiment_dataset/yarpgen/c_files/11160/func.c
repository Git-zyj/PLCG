/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11160
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_6))));
                    arr_7 [i_0] [i_1] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) min(((unsigned char)124), (((/* implicit */unsigned char) arr_0 [i_1] [(short)9]))))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_12 &= max((((short) var_9)), (((short) ((short) var_10))));
}
