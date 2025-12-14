/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176157
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
    var_20 = var_16;
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) / (var_1)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */short) (signed char)32)))))))) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
                    var_23 = ((/* implicit */int) var_11);
                    var_24 = (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0 - 1] [i_2 + 1]), (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
