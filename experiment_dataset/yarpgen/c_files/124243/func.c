/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124243
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
    var_13 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1 + 3])) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-57)))))));
                var_15 = ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-57)) || (((/* implicit */_Bool) (signed char)-80))))));
            }
        } 
    } 
}
