/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1794
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
    var_11 = ((/* implicit */unsigned char) 201326592U);
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((long long int) 201326604U);
                var_14 -= ((/* implicit */_Bool) 3U);
                var_15 = var_6;
            }
        } 
    } 
}
