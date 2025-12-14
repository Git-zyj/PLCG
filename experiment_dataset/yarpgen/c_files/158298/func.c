/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158298
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
    var_14 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (~((-2147483647 - 1))));
                arr_6 [i_0] [i_1] [19ULL] = ((/* implicit */_Bool) ((unsigned short) max((var_3), (var_8))));
            }
        } 
    } 
}
