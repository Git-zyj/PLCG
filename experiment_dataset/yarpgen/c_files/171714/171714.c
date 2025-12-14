/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_15 == ((((var_10 ? var_9 : var_7)) / (~var_9)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 -= var_2;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (var_1 ? ((((arr_1 [8] [i_2]) ? (arr_7 [11] [i_1 + 2] [i_2]) : (arr_1 [i_0] [i_0])))) : var_11);
                    var_20 = (((!52801) ? ((((((var_14 ? 52797 : var_12))) / -var_3))) : ((-(((arr_9 [i_1]) ? (arr_4 [i_0] [i_1]) : var_0))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_4] [i_4] = var_7;

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_4] = ((!(((((((arr_13 [i_4]) ? var_6 : (arr_13 [i_4])))) ? (((var_10 ? var_16 : (arr_18 [i_3] [i_4] [i_5] [i_4])))) : ((var_2 ? var_11 : 6157698301308622638)))))));
                        var_21 = (max(var_21, (arr_18 [i_3] [i_4] [i_5] [i_6])));
                        var_22 -= 12735;
                        var_23 = ((~(arr_11 [i_3 - 1])));
                        var_24 = var_4;
                    }
                }
            }
        }
        arr_20 [4] = 52811;

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_25 = (((((var_14 ? ((var_4 ? var_16 : var_16)) : (((!(arr_22 [16] [i_7] [i_3]))))))) ? var_5 : var_3));
            var_26 = ((52809 ? (arr_11 [13]) : var_1));
            arr_23 [i_3] = (-((var_1 ? (arr_22 [i_3] [i_7] [i_3]) : var_15)));
            var_27 -= (arr_12 [i_3] [i_7] [i_7]);

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_28 [i_8] [i_3 - 1] [i_7] [i_8] = (arr_26 [i_3] [i_8]);
                var_28 -= 220;
            }
        }
    }
    var_29 = var_4;

    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_30 = -var_6;
        var_31 = (max(var_31, (arr_29 [i_9])));
        var_32 = var_5;
    }
    #pragma endscop
}
