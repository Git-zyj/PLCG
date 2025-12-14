/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [3] = (max((((!(arr_1 [i_0])))), (max(var_0, (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = (((-32 + 2147483647) >> (-9223372036854775788 - -9223372036854775806)));
                        arr_11 [i_0] [i_0] [i_0] [7] [i_0] = 9223372036854775787;

                        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_19 = (((((arr_7 [i_0] [i_1] [i_4 + 2]) < var_10)) ? (arr_13 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1] [i_4 - 2] [5]) : (var_3 >= var_9)));
                            var_20 = (min(var_20, (((((var_7 ? (arr_6 [i_0] [6] [i_0] [i_4]) : var_1)) / var_12)))));
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_5] [i_2] [i_1] [i_5] = 2082437954;
                            var_21 = ((var_11 >= (arr_0 [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_22 = ((var_11 ? (arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 3]) : var_9));
                            arr_19 [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_0]);
                            arr_20 [i_0] [i_6] [i_6] [i_3] [i_6] = (((arr_17 [i_0] [i_0] [i_0] [i_3 + 3] [i_3 - 1] [i_1]) ? (arr_17 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_6]) : var_11));
                            var_23 -= (arr_10 [i_0] [6] [i_2] [i_6]);
                        }
                        var_24 ^= (14039 > var_13);
                    }
                }
            }
            arr_21 [i_0] = var_13;
            var_25 = (~-22);
            arr_22 [i_0] = (~var_0);
        }
        var_26 = (max((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -82));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_27 = (arr_23 [i_7]);
        arr_26 [i_7] = (((((var_7 << (97 - 89))) ^ 2061686543)));
        arr_27 [i_7] = -22919;
        var_28 = (((((((max(var_9, -29))) ? 21 : var_14))) ? (arr_23 [13]) : (((arr_23 [i_7]) ? (arr_23 [i_7]) : (arr_23 [i_7])))));
    }
    #pragma endscop
}
