/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 2] &= arr_5 [i_0] [i_1];
                var_18 = ((!(((0 / (-8684658913671432943 / -8684658913671432943))))));
                arr_8 [i_1 + 2] = ((((((var_4 ? var_7 : (arr_0 [i_0])))) ? (((arr_6 [i_1] [i_0]) ? (arr_3 [i_0]) : var_7)) : (((((arr_0 [i_0]) <= 65508)))))));
            }
        }
    }
    var_19 = ((((-((var_12 ? var_15 : var_11)))) * (((~var_0) ? (!var_3) : ((var_10 ? var_16 : var_0))))));
    var_20 += ((32755 ? 384 : 42885));
    var_21 = (min(var_21, ((((((((var_4 ? var_9 : var_17))) ? (max(var_0, var_5)) : var_1))) ? var_5 : ((((var_12 ? var_3 : var_1)) / var_6))))));
    #pragma endscop
}
