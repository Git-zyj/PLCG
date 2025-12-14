/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 -= (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_13 = (arr_0 [1] [1]);
            var_14 = (arr_7 [i_0] [i_0]);
            var_15 = 144;
            arr_8 [1] [8] [i_1] = var_10;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_16 &= (arr_2 [i_2]);
            arr_11 [i_2] = var_10;
        }
        var_17 = var_6;
        var_18 = var_8;
        arr_12 [1] = 1418;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 ^= 578875434;
        var_20 = var_4;
        arr_16 [i_3] [i_3] = 70368744177663;
        var_21 ^= -24658;

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_19 [15] [15] [i_4] = 56024;
            var_22 = -24658;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_22 [i_3] [i_3] |= 2715672045201181186;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_23 = -1;
                        arr_31 [i_5] [i_7] [i_5] [i_5] [i_5] = var_4;
                    }
                    var_24 &= var_2;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_36 [i_3] [i_3] [i_5] [i_3] [i_3] [i_3] = var_10;
                    var_25 = 255;
                }
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_26 = var_9;
                        arr_41 [i_3] [i_5] [i_6] [i_3] |= (arr_17 [1] [i_5]);
                    }
                    var_27 = (arr_32 [i_3] [i_5] [i_5] [i_5]);

                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_5] [i_5] = (arr_25 [i_5] [i_5] [i_6]);
                        var_28 = (min(var_28, -1));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_5] [i_6] [i_10] = (arr_21 [i_3] [2]);
                        var_29 = (arr_46 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        var_30 ^= (arr_30 [i_3] [8] [i_13]);
                        var_31 = (min(var_31, var_8));
                    }
                    var_32 = var_7;
                    var_33 = (max(var_33, (arr_35 [i_3] [i_3] [6] [i_3] [i_3] [i_3])));
                }
                var_34 = var_10;
            }
            var_35 += (arr_20 [i_3] [i_3]);
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_36 = 134217728;
        arr_52 [i_14] = -109;
        var_37 = (arr_40 [i_14] [i_14] [i_14] [5] [i_14] [i_14]);
        arr_53 [i_14] [6] |= (arr_20 [i_14] [i_14]);
    }
    var_38 |= var_3;
    #pragma endscop
}
