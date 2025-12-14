/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_0] = (min((min(var_3, var_0)), var_4));
                    var_10 = var_9;
                }
            }
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_11 = (min(((min(var_2, var_4))), var_9));
            var_12 = var_6;
            var_13 -= (min((min(var_2, var_8)), var_2));
            var_14 *= (min((min(var_7, var_4)), var_4));
        }
        var_15 = (min(((min(var_4, var_3))), var_8));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_16 = (min((min(var_9, var_1)), ((min(var_4, var_8)))));
        var_17 = var_7;
        var_18 = (min((min(var_0, var_6)), (min(var_1, var_8))));
        var_19 = var_5;
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        var_20 &= var_4;
        arr_20 [0] = (min((min(var_9, var_7)), ((min(var_3, var_1)))));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_21 = (min(var_9, ((min(var_0, var_2)))));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_22 = var_1;
                            arr_30 [1] [i_7] [1] [i_8] [i_9] = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 = var_7;
                            var_24 = (min((min(var_0, var_7)), var_3));
                            var_25 = (min((min(13, 9)), (min(var_2, var_3))));
                            var_26 = var_9;
                            var_27 = (min(((min(1, 1))), (min(var_8, var_2))));
                        }
                    }
                }
            }

            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_28 = (min(((min(var_5, var_4))), (min(1, 18))));
                            var_29 = var_2;
                        }
                    }
                }
                arr_44 [1] [8] [i_12] |= (min((min(var_3, var_8)), (min(var_2, (min(var_3, var_7))))));
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_30 = var_4;
                arr_48 [1] [i_6] [i_15] [i_5] = (min((min(var_7, var_8)), ((min(var_4, var_4)))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_31 = var_2;
                var_32 = var_2;
                var_33 = var_5;
                arr_52 [i_5] [i_6] [1] [1] = var_0;
            }
            var_34 = (min((min(var_4, var_1)), (min(var_6, var_6))));
            var_35 -= (min(var_8, var_7));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            var_36 = (min((min(var_8, var_8)), var_2));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 10;i_20 += 1)
                    {
                        {
                            var_37 = (min(((min(var_8, var_1))), (min(var_9, var_3))));
                            arr_64 [0] [10] [i_18] [i_18] [i_20] = var_0;
                            var_38 = (min((min(var_3, var_1)), ((min(var_8, var_8)))));
                        }
                    }
                }
            }
        }
        for (int i_21 = 2; i_21 < 7;i_21 += 1)
        {
            var_39 = var_2;
            var_40 |= (min(var_1, var_4));
        }
        var_41 = min((min(var_9, var_0)), ((min(var_0, var_7))));
    }
    var_42 = var_5;
    var_43 *= var_1;
    var_44 = (min(var_4, (min((min(var_1, var_2)), var_1))));
    #pragma endscop
}
