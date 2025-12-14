/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((~(arr_0 [i_0 - 2])));
                arr_5 [i_0] = -var_8;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((!(((arr_2 [i_2]) || -55950428832391118)))))));
                            var_20 &= ((-(min((arr_6 [i_0 + 3] [i_0 + 2] [i_0]), 40554))));
                            var_21 *= 24591;
                            arr_10 [i_3] [i_1] [14] [6] [i_2] [i_1] &= (min((arr_9 [i_2 - 2] [i_1] [0] [i_3] [i_0 + 1]), (((max(-21250, 1216752598))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_22 &= arr_13 [i_4] [i_4 + 2];
        arr_15 [i_4 + 2] [i_4 + 2] = (min((((((min(1, var_16))) - (arr_14 [i_4 + 4])))), (((-103 ? (arr_12 [i_4]) : var_14)))));
        var_23 = ((var_7 * ((((min(40549, (arr_0 [i_4])))) ? (103 * 24591) : (min((arr_0 [11]), 0))))));
    }
    var_24 = ((var_9 ? var_13 : var_16));
    #pragma endscop
}
