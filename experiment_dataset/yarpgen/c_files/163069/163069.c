/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1782788054;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = ((arr_2 [5] [i_1] [i_1 - 1]) | (arr_3 [20] [17] [i_1 - 1]));
            var_15 = (arr_3 [2] [i_1 + 1] [i_1 - 1]);
            var_16 = (arr_1 [i_0]);
        }
        arr_5 [i_0] = (((24576 ? (~4294967275) : (-24577 + 1073741823))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 = (((((arr_8 [i_2] [i_3 - 1] [i_3]) / (arr_2 [i_3] [i_4] [i_5 - 3]))) > (max(((~(arr_17 [i_2] [i_2] [i_2] [i_5 - 1] [i_6] [i_6] [i_5 - 3]))), (10 > -1)))));
                            var_18 = ((max((-6894 / -468438777), 24562)));
                            arr_19 [i_2] [i_3 - 1] [i_4] [i_6] = ((!(((((arr_12 [i_2] [i_2] [i_2] [i_2]) > 1))))));
                            var_19 = (min(var_19, ((((((max(24576, 24594)) & (max(var_7, 6899)))))))));
                            var_20 = (min(var_20, ((((((-(3639408729 * 1)))) ? 0 : (min((var_13 % 24554), (arr_10 [i_4] [i_3] [i_5 + 1] [i_5]))))))));
                        }
                        arr_20 [8] [i_3] [i_2] = ((min((6878 / -24580), ((2143289344 ? 24554 : -6910)))));
                        var_21 = (((var_5 * (arr_14 [i_2] [i_2] [i_2] [i_5 + 1]))));
                        var_22 = -24555;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            arr_25 [i_2] [i_7] [i_4] [i_4] [8] [i_2] = (((((min((arr_16 [i_2] [i_3 - 1] [i_2] [i_3] [i_3] [i_8 - 2]), 24554)))) * (1 + 111029131)));
                            var_23 = ((~((((24554 < var_10) >= ((min((arr_17 [1] [i_3] [i_2] [i_3] [i_3] [5] [i_3]), 25259))))))));
                            var_24 = (min(var_24, (6895 ^ 24566)));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            var_25 ^= (~(arr_18 [i_2] [i_4]));
                            arr_28 [i_2] [3] [i_2] [i_2] [i_2] = ((arr_14 [i_9] [i_2] [i_2] [i_3 - 1]) - (arr_14 [i_9] [i_2] [i_2] [i_3 - 1]));
                        }
                        var_26 = (max(var_26, -5484));
                    }
                    var_27 = ((((min(-24571, (~1)))) ? (min((min(1306341078, (arr_22 [i_2] [i_3] [i_3] [i_2]))), ((24552 / (arr_22 [15] [i_2] [i_3] [i_2]))))) : var_12));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = (min((((var_9 ? 366 : 24560))), ((min(var_6, 5716090845564173550)))));
                        var_29 = var_10;

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_30 = (min(var_30, (arr_16 [i_2] [i_2] [i_11 - 1] [i_10] [i_10] [i_2])));
                            var_31 = ((-24548 & (arr_14 [i_2] [i_3 + 1] [i_2] [i_10])));
                            arr_34 [1] [i_4] [i_2] = 127;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 17;i_13 += 1)
            {
                {
                    var_32 = 4609;
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_46 [i_2] [i_2] [i_13] [i_2] [i_14 - 1] [i_15] = (min(((min(-24570, var_0))), (((((arr_7 [i_14 + 1]) + 2147483647)) >> (((arr_7 [i_14 + 1]) + 1525967204))))));
                                var_33 = (max(var_33, ((max((min(((-(arr_15 [i_15]))), ((min(-1555814747, 69))))), ((max((arr_32 [i_2] [i_2] [i_15]), (arr_32 [i_2] [i_14 - 1] [i_15])))))))));
                            }
                        }
                    }
                }
            }
        }
        var_34 = ((~(min(1098381491679215902, -895944374))));
    }
    #pragma endscop
}
