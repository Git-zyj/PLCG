/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133247
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
    var_10 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 *= ((/* implicit */long long int) arr_5 [i_1] [i_0]);
                var_12 = (~(((/* implicit */int) arr_0 [i_0] [i_0 + 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (_Bool)1);
}
