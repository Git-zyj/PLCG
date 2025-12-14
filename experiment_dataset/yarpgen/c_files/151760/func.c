/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151760
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15576)) ? (((/* implicit */int) (short)15576)) : (((/* implicit */int) (short)-15581))));
                var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-9))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_12);
    var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) 2771432943U))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_9))));
}
