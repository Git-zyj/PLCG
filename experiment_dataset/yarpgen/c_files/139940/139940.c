/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_10 = -var_4;
            var_11 = 7547217229491963308;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] = var_2;
                        arr_14 [i_0] [i_2] [i_3] [i_2] [i_2] = (-0 + var_3);
                    }
                }
            }
            var_12 = var_3;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_17 [i_0] = (~0);
            arr_18 [i_0] [i_5] [0] = (arr_5 [i_0] [i_5] [i_0]);
        }

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_13 = (-8132 ^ var_5);
            arr_22 [i_0] [i_0] [i_0] = var_0;
            var_14 = var_7;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_29 [i_0] [i_7] [i_7] [10] [i_7] = var_8;
                        var_15 = -112;
                    }
                }
            }
            var_16 = var_2;
            arr_30 [i_0] [i_0] [i_7] = var_6;
            var_17 = (~var_7);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_18 = 31;
            var_19 = 1;
            var_20 = (i_0 % 2 == 0) ? (((-(((!((((arr_6 [i_0] [i_0] [i_10]) << (93 - 92)))))))))) : (((-(((!((((arr_6 [i_0] [i_0] [i_10]) << (((93 - 92) - 1)))))))))));
            var_21 = (arr_5 [i_0] [i_10] [i_10]);
        }
        var_22 = var_7;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_23 = -1498714187;
        arr_37 [i_11] [i_11] = var_8;
        var_24 = var_7;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        var_25 = (var_2 || var_8);
        arr_41 [i_12] = (~var_0);
        var_26 = (~var_4);
        var_27 = -1827418398;
    }
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        var_28 = 217;

        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_29 = var_1;
                            var_30 = ((var_4 ^ (arr_51 [i_17] [i_14] [i_15] [i_16] [i_17])));
                            arr_52 [i_13] [i_17] = -38029;
                            var_31 = -8119;
                        }
                    }
                }
                var_32 = -24867;
            }
            var_33 = var_5;
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_34 = -var_9;
            var_35 = (arr_48 [i_13 + 2] [i_13] [i_13 + 1] [i_13 + 1]);
            arr_55 [i_18] [i_13 + 4] = var_5;
        }
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 21;i_22 += 1)
                    {
                        {
                            arr_70 [i_20] [i_20] [i_20] = (max(var_9, var_3));
                            var_36 = var_0;
                            var_37 = 2147483647;
                            var_38 = 2147483647;
                        }
                    }
                }
            }
            var_39 = (min(10969446966129638474, var_7));
        }
    }
    var_40 = var_4;
    var_41 = var_2;
    #pragma endscop
}
