/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 >= ((-882402488 ? var_6 : var_3))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = -12966510909315060181;
                        var_15 *= (~var_4);
                    }
                }
            }
            var_16 = (arr_3 [i_0] [i_1] [i_0]);
        }
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            var_17 *= (((arr_1 [i_4 - 2]) <= ((((!(arr_4 [i_0] [14] [i_0])))))));
            var_18 = (min(var_18, var_4));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_13 [16] [i_5] [16] = max((arr_4 [i_5] [i_5] [i_0]), (arr_9 [i_0] [i_0]));
            var_19 = (((arr_12 [i_5]) ? (((arr_7 [i_5] [i_0] [i_0] [i_5]) * 65535)) : var_11));
        }

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_20 = var_3;
            arr_17 [i_0] [i_6] = 129;
        }
        arr_18 [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    var_21 = (arr_8 [i_0] [i_7] [i_0] [i_7] [i_7] [2]);
                    var_22 = (((arr_14 [i_8 + 1] [i_8 + 1] [12]) ? ((((arr_14 [i_8 + 1] [i_8 + 1] [6]) ? (arr_14 [i_8 + 1] [i_8 + 1] [0]) : (arr_14 [i_8 + 1] [i_8 + 1] [14])))) : (((arr_14 [i_8 + 1] [i_8 + 1] [6]) ? var_1 : (arr_14 [i_8 + 1] [i_8 + 1] [16])))));
                }
            }
        }
    }
    var_23 -= var_0;
    #pragma endscop
}
