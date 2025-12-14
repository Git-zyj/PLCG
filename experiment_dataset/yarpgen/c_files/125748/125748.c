/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_10;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_22 = ((var_11 ? (arr_1 [i_0 - 2] [i_0 - 2]) : (arr_0 [i_0 - 1] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_23 = (((arr_5 [i_0 - 1] [i_0 - 1] [1]) ? (arr_5 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 3])));
            arr_6 [1] [3] = (((((var_15 ? var_4 : var_18))) ? var_7 : (((arr_4 [0] [0]) ? var_16 : var_5))));
        }

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_2] [12] = ((((210 ? 8 : var_6)) != (((var_17 != (arr_2 [12]))))));
            arr_12 [i_0] [i_2] [i_2 + 2] = var_17;
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_24 = (var_14 & var_2);
            var_25 = (((318104114 ? -6 : (arr_8 [8] [i_0]))));
            arr_15 [i_3] = (arr_3 [i_3] [i_3 + 1] [i_3]);
            arr_16 [i_3] = var_2;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_26 = var_3;
                            var_27 -= ((var_18 ? (arr_18 [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_13 [i_5])));
                            arr_23 [1] [i_3] [i_3] [11] [i_6] = (((~var_1) ? var_19 : var_6));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_27 [i_7] = ((14 ? -13 : 1677383105));
            var_28 = -1177492781;
            var_29 = (!var_18);
        }
        arr_28 [i_0 - 3] [i_0] = var_2;
    }
    var_30 = -241044351;
    var_31 = (max((((var_12 ? ((var_1 ? var_2 : var_18)) : var_1))), ((924297603 ? ((17 ? 109 : 318104132)) : (-2712 * 63)))));
    #pragma endscop
}
