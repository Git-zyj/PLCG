/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147679
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_1] = var_7;
                var_16 = ((unsigned short) ((unsigned short) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_15))));
}
