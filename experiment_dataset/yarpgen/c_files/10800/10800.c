/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_16 = (arr_7 [i_0] [i_1] [22] [i_3] [i_4]);
                            }
                        }
                    }
                }
                var_17 = ((((((arr_11 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_0]) ^ (arr_1 [i_1 - 1] [i_1 + 2])))) == (((arr_11 [i_1 - 1] [i_1 + 2] [6] [i_1] [i_1] [i_0]) ? var_5 : 1))));
                var_18 |= var_7;
                var_19 = (min(var_19, (((((1033761506 ? (var_0 + var_12) : var_9)) | -0)))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_20 = (!7416232473908669065);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_21 = (min(var_21, (4095 - 18204586432715686393)));
                        arr_24 [i_5] [10] [i_7] [i_5] [0] [i_8] = 242157640993865223;
                        var_22 = 2903566855661029135;
                        var_23 = 117440512;
                    }
                }
            }

            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                var_24 = (arr_18 [i_5] [i_5] [i_9]);
                var_25 = (((((((arr_23 [i_5] [i_6] [i_6] [i_5]) <= 242157640993865218)))) - ((1277884801862186734 << (((arr_17 [3] [i_9]) - 1355003232))))));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                var_26 = (min(var_26, -var_12));
                var_27 = ((39629 ? 2305843009213693951 : 18204586432715686392));
                var_28 = var_10;
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_34 [i_5] [i_5] [i_11] = ((18204586432715686384 ? (arr_25 [i_5] [i_5] [i_5]) : -1244446735));
                var_29 = -14596;
                var_30 += var_1;
            }
            arr_35 [i_5] [i_5] [16] = ((7376010747943134751 ? 243 : 1));
        }
    }
    var_31 &= var_9;
    var_32 = var_11;
    #pragma endscop
}
