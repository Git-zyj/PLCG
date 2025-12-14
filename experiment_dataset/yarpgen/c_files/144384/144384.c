/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_20 = (min(var_20, -1262000598));
            var_21 = (((var_3 ? 1262000590 : var_3)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((max(((var_7 ? var_14 : var_11)), (max(var_6, 28171))))) ? 61678128 : (min(var_16, var_6)))))));
                        var_23 ^= var_16;
                        arr_9 [i_0] [i_2] [i_1 + 1] [i_0] = (max(((max(254, -15509))), -687131521));
                        var_24 = (((((min(var_16, var_16)) ? var_2 : ((max(var_7, var_16)))))) ? 1 : (~var_19));
                        arr_10 [i_0] [11] [i_1] [i_0] = -301850487;
                    }
                }
            }
            var_25 = 35936;
        }
        var_26 = (min(var_26, ((((48777508 ? 1 : -1262000598))))));
    }
    var_27 = (~687131521);
    var_28 = ((~((((min(var_5, 179))) ? var_0 : ((var_17 ? var_0 : 3797789887))))));
    #pragma endscop
}
