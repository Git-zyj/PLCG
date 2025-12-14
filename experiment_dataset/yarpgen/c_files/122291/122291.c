/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = min((arr_2 [i_0]), (((var_11 > (arr_1 [18])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = ((-(((((var_6 ? var_11 : -582849153))) ? var_7 : (arr_2 [i_1])))));
            arr_5 [i_1] = (~32759);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_11 [i_0] [i_3] [i_3] = ((+(((!18446744073709551615) ? (((-123 + 2147483647) << (18446744073709551615 - 18446744073709551615))) : (!var_3)))));
                    arr_12 [11] [i_2] [i_3] [11] = ((!((min(387222816731215336, var_10)))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_0] [14] [i_3] [i_4] = (max(((((((arr_10 [i_0] [i_0] [i_3 + 2] [i_4]) - var_3)) == (~-582849153)))), var_7));
                        arr_17 [i_3] = (max((var_3 == var_3), (((arr_9 [i_4] [i_3 + 1] [i_2]) ? (arr_15 [i_0] [i_3 + 3] [i_3 + 3]) : var_0))));
                        arr_18 [13] [19] [i_3] [i_3] = ((+(max((1 - var_3), 57207))));
                        arr_19 [i_3] = (var_11 + -126);
                        arr_20 [9] [i_3] = (arr_8 [i_0] [i_2]);
                    }
                }
            }
        }
        arr_21 [i_0] = ((~((((!-1005069596) == 103)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = var_9;

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_14 = -var_4;
            arr_28 [i_6] [i_6] = (arr_13 [i_6]);
        }
        arr_29 [i_5] = ((~(arr_4 [i_5] [i_5] [i_5])));
    }
    var_15 = (((max(1211712199, var_8)) == (((var_7 > 0) * var_11))));
    var_16 = ((-(32767 >= var_0)));
    #pragma endscop
}
