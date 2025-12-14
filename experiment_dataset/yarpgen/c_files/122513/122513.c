/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((max((min(var_7, var_3)), var_4)) >= ((max((var_9 == var_5), (max(6311425915751008664, var_7)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (((((var_3 ? var_9 : (arr_1 [i_0] [i_0]))) << 1)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_12 ^= var_0;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = (((arr_12 [i_0] [i_1]) == (arr_4 [i_4] [i_1])));
                            var_14 = (min(var_14, 18446744073709551615));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_15 = var_4;
                            var_16 = (min(var_16, 1));
                            arr_18 [i_6] [8] [i_6] [i_6] [i_1] = var_3;
                            arr_19 [i_1] [i_5] [i_2] [i_0] [i_1] = -6311425915751008665;
                        }
                    }
                }
                var_17 ^= (arr_13 [6] [6]);
            }
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_18 &= ((((min((((!(arr_2 [i_0] [i_0])))), var_9))) ? ((((6311425915751008673 > (max(5019106444021191898, var_9)))))) : (((arr_10 [4]) ? ((var_9 ? var_5 : var_6)) : ((min(-6311425915751008664, 1)))))));
                            var_19 ^= var_6;
                        }
                    }
                }
                var_20 = (max(var_2, ((var_1 ? (var_8 == var_4) : var_9))));

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_21 = ((((max((min(6311425915751008665, -3)), (var_6 || var_7)))) <= (max((max(var_5, var_9)), var_4))));
                    arr_29 [i_1] [i_1] [i_1] [i_10] = (min(((max((127 & var_7), (((var_3 ? (arr_7 [i_1]) : var_5)))))), var_6));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_1] [20] [i_11] = ((+(((var_0 + var_4) ? ((var_4 ? var_7 : var_2)) : ((var_1 ? var_7 : var_0))))));
                        var_22 ^= 31368096031876861;
                        arr_33 [i_0] [8] [1] [i_0] [i_1] = var_6;
                        var_23 = var_3;
                    }
                    var_24 = (max(var_24, ((((!var_2) && ((max(-var_4, (18446744073709551609 * 1)))))))));
                }
                arr_34 [i_0] [i_0] [i_1] [i_1] = (arr_4 [i_0] [i_1]);
            }
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_25 = (max(var_25, var_2));
                    var_26 ^= (~1);
                    var_27 ^= -1;
                }
                var_28 = (max(var_8, var_7));
                arr_42 [i_1] [i_1] [i_1] [10] = (arr_20 [i_0] [i_0] [i_0] [i_1]);
            }
            var_29 = (max(var_29, (min((max(((min(var_5, var_2))), (((arr_39 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_8)))), ((max(4035225266123964416, var_8)))))));
            arr_43 [i_1] [i_1] = (((var_3 << (var_7 - 4227006920))));
            arr_44 [i_1] = ((min((((var_2 ? var_4 : var_4)), var_3))));
            arr_45 [i_1] [i_0] [i_1] = max(var_6, (((~var_3) - (max(var_2, var_3)))));
        }
    }
    for (int i_14 = 3; i_14 < 7;i_14 += 1)
    {
        var_30 ^= (!(~var_0));
        arr_49 [i_14] [i_14 - 2] = max((min((((~(arr_21 [i_14 - 3] [2])))), (var_6 | var_5))), var_6);
    }
    #pragma endscop
}
