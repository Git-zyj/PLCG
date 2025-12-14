/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138597
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
    var_14 = ((/* implicit */_Bool) max((var_14), (var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [i_0]))));
                arr_5 [i_0] [i_0] [0ULL] = ((/* implicit */unsigned long long int) (+(var_3)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_11)))));
}
