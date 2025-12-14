/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_10 != 4294967295);
    var_15 = (min(var_15, (((var_12 ? ((min(29334, 1))) : 20435)))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = ((-4 ? var_3 : (arr_0 [9])));
        arr_3 [i_0] = ((~((~(arr_1 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = var_6;
            arr_6 [i_0] = (max(var_2, (arr_2 [i_0])));

            /* vectorizable */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                var_18 = (((arr_7 [i_2 - 2] [i_0] [i_0 - 1]) ? (arr_7 [i_2 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_2 - 3] [i_0] [i_0 + 2])));
                var_19 = ((((var_4 ? 2047 : 1828884018)) < (var_11 || 13)));
                var_20 -= -15217;
                arr_10 [2] [4] [i_0] [i_2] = (arr_0 [i_1]);
            }
            arr_11 [i_0] = 9930;
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_21 = (arr_13 [i_0 - 1]);
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = (((arr_15 [i_5] [i_6]) - (arr_16 [i_4 + 1] [i_3 + 1] [5] [i_0 + 3] [i_3] [8])));
                            var_23 = (min(var_23, (!45100)));
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] = (var_5 << (var_0 + 46));
            arr_21 [i_0] = -47;
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_24 = (max(var_24, ((max((max(6674921038281158741, (2121703756 * 13026245353858758294))), (((-6008 ? -253 : (((arr_13 [17]) + 36220))))))))));
                        var_25 = (~var_3);
                    }
                }
            }

            for (int i_10 = 4; i_10 < 19;i_10 += 1)
            {
                arr_33 [i_0] [i_7] [i_10] = (arr_27 [i_0] [15] [i_0]);
                arr_34 [i_0] [12] [i_10] = ((!((min((arr_17 [i_0] [i_0 + 3] [i_7] [i_7 + 1] [i_10] [i_10]), (min(83, -25283)))))));
                arr_35 [6] [i_0] [i_10] = (max(var_4, (arr_2 [i_0])));
            }
            var_26 -= (max(var_8, ((max(1, 83)))));
        }
    }
    var_27 = ((min((var_5 + 47), var_1)));
    var_28 = 2;
    #pragma endscop
}
