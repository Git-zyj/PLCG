/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_1 ? (max(var_11, var_4)) : (~var_14))) * 0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = ((((min(-24, var_4))) ? ((((min((arr_1 [i_0 - 1]), -3))) ? 1 : ((~(arr_0 [i_0] [i_0]))))) : var_8));
                    var_22 = ((var_19 * ((((((arr_3 [i_1]) ? (arr_6 [i_1]) : (arr_0 [i_0] [i_1])))) ? var_7 : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    var_23 = var_16;
                }
            }
        }
    }
    var_24 += ((max(var_8, ((-24 ? -30719 : var_13)))));
    var_25 = (((var_17 ? (max(-2382688251940390086, var_14)) : var_8)));
    #pragma endscop
}
