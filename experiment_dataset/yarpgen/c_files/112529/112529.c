/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = 22204;
        arr_3 [i_0 - 1] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_14 = (min(var_14, (arr_5 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_13 [i_3] = 130;
                    arr_14 [0] [6] [i_3] [i_3] = (arr_12 [i_1 + 1] [i_1] [i_1] [i_1]);
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] = (~63488);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_15 *= ((var_3 && (arr_18 [i_1 + 3])));
                        var_16 = ((114 ? (((arr_17 [i_1] [i_4]) ? 245 : var_3)) : (133 * 138)));
                        arr_28 [i_1] [i_4] [i_5] [i_6] = (((138 / var_12) * (arr_11 [i_1 + 3] [1] [i_5 + 1] [1])));
                        var_17 -= var_11;
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            arr_32 [i_1] [i_7 + 1] [i_7] = 121;
            arr_33 [i_7] = ((var_1 ^ (var_10 > 873552607)));

            for (int i_8 = 4; i_8 < 8;i_8 += 1)
            {
                arr_36 [i_7] [i_7] [i_8] = (arr_6 [i_1 + 3]);
                arr_37 [i_1] [i_7] [i_7] = ((var_13 ^ (~118)));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_40 [i_9] = (((arr_15 [i_1 + 3]) << (((var_1 | 117) - 17522687602379840473))));
            var_18 -= (((arr_17 [10] [1]) ? var_11 : (arr_4 [i_1 + 3])));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                arr_46 [i_1] [i_1] [i_11 + 1] [i_11] = -3182;
                var_19 = (((arr_15 [0]) ? var_8 : ((var_10 ^ (arr_20 [i_11] [i_10] [i_1] [i_10])))));
                arr_47 [4] [i_10] [i_11] = 156;
            }
            arr_48 [i_1] = (((arr_29 [4] [i_10]) ? (arr_29 [10] [10]) : var_1));
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_53 [i_12] = (((arr_49 [i_12]) | (var_5 & var_13)));
        var_20 = 11827916073437227114;
    }
    var_21 = var_4;
    #pragma endscop
}
