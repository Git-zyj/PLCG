/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ^ (32767 + var_8)));
    var_12 -= (!var_4);
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 |= (var_7 * 10088);
        var_15 ^= (var_6 & var_8);
        arr_4 [i_0] = (max(10088, var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [i_1] [i_0] = (arr_6 [i_0]);
                        var_16 = -25465;
                        var_17 = ((!(arr_5 [i_2] [i_1])));
                        arr_15 [i_3] [i_2] [i_1] [i_0] = ((((((-32767 - 1) / (arr_12 [i_1] [i_2] [i_2] [i_1] [i_1] [i_0])))) ? var_10 : var_7));
                    }
                }
            }
        }
        var_18 -= 10088;
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = var_8;
        var_19 *= arr_17 [i_4 + 1] [i_4 - 1];
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_20 = var_6;
        var_21 = ((~(min(((~(arr_17 [i_5] [i_5]))), (var_7 | 9137)))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_22 -= -18881;
        var_23 = (!var_3);
    }
    #pragma endscop
}
