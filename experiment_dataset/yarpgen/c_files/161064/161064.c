/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_8);
    var_11 = var_3;
    var_12 = min(9223372036854775784, 171218921215737825);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (((((((min(-171218921215737845, -171218921215737815))) ? (arr_1 [i_0] [i_0 - 2]) : -171218921215737826))) ? var_0 : (arr_3 [i_0])));
        var_13 = 3238575565324523820;
        arr_5 [i_0] = (((~var_4) == (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_14 = (max(var_14, (arr_2 [i_2 - 3] [11])));
                            var_15 = var_8;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [10] [7] [i_1] [i_6] [i_4] [i_1] = ((26002 ? 52398 : 52398));
                            arr_24 [i_6] [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] = (arr_13 [i_1] [i_2 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_16 *= (arr_21 [i_4] [i_4] [i_3] [i_3 + 2] [8] [i_1] [i_4]);
                            var_17 = ((var_3 ? (arr_27 [11] [i_1] [i_1] [i_2] [i_1] [i_1]) : var_5));
                        }
                        arr_29 [i_1] [i_1] [9] [i_3] [i_4] = var_8;

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_18 = (~var_1);
                            var_19 = (arr_21 [i_1] [i_1] [i_3 + 3] [i_4] [14] [14] [2]);
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_36 [i_1] [i_1] [i_4] [i_1] [15] [i_1] [i_1] = (arr_28 [i_3 + 3] [i_2] [i_3 + 3] [i_2 + 1] [i_9] [i_1] [i_1]);
                            var_20 = 15208168508385027784;
                            arr_37 [i_1] [i_1] [i_2] [i_1] [i_3] [i_4] [i_9] = (!50583);
                            arr_38 [i_1] [i_2] [i_1] [i_4] [i_2] = arr_32 [i_2 - 2] [i_3 + 1] [i_1] [i_3] [i_3 + 1];
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_21 = (arr_7 [i_1] [8]);
                            var_22 = 268434432;
                            var_23 = 9223372036854775807;
                        }

                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_24 = var_1;
                            var_25 = var_1;
                            arr_45 [13] [i_2] [i_3] [13] [i_1] [i_3] = ((-(arr_30 [i_11 + 2] [4] [2] [i_1] [i_11])));
                            arr_46 [i_1] [10] [0] [i_11] [i_1] = ((arr_43 [i_1] [i_1] [i_3] [i_4]) ? (arr_2 [i_3] [i_3]) : ((~(arr_33 [i_1] [14] [i_3 - 2] [i_4] [i_1] [i_4]))));
                        }
                        for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_26 = (-171218921215737815 <= 171218921215737825);
                            var_27 = var_1;
                        }
                        for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_52 [i_13 - 1] [i_1] [i_3] [i_1] [15] = (arr_25 [3] [3] [i_3] [3]);
                            var_28 = var_7;
                            arr_53 [14] [i_1] [i_3 - 2] [i_4] [5] = (arr_48 [i_1] [i_3 - 2] [i_2 - 1] [i_2 - 1] [i_13 + 1]);
                        }
                    }
                }
            }
        }
        var_29 = (((~65535) ? -9223372036854775806 : 723460015));
    }
    for (int i_14 = 2; i_14 < 12;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_30 = min(var_1, 9223372036854775807);
            var_31 = -48189;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        {
                            arr_67 [3] [i_15] [i_16] [i_17] [i_15] = (arr_34 [i_17] [i_17 - 1] [i_17 - 1] [12]);
                            arr_68 [i_17] [i_15] [i_16] [i_17 + 1] [10] [i_18] = ((~(arr_11 [i_18] [i_17] [i_16])));
                        }
                    }
                }
            }
            arr_69 [i_14] [i_14] [i_15] = (max(((+(((arr_12 [4] [i_14 + 1] [i_15] [i_15]) ? var_6 : 16319302042951306428)))), ((max((arr_57 [i_14] [i_14]), var_9)))));
        }
        arr_70 [i_14 - 1] = 3080490103;
        arr_71 [0] = (arr_43 [10] [2] [10] [i_14 - 2]);
    }
    #pragma endscop
}
