/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_16 = (max(var_16, -0));

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    var_17 |= -var_2;
                    var_18 = var_13;
                    arr_12 [i_2] [i_2] [i_2] [i_1] [15] = -6017191487588987628;
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_19 = 65524;
                    var_20 &= var_1;
                    arr_17 [i_2] = -var_9;
                }
                var_21 = var_13;
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_20 [i_0] [1] [i_5] = 2;

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_22 = -255;

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_23 = (((var_13 != var_4) ? var_0 : var_14));
                        var_24 = 17148;
                        arr_26 [i_5] [i_7] [i_7] [3] [i_7] [i_7] = var_9;
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_25 = (min(var_25, var_15));
                        var_26 = (~25);
                    }
                    var_27 = (var_15 && 17148);
                    arr_31 [i_5] [11] [i_5] [11] [i_6] = 2;
                }
                var_28 = (max(var_28, (1 < 2)));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_29 = 1;

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_30 = (min(var_30, (((14146429766563378420 ? var_9 : var_5)))));
                    var_31 *= (var_0 - var_2);

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_32 = var_10;
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -var_15;
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_33 = 14146429766563378420;
                    var_34 = (max(var_34, 4300314307146173195));
                    arr_42 [15] [0] [i_1] [i_0] = var_8;
                }
            }

            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                var_35 = (min(var_35, (((var_9 > var_10) / (1073741823 != 0)))));
                var_36 = (17148 ^ var_7);
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_37 = var_11;
                var_38 = 5;
                arr_50 [i_0] [i_1] [i_1] = ((((var_12 >> (14146429766563378427 - 14146429766563378400)))) ? -1 : var_7);
                arr_51 [i_0] [i_0] [1] [i_14] = 17158;
            }
            var_39 = 1;
            var_40 = (max(var_40, var_6));
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
        {
            var_41 = 17149;
            var_42 = (var_7 > 17159);
        }
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            var_43 = var_14;
            var_44 = (max(var_44, (((((3858585943 ? var_5 : var_0))) && (!1)))));
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_45 = 4300314307146173199;
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_46 = (min(var_46, (51 || -14146429766563378417)));
                            var_47 = 65523;
                        }
                    }
                }
            }
            arr_66 [i_0] [i_0] [i_17] = 1;

            for (int i_21 = 1; i_21 < 21;i_21 += 1) /* same iter space */
            {
                var_48 = var_4;
                var_49 = (var_1 + 48362);
            }
            for (int i_22 = 1; i_22 < 21;i_22 += 1) /* same iter space */
            {
                var_50 = ((var_13 >> ((((var_7 ? var_9 : var_9)) + 1928923191))));
                var_51 = (59247 == 1);
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 20;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        {
                            arr_79 [i_0] [17] [i_17] = var_12;
                            var_52 = 240;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_25 = 4; i_25 < 21;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    {
                        arr_88 [i_0] [i_0] [17] [i_0] = 34;
                        arr_89 [i_0] [i_0] [i_0] [i_0] = var_3;
                        var_53 = 1;
                        var_54 = 1;
                        var_55 += (!4300314307146173182);
                    }
                }
            }
        }
        var_56 = 31804;
    }
    var_57 ^= var_5;
    var_58 = (1 > var_6);
    #pragma endscop
}
