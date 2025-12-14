/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -26119;
        arr_3 [i_0] = 16153;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_19 ^= -31381;
                                arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] &= -12178;
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_2 + 1] [i_2] = -5171;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_24 [i_6] [i_2] [i_2 - 2] [i_3] [i_3] [i_6] [i_7 + 2] &= -22880;
                                var_20 = (max(var_20, 16135));
                                var_21 = -16297;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = -5171;
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_28 [i_8] [i_8] = -460;
        var_22 = -17536;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {

        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            var_23 = (min(var_23, 4536));
            var_24 *= -30439;
        }
        for (int i_11 = 4; i_11 < 15;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {

                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    arr_40 [i_9] [i_11 - 2] [i_12] [i_13] = 6203;
                    var_25 = -13450;
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            arr_45 [i_14 - 1] = 32750;
                            var_26 = -3396;
                            var_27 += 17681;
                        }
                    }
                }
                arr_46 [i_12] &= -9027;
                arr_47 [i_9] = 17681;
            }
            var_28 = 17686;
            var_29 *= 248;

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_50 [i_9] [i_11 - 4] [i_11] = 15;
                arr_51 [i_9] [i_16] = -5262;
                var_30 ^= -16267;
            }
            for (int i_17 = 3; i_17 < 16;i_17 += 1)
            {
                var_31 = (-32767 - 1);
                arr_54 [i_17] [i_17] = 10550;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_32 = 4536;
                            var_33 = -13555;
                            var_34 = (max(var_34, 21146));
                        }
                    }
                }
            }
        }
        for (int i_20 = 4; i_20 < 15;i_20 += 1) /* same iter space */
        {
            arr_62 [i_20] [i_9] [i_9] = (-32767 - 1);
            arr_63 [i_9] [i_9] [i_20 - 3] = 127;
        }

        for (int i_21 = 0; i_21 < 17;i_21 += 1)
        {
            var_35 = (max(var_35, 17531));
            arr_66 [i_21] [i_9] = -19324;
            var_36 += -17675;
        }
    }
    #pragma endscop
}
