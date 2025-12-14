/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? ((var_13 ? ((59 ? 0 : -1)) : var_5)) : (((!((min(31670, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [5] = var_9;
                    arr_10 [i_0] [i_1 - 2] [1] [i_2] = ((((((arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 3] [15]) ? var_10 : (arr_6 [i_2 - 1] [i_2] [i_2] [i_2])))) ? var_14 : 27589));
                    arr_11 [i_1] [i_1] = (11 || 20);
                    arr_12 [i_0] [i_1 + 2] [i_1] [i_2 - 3] = 64;
                    var_17 = 59;
                }
            }
        }
    }
    var_18 = (((0 & var_8) ? (var_11 * 0) : ((min(0, -1)))));
    var_19 = (max(var_19, var_1));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_20 = 678974239;
                var_21 = (((var_0 % (~-12))));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((min(var_9, (min((arr_17 [i_3 - 1]), var_13)))))));
                            arr_25 [i_3] [i_3] [i_5 - 2] [i_6] = ((max((arr_20 [i_3 - 1]), (arr_2 [i_3 - 1]))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = 10133;

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_31 [i_3] [13] [1] [i_8] = -22;
                        var_24 = (arr_17 [i_3 + 2]);
                        arr_32 [i_3] [i_3] [i_3 + 2] [i_3] = (var_10 | var_0);
                        arr_33 [i_3] [i_8] [i_7] [i_8] [i_3 + 1] [i_7] = (66 | -3);
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_3] = var_6;
                        var_25 = -59;
                        arr_37 [i_3] [i_3] [i_7] [i_3] = (arr_6 [i_3 - 1] [1] [i_3 - 1] [i_3 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_26 = ((~(arr_6 [i_3] [i_3 + 1] [i_3] [i_10])));
                        arr_42 [i_3] [i_4] [i_7] [i_3] = 65018;
                        var_27 = 5547;

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_28 = (((arr_1 [i_3 + 2]) <= var_15));
                            var_29 = (((arr_29 [i_3] [i_3 + 2] [1] [i_3] [13]) / (arr_29 [i_3] [i_4] [14] [i_10] [i_11])));
                            arr_46 [i_3] = (+-73);
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            var_30 = ((var_5 ? var_8 : var_13));
                            var_31 = (!1);
                            var_32 = (arr_30 [i_12 - 1] [i_12] [i_12] [i_12 - 2] [i_12] [i_12 - 1]);
                            var_33 = (min(var_33, (!0)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
