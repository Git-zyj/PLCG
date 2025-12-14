/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_10 = (((((max(var_9, var_8)) ? var_5 : (arr_1 [i_0 + 1])))));
        var_11 = ((!(((-1 ? -1 : (arr_2 [i_0 - 2] [i_0 + 3]))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_12 *= 131;
            var_13 = var_4;
            var_14 = var_4;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = (arr_1 [i_0 + 3]);
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 *= ((13 ? -12 : -1));
                        var_17 = -57;
                    }
                }
            }
            arr_14 [i_2] [i_2] = (((((arr_1 [i_0 + 1]) + (arr_2 [i_0 + 3] [i_0 + 1])))) ? ((7 ? 65530 : (arr_2 [i_0 - 2] [i_0 + 3]))) : ((-19 ? (arr_2 [i_0 + 2] [i_0 + 1]) : (arr_2 [i_0 - 3] [i_0 - 1]))));
            var_18 = var_6;
            var_19 = (arr_12 [i_0] [i_2] [i_0 - 3] [i_2]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_0] [i_5] = (((-(arr_5 [i_0 - 3] [i_0]))));
            var_20 = (((arr_9 [i_0 + 3]) * -1));
        }
    }
    var_21 *= ((((((((var_8 ? var_0 : var_9))) ? var_6 : (min(var_8, var_1))))) ? var_3 : var_5));
    var_22 = ((((min(var_4, -3657))) ? (min(var_9, (-17 & var_9))) : var_7));
    var_23 += ((var_7 ? -var_3 : var_3));
    #pragma endscop
}
