/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0 + 1] [i_0 + 3]) <= ((35 ? (~-249008454) : var_11))));
        var_20 = ((~(max(249008454, var_2))));
        var_21 = (((min(-249008454, 249008430)) < (arr_2 [i_0 + 1])));
        arr_5 [i_0 - 1] [i_0] = ((((var_15 ? 249008453 : var_14)) <= ((max((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0] [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (min(var_22, 74));
        var_23 = (max(var_23, ((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] = (!3803501702449928366);
        arr_9 [i_1] [i_1] = var_12;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_24 = (((~249008412) % (max(var_12, var_12))));
                        var_25 = min(-249008431, ((min((arr_14 [i_4] [i_1] [3] [i_4]), (max(-249008446, -249008430))))));
                    }
                }
            }
        }
    }
    var_26 = var_3;
    var_27 = (((((max(-40, 1)))) <= (max((((var_7 ? var_14 : var_8))), (max(var_15, var_14))))));
    var_28 &= ((var_18 % ((((max(-5, 11859838884525690912))) ? (var_17 * var_16) : var_6))));
    #pragma endscop
}
