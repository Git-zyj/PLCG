/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] = (!var_5);
                        var_12 = ((1 + -1) ? (arr_2 [i_0]) : var_8);
                    }
                }
            }
        }
        var_13 = (-31734 * 18287);
    }
    var_14 = (max(0, ((((596128940 ? 28 : 65535))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            {
                var_15 = var_10;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_21 [i_4] [i_5] [i_6] [i_6] [i_6] [i_7] = (!1736);
                            var_16 = ((-0 && (((-(arr_17 [i_6]))))));
                        }
                    }
                }
                var_17 = (var_2 >> 17);
            }
        }
    }
    #pragma endscop
}
