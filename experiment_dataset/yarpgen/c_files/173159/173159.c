/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_6));
    var_14 = (min((~var_7), var_12));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] [i_0] = var_4;
                    arr_10 [i_0] [i_0] [i_2] = ((-((((var_2 ? var_0 : (arr_8 [15] [i_2] [i_2] [i_2]))) * (((arr_0 [i_0]) ? (arr_5 [i_0] [13] [13]) : (arr_7 [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_15 = (((((-var_6 ? (max(var_7, var_10)) : (((var_0 ? var_11 : var_6)))))) ? (max(var_4, 805306368)) : (((((10175853544038163601 ? 147 : var_3)) != var_1)))));
    #pragma endscop
}
