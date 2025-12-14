/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 *= ((-223718933197179483 ? -96 : 50));
            var_20 = var_12;
            arr_4 [i_0] [i_0] = (((!53709) == 1));
            var_21 = (~15);
        }
        var_22 = (((var_3 <= -96) ? var_17 : -77));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [10] [i_3] [i_0] [i_0] [i_0] [i_0] = -0;
                        var_23 *= (((var_1 + 2147483647) >> (var_18 + 2560602629611359121)));
                        var_24 = var_11;
                        arr_15 [i_0] [1] [i_0] [i_0] = ((var_15 && 1) != -3);
                    }
                }
            }
        }
    }
    var_25 = 65535;
    var_26 = (0 > (((((var_12 ? 15 : 68)) >> ((-39 ? var_4 : -37))))));
    var_27 = var_11;
    var_28 *= var_3;
    #pragma endscop
}
