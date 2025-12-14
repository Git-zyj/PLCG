/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(((max(11, var_3))), ((min((arr_0 [i_1]), ((((arr_1 [i_0]) || 217))))))));
                var_14 = arr_5 [i_0] [i_0] [i_0];
                var_15 = ((max(217, (min(var_3, 2394904705)))));
                arr_6 [i_0] [i_0] = 28593;
            }
        }
    }
    var_16 = var_5;
    var_17 ^= max(((-(max(var_4, 536854528)))), (~-var_0));
    var_18 = (max(var_18, (((589062624 ? var_6 : ((max((max(38, var_2)), 39))))))));
    #pragma endscop
}
