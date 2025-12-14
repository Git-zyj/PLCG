/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16755
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
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */_Bool) (((~(arr_1 [i_0] [i_0]))) ^ (max((((/* implicit */int) arr_3 [9] [0] [i_1 - 1])), (var_4)))));
                var_21 = (!(((/* implicit */_Bool) var_2)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)31)))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) <= (var_2)))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_10))));
}
