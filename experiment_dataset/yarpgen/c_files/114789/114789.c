/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((1959888038568454210 / (((703390920 << (4231261730 & 12))))));
                var_15 = (~-703390920);
            }
        }
    }
    var_16 = var_0;

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_17 = (9223372036854775800 / -985729977);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    {
                        var_18 &= (arr_9 [i_2] [i_2] [i_2]);
                        arr_16 [i_2] = (((arr_7 [i_2]) < (var_3 * var_11)));
                        arr_17 [i_2] = (arr_11 [i_2] [i_3] [i_4] [i_5]);
                        arr_18 [i_2] = var_8;
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = (-var_14 >> (((((18446744073709551615 == 18446744073709551598) - var_3)) + 56330)));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((~(arr_11 [i_6] [i_6] [i_6] [i_6]))));
        var_19 = var_6;
        arr_24 [i_6] = (arr_12 [i_6] [i_6] [i_6] [i_6]);
        arr_25 [i_6] [i_6] = ((arr_9 [i_6] [i_6] [i_6]) & (((var_1 << (((arr_9 [i_6] [i_6] [i_6]) - 504531511))))));
    }
    var_20 = ((var_6 / (((~(var_13 | var_5))))));
    var_21 = ((~(var_7 | var_9)));
    #pragma endscop
}
