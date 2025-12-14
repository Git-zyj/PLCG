/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (min((min(((min(var_11, var_4))), (var_4 / var_8))), var_7));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_14 = (max(var_14, -var_2));
                arr_7 [i_0] [i_0] [i_1] [i_2] |= -var_10;
                arr_8 [i_0] [i_1] [0] = var_8;
            }
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_3] [i_0] [i_4] = var_3;
                    arr_14 [i_3] [i_1] [i_1] [i_4] [10] = var_8;
                    arr_15 [i_3] [i_4] [i_3 + 1] [i_4] = (var_7 & var_0);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_15 *= (var_1 << var_5);
                    arr_18 [i_0] [i_0] [i_3] [i_3] = -var_10;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, (var_0 ^ var_7)));
                    arr_22 [i_1] [i_3] = (~var_2);
                    arr_23 [i_0] [i_1] [i_0] [20] [0] &= (~var_7);
                }
                var_17 += (~var_5);
            }

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_18 = (var_3 ^ var_2);
                    var_19 = (1 / var_2);
                    arr_30 [i_0] [i_0] [i_0] [i_0] = (~var_7);
                }
                for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9 - 1] |= (var_9 || var_2);
                    arr_35 [i_0] [i_0] [i_1] [i_7] [i_9] = (var_10 & var_0);
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_20 = (var_0 ^ var_5);
                        arr_41 [i_0] [i_1] [8] [i_0] [i_1] [i_11] = var_8;
                        arr_42 [i_0] [i_1] [i_0] [i_10] [i_11] [i_0] = (~var_0);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_21 = (var_2 | var_11);
                        var_22 = (min(var_22, (~var_2)));
                        arr_45 [19] [i_1] [i_7] [1] [i_12] = var_11;
                    }
                    var_23 = (~var_6);
                    arr_46 [i_0] [i_1] [i_1] [i_7] [i_0] = -var_10;
                    arr_47 [i_0] [i_0] [i_7] [i_1] [i_0] [5] = (~(var_7 * var_11));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_24 = (min(var_24, var_8));
                            arr_53 [i_7] [i_7] [i_7] [i_7] [i_1] |= (~var_8);
                            var_25 = (min(var_25, -var_8));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
            {
                arr_57 [i_0] [i_0] [1] [i_15] = (~var_9);
                var_26 -= var_0;
            }
        }
        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
        {
            arr_61 [i_16] [i_16] [i_0] = (min((~var_1), (((var_7 & var_3) << (var_8 + 1170410786215382376)))));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                arr_64 [i_17] [i_17] = var_5;
                arr_65 [i_17] [i_16] [i_0] = (~var_0);
                var_27 = (max(var_27, (var_10 + var_8)));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                var_28 = (var_3 ^ var_4);

                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    arr_70 [i_0] [i_0] [i_0] [20] [i_19] = -1;
                    var_29 = (min(var_29, var_10));
                }
            }
            var_30 = (min((min(0, 36481)), ((min(var_6, var_4)))));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
    {

        for (int i_21 = 3; i_21 < 20;i_21 += 1)
        {
            var_31 = (max(var_31, (var_10 ^ var_2)));
            var_32 = (~var_2);
            var_33 = (!var_1);
        }

        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                arr_79 [i_23] [i_23] [i_23] [i_22] = var_11;
                arr_80 [i_23] [i_22] [i_22] [i_20] &= (((~var_6) & var_9));
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    {

                        for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                        {
                            var_34 -= (!var_4);
                            arr_88 [i_20] [i_22] [18] [i_20] [i_20] &= (~var_0);
                        }
                        for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
                        {
                            var_35 = (max(var_35, (((var_8 || var_2) / var_9))));
                            var_36 = (!var_3);
                            arr_91 [0] [i_24] = (var_5 || var_0);
                        }
                        arr_92 [i_20] [i_20] [14] [i_24] = var_5;
                    }
                }
            }
            arr_93 [1] [i_20] [i_20] = (~var_6);
            arr_94 [i_20] [i_22] = var_9;
        }
        arr_95 [i_20] = (var_6 / var_0);
        var_37 = (!-1);
    }
    #pragma endscop
}
