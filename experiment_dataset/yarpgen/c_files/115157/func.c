/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115157
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
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) var_13);
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0 - 2] [i_0 + 2]) ? (((/* implicit */unsigned int) var_8)) : (var_13)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0 + 1])), (var_2)))) : (((((/* implicit */_Bool) 1599921614U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) var_5);
}
