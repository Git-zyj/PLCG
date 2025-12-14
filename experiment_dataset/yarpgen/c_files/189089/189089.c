/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 *= 1030381179083094085;
                        var_14 = (max(var_14, -100));
                        var_15 = 1;
                        arr_13 [1] [i_1] [i_2] [i_3] = 1;
                    }
                }
            }
        }
        arr_14 [i_0] = 24396;
        var_16 *= 8466828220684775248;
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_17 = (min(var_17, 0));
        arr_18 [i_4] = 29;
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = 1;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = (min(var_18, 102));
                    var_19 = (max(var_19, 127));
                }
            }
        }
        arr_27 [i_5] |= 1;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_20 = 32687;
        var_21 = (min(var_21, 8466828220684775248));
        arr_31 [i_8] = 117;
    }
    #pragma endscop
}
