/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 212;
    var_16 ^= -9054590;
    var_17 = var_10;

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, 71));
        arr_4 [i_0] = (-32767 - 1);
        var_19 = -1;
        var_20 = (max(var_20, -1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = -1;
            var_22 = 142;
            var_23 = 12;
            var_24 = 1;
        }
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_25 = 3869234953;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_26 = 0;
            var_27 = 1;
            arr_13 [i_2] = -12771;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] [i_2] [i_2] = 17672;
            var_28 = 140780171;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_29 -= 1872203521;
                            var_30 = (min(var_30, 39030));
                            var_31 = (max(var_31, 665723139));
                        }
                    }
                }
            }
            var_32 = -8948299621347713853;
        }
        var_33 = 7333;

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            var_34 = 233;

            /* vectorizable */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_30 [i_2] [i_2] = 262143;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_35 *= (-32767 - 1);
                            var_36 = (-32767 - 1);
                            var_37 -= 9223372036854775807;
                        }
                    }
                }
            }
            for (int i_12 = 4; i_12 < 16;i_12 += 1)
            {
                var_38 ^= -1558362832;

                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    var_39 = 16776192;
                    var_40 = -9223372036854775807;
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_41 ^= 164;
                    var_42 = (max(var_42, 212));
                    arr_43 [i_2] [i_12] [i_8] [i_8] [i_2] = 17685;
                }
            }
            /* vectorizable */
            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                var_43 = 65523;
                arr_46 [i_2] [i_15] [i_15 - 2] [i_15] |= 546205672;
                var_44 ^= 1871222097;

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_45 = (-9223372036854775807 - 1);
                    var_46 = 16405;

                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_47 = (max(var_47, 16776192));
                        arr_54 [i_2] [i_15 - 1] [i_16] [i_17] = 39042;
                        var_48 = 26;
                        arr_55 [i_2 - 1] [i_8] [i_15] [i_16] [i_2] = 1871222114;
                    }
                }
                for (int i_18 = 2; i_18 < 14;i_18 += 1)
                {
                    var_49 = 0;
                    arr_60 [i_2] [i_2] [i_15] [i_18 + 3] = 64082;
                }
            }
        }
    }
    for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            var_50 = -15709;
            var_51 -= 1;
        }
        for (int i_21 = 1; i_21 < 14;i_21 += 1)
        {
            var_52 = 16421;
            arr_68 [i_21] = 8064;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 14;i_23 += 1)
                {
                    {
                        var_53 = 169;
                        arr_74 [i_19 - 2] [i_21 - 1] [i_22] [i_21] [i_23 + 1] [i_21] = 255;
                    }
                }
            }
            arr_75 [i_21] [i_21] = 255;
        }
        /* vectorizable */
        for (int i_24 = 1; i_24 < 16;i_24 += 1)
        {
            var_54 = 23;

            for (int i_25 = 2; i_25 < 14;i_25 += 1)
            {

                for (int i_26 = 2; i_26 < 16;i_26 += 1)
                {
                    var_55 = 64082;
                    arr_84 [i_19 - 1] [i_24 + 1] [i_25] [i_25] = 2423745189;
                }
                arr_85 [i_19 - 2] [i_25] = 1;
            }
            for (int i_27 = 1; i_27 < 16;i_27 += 1)
            {

                for (int i_28 = 0; i_28 < 17;i_28 += 1) /* same iter space */
                {
                    var_56 = 4294967295;
                    var_57 = (max(var_57, 1));
                }
                for (int i_29 = 0; i_29 < 17;i_29 += 1) /* same iter space */
                {
                    var_58 = 25;
                    var_59 = 1;
                    var_60 = 166;
                }
                var_61 = 16776192;
            }
            var_62 = -7458506174511483871;
        }
        arr_94 [i_19 - 2] = 467459064;
        var_63 = 1;
    }
    #pragma endscop
}
