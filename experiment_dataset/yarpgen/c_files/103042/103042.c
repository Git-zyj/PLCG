/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (!var_7)));
        var_14 += (!var_10);
        arr_3 [i_0] [i_0] = (!var_9);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 -= var_1;

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_16 = -var_10;
                    var_17 = (max(var_17, (!var_8)));
                    var_18 = (min(var_18, -var_10));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_1] [i_5] = var_6;
                        arr_18 [i_1] [8] [i_2] [i_3] [i_3] [i_3] [i_5] = var_4;
                        var_19 = var_12;
                        var_20 = var_3;
                        arr_19 [i_1] [i_2] [9] [3] = var_2;
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_21 = (--235);
                        var_22 = -var_2;
                    }
                }
                arr_23 [i_3] [0] [2] = var_2;
            }
            for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
            {
                var_23 = var_6;
                var_24 = var_0;
            }
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                var_25 = -1;
                var_26 = (min(var_26, (~var_3)));
                var_27 -= var_3;
                var_28 = (!var_5);
            }
            var_29 = -var_4;
            arr_31 [i_1] [i_2] = -1;
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_30 += var_11;

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_38 [i_1] [i_9 - 2] [i_1] = var_9;
                var_31 = var_10;
                var_32 = (max(var_32, -var_9));
                var_33 = var_5;
                var_34 = var_8;
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_35 = var_7;

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_36 = var_6;
                    var_37 = var_7;
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_49 [i_1] [i_9] [i_9 + 2] [i_11] [2] = var_5;
                    arr_50 [i_9] [i_11] [i_13] = var_6;
                    var_38 = var_9;
                    var_39 = (!var_7);
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_54 [4] = (!-20863);
                    arr_55 [i_14] [i_9] [1] = ((-((~(~2116523674)))));
                }
                arr_56 [i_1] [9] [i_11] [9] = 177;
                var_40 = (max(var_40, var_2));
            }
            /* vectorizable */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                arr_59 [i_15 + 2] [i_15] [i_1] = -var_5;
                arr_60 [i_1] [i_9] [i_15] = var_6;
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_41 = var_0;
            arr_63 [7] [i_16] [i_16] = var_11;
            var_42 = (!var_11);
        }
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
    {
        var_43 += (!var_8);
        arr_66 [i_17] = var_8;
        var_44 &= var_1;
    }
    var_45 = var_0;
    var_46 += var_12;
    #pragma endscop
}
