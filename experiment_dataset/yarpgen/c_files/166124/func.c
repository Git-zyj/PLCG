/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166124
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
    var_18 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = var_8;
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((260046848U) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_6 [i_1 - 1] [i_0]))) : (5811039987105266758LL)));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (+(((((((/* implicit */int) var_1)) <= (var_6))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) max((var_6), (var_0))))) : (((/* implicit */int) var_16))));
    var_22 = ((/* implicit */int) var_8);
}
