/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15215
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
    for (long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (signed char)0);
                var_14 += ((/* implicit */signed char) ((((757631782) / (min((var_12), (((/* implicit */int) var_3)))))) / (min((((int) var_1)), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((var_11) ? (((/* implicit */int) var_8)) : (max((max((var_12), (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) var_12)))))));
    var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
}
