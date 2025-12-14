/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162991
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = var_3;
                arr_4 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_7))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_2);
}
