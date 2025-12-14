/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 % ((~(min(var_10, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 3] [i_2 - 3] = ((((max(((var_5 ? 1 : var_3)), (arr_0 [i_0 - 1])))) ? ((15719 ^ (max(var_11, var_3)))) : ((((!(16301 & 1604976395)))))));
                    arr_8 [i_1 + 4] [i_1 - 2] [i_1] [i_1] = -16302;
                    var_14 = (min(var_14, (((((var_2 < var_1) & ((((arr_6 [i_2] [i_2 - 3] [i_1 + 1] [i_0 - 2]) != var_1))))) <= -16300))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 = (var_0 || 463155983);
                        arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0] &= var_1;
                        arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] &= max((((arr_6 [i_0] [i_1 - 3] [i_2 - 1] [i_3]) ? (max(var_0, (arr_0 [i_0 - 1]))) : 17833)), (((-(max(1741398265, var_12))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_16 = 511;
                        var_17 = (((var_0 * (!-2121762418))));
                        var_18 = (max((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]), ((max(463155960, 463156001)))));
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
