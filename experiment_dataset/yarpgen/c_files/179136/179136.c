/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (var_8 ? (arr_0 [i_0]) : (arr_0 [i_0]));
        var_16 = (min(var_16, ((((arr_2 [i_0]) ? 6 : (arr_2 [i_0]))))));
        var_17 = var_4;
        var_18 = var_14;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                var_19 = (-1254580779 == 1250917627);
                arr_11 [i_0] [5] = ((((var_1 ? var_9 : var_3))) ? (((arr_4 [21] [i_1] [i_1]) << (((arr_4 [i_0] [i_1] [i_2]) - 12090848124759081501)))) : (((arr_5 [i_0] [i_1]) | (arr_2 [2]))));
            }
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [20] [i_0] [i_0] = (((6 ? var_9 : var_1)));
                    var_20 += (((arr_15 [i_0] [i_1] [i_3 + 1] [i_4]) ? (arr_15 [2] [i_0] [i_0] [i_0]) : var_11));
                }

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    var_21 = var_5;
                    var_22 = ((((7 == (arr_4 [i_0] [i_0] [i_3 - 1]))) ? 13 : ((((arr_15 [i_5] [i_3 - 1] [i_1] [i_0]) == 9078)))));
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    {
                        var_23 = (var_15 + 39);
                        var_24 = (arr_8 [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 3]);
                    }
                }
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_25 = var_3;
                arr_28 [i_0] [5] [i_1] [i_8] = (var_12 + var_0);
                var_26 -= (arr_13 [4] [i_8]);
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_27 = (arr_37 [i_10] [i_11] [i_10]);
                            arr_43 [16] [i_10] [i_10] [i_13 - 2] = ((((214 ? (arr_37 [i_10] [i_10 + 3] [21]) : (arr_4 [i_11] [i_10 + 3] [i_11]))) != (3 != -6631032430594887822)));
                        }
                    }
                }
            }
            var_28 -= (((((var_6 ? var_3 : 0))) ? ((6631032430594887834 ? 65219 : (arr_38 [21] [1] [i_9 - 1] [0]))) : (arr_41 [i_9 + 1] [i_9 + 1])));
        }

        for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_46 [i_9 - 2] [i_14 + 3] [i_14 - 1] = (var_13 != var_7);
            var_29 = ((-9120702606948207986 ? (((var_15 ? (arr_7 [i_9] [i_14 + 2]) : 1160783784))) : (arr_37 [18] [18] [18])));
            var_30 = (2145089161 - 9223372036854775807);
        }
        for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
        {
            arr_49 [14] [i_15 + 1] [i_15] = ((((((arr_44 [i_15] [11]) ? (arr_6 [i_9 + 1] [i_9 - 2] [i_9 - 2]) : (arr_39 [i_9] [i_15 + 2] [i_15])))) ? (9223372036854775807 | 17465024498445049147) : 9223372036854775807));
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_31 = ((var_5 == ((((arr_15 [i_9 - 1] [i_16 - 1] [i_17 + 1] [i_9 - 1]) == 10141)))));
                            arr_57 [i_9 + 1] [i_15] [i_15] [i_17 - 1] = (arr_41 [i_9 - 1] [i_9 + 1]);
                            arr_58 [i_15] [i_15] = ((var_4 ? var_5 : -9223372036854775804));
                            var_32 = (arr_51 [i_15] [i_17 + 1] [i_15]);
                        }
                    }
                }
            }
            var_33 = (min(var_33, (((5033032569881159606 != (arr_40 [i_9] [i_9 + 1] [8] [i_15 + 3] [8] [i_9]))))));
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            arr_61 [i_9 - 2] [21] [i_9 + 1] = (((arr_52 [i_19]) ? -457519962 : (arr_37 [i_19] [i_9 - 1] [i_19])));
            var_34 -= var_3;
        }
    }
    var_35 = (max(((((var_10 ? var_6 : var_4)) + var_2)), ((min(var_7, (var_1 != var_9))))));
    var_36 = var_7;
    #pragma endscop
}
