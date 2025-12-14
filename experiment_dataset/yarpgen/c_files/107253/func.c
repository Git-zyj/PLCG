/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107253
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_9)));
                arr_5 [i_0] [i_1] = arr_2 [i_0];
                var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 - 2] [i_1 + 3])))))));
            }
        } 
    } 
}
