/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157266
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
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1950131502U))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (signed char)11)) ? (411079660U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))))));
                var_17 -= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_2 [i_0]))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 1])) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
}
