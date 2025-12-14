/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159654
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
    var_17 = ((/* implicit */signed char) max((var_17), (var_10)));
    var_18 = var_10;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                arr_6 [i_0] = var_7;
            }
        } 
    } 
}
