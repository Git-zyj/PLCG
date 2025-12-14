/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13015
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
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = var_14;
                var_20 = arr_3 [i_0] [i_1 - 2];
                arr_5 [i_0] = ((unsigned int) 2047U);
                var_21 &= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1 - 2] [i_0 - 2])) & ((~(((/* implicit */int) arr_2 [i_0 - 1] [14]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_11);
}
