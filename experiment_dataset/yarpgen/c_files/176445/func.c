/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176445
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) var_8);
                var_14 += ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_5);
}
