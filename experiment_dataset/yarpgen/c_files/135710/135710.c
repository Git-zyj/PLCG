/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 *= (((~1) ? ((var_1 ? ((var_18 ? var_16 : var_4)) : ((41 ^ (arr_1 [i_0] [i_0]))))) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (max((arr_2 [i_0] [i_0]), (((arr_2 [i_0] [i_0]) | 1))));
        var_21 = (((arr_0 [i_0]) ? ((-22 ? var_18 : (max(var_18, (arr_1 [i_0] [i_0]))))) : -8794844082612938995));
        var_22 = (arr_3 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] = (((max(((4294967271 ? 1 : 0)), (arr_6 [i_0] [i_0] [i_0]))) / (arr_1 [i_2 + 1] [i_0])));
                    var_23 = (arr_2 [i_2] [i_1]);
                    var_24 *= (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_25 = (arr_13 [i_3]);
        var_26 = (min((((arr_13 [i_3]) ? (arr_13 [i_3]) : (arr_13 [i_3]))), ((((max((arr_13 [5]), var_19)) > (50928 >= var_8))))));
        var_27 = min(29927, ((~(((arr_12 [i_3] [i_3]) ? var_15 : (arr_13 [4]))))));
        arr_14 [i_3] [i_3] = (arr_13 [i_3]);
    }
    var_28 = (~var_17);
    var_29 = var_17;
    var_30 = var_13;
    var_31 = ((var_12 * (((max(var_14, var_13))))));
    #pragma endscop
}
