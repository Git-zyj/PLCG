/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181713
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
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2]))));
            }
        } 
    } 
    var_16 -= ((/* implicit */int) var_12);
    var_17 = min(((+(((unsigned long long int) var_11)))), (var_0));
}
