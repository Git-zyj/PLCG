/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] |= ((var_5 ? ((var_9 ? var_13 : var_4)) : var_8));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 -= (((11653 ? 12873 : 1)));
            arr_5 [i_1] [i_0] = ((var_10 ? var_9 : var_15));
            arr_6 [i_0] [i_1] &= -var_10;
        }

        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            arr_10 [4] [i_2] [i_2] = ((11665 ? -23464 : -5490474327190172246));
            arr_11 [i_0] [i_0] [i_0] &= var_17;
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_20 += var_3;
            var_21 += (((8401950662105324569 ? -27121 : 27120)));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            arr_16 [8] = var_6;
            arr_17 [i_0] = var_6;
        }
        arr_18 [i_0] = 1710348991298890010;
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_22 = var_15;

            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                arr_26 [4] [4] [i_6] [i_5] &= var_14;
                var_23 |= (((((var_14 ? var_9 : var_6))) ? ((var_15 ? var_7 : var_2)) : (~65535)));
            }
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_24 &= var_7;
                    var_25 -= var_9;
                    var_26 ^= var_9;
                }
                for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_5] [6] [6] [i_10] = (!var_18);
                    arr_35 [i_5] [i_5] [6] [i_5] [i_5] [i_5] &= var_15;
                    var_27 *= (((var_18 ? -2147483637 : var_13)));
                }
                for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    arr_38 [5] [i_8] [6] = 1;
                    var_28 ^= ((var_6 ? var_12 : -var_0));
                }
                var_29 |= var_1;

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_45 [i_5] [i_6] [i_8] [i_12] [i_12] = -var_9;
                        arr_46 [i_13] [0] [i_12] [i_8] [i_6] [i_5] [i_5] = ((-var_18 ? var_8 : var_0));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_30 = var_9;
                        arr_49 [i_5] [1] [i_14] = ((var_16 ? ((var_9 ? var_3 : var_10)) : (~var_6)));
                        var_31 = ((-8401950662105324579 ? 1907230627 : 1907230627));
                        arr_50 [i_5] [8] [i_6] [8] [8] [i_14] |= (((((2387736669 ? 26 : 1))) ? (~var_2) : var_3));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_32 *= var_0;
                        arr_53 [i_15] [i_12] [i_8] [1] [3] = var_5;
                        var_33 -= ((2387736668 ? 1 : 1));
                    }
                    arr_54 [i_5] [i_6] [i_8] = var_13;
                    var_34 -= var_17;
                }
                for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
                {
                    var_35 |= (((var_17 ? var_9 : var_14)));
                    var_36 = -var_14;
                }
                for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
                {
                    arr_61 [i_17] [3] [i_8 + 1] [i_17] = var_16;
                    var_37 = (((!var_14) ? ((var_13 ? var_9 : var_2)) : (!var_5)));
                }
                for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 1; i_19 < 8;i_19 += 1) /* same iter space */
                    {
                        arr_67 [i_5] [i_5] [i_8] [i_19] [i_18 + 1] [4] = (~var_9);
                        arr_68 [i_5] [i_19] [i_6] [i_6] [6] = (((((var_7 ? var_12 : var_12))) ? ((var_5 ? var_10 : var_15)) : (!var_5)));
                        var_38 -= ((var_18 ? -var_12 : var_17));
                        var_39 -= var_12;
                        var_40 += (~var_6);
                    }
                    for (int i_20 = 1; i_20 < 8;i_20 += 1) /* same iter space */
                    {
                        var_41 *= (!var_1);
                        var_42 -= (((((var_5 ? var_15 : var_14))) ? ((var_10 ? var_9 : var_1)) : ((var_11 ? var_9 : var_8))));
                        var_43 = (min(var_43, var_3));
                    }
                    arr_71 [i_18] [i_8] [i_8] [7] [i_6] [i_5] = var_15;
                    arr_72 [i_5] [i_18] [i_6] [i_6] [i_8] [i_6] = var_7;
                }
                var_44 = var_17;
            }
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_77 [i_21] [8] = (~var_0);

            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                arr_81 [i_22] [i_5] [i_5] = ((!(((1 ? 1 : 6)))));
                var_45 |= var_1;
            }
        }
        var_46 ^= var_9;
    }
    var_47 = var_13;
    #pragma endscop
}
