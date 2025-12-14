/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165660
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_1] = arr_2 [i_0];
                var_13 = ((/* implicit */unsigned int) min((var_13), (((unsigned int) 2833962294U))));
                arr_8 [i_0] [i_0] [i_0] = (((~(arr_2 [i_1 - 1]))) * ((~(var_4))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (min((var_8), (min((arr_3 [i_1] [i_1 + 3]), (6U)))))));
            }
        } 
    } 
    var_15 ^= 12U;
    var_16 = var_8;
}
