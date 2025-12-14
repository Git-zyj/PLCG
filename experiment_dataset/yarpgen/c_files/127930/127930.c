/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (935508754 + 75)));
    var_16 |= (var_1 != var_5);
    var_17 ^= var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = var_11;
                        var_19 = (arr_0 [i_0] [i_2 - 1]);
                        arr_9 [i_0] [5] [5] [i_3] = (max(3902548673342701634, 0));
                        arr_10 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (-(var_6 % var_1));
                    }
                }
            }
        }
        var_20 *= (arr_2 [i_0]);
        arr_11 [i_0] [i_0] = ((-((-100 ? -3 : 3205727715))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((!(arr_5 [i_4] [6] [i_4] [i_4])));
        var_21 *= -var_13;

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_18 [i_4] = (((arr_13 [i_4]) ? var_0 : ((var_13 + (arr_6 [19] [19] [i_5] [19])))));

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_23 [i_4] [i_5] [0] [0] |= (((((var_13 ? 1162017473 : -4897615635985883947))) < (((arr_14 [7]) ^ (arr_0 [10] [10])))));
                arr_24 [i_4] [4] [4] = (arr_13 [i_6]);
                var_22 = (((arr_6 [i_5] [i_6] [i_5] [i_4]) <= var_8));
                arr_25 [i_4] [i_4] [i_4] = (arr_6 [i_4] [i_5] [i_6] [i_4]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_23 ^= var_14;
                            var_24 |= (!var_11);
                            var_25 = 3373761381;
                        }
                    }
                }
            }
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                var_26 = (min(var_26, (((((-3902548673342701610 ? 3038280802 : var_12))) ? (arr_1 [i_4] [i_5]) : (var_11 / -100)))));
                arr_33 [i_4] [i_5] [i_5] [22] = (((75 / 3742684899) >= -100));
                var_27 = (min(var_27, (arr_1 [i_4] [i_4])));
            }
            arr_34 [i_4] [i_5] [i_5] = ((var_6 + (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])));
            var_28 = var_1;
        }
        var_29 = ((((((arr_16 [i_4] [i_4]) < var_13))) <= -96));

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_39 [i_4] = (-66 || -1775571383638764830);
            arr_40 [i_4] [i_4] = (var_6 + (-127 - 1));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_30 = (arr_30 [i_13 - 1] [i_13 + 1]);
                            var_31 = (((!511) || var_5));
                            var_32 |= -3902548673342701634;
                        }
                    }
                }
            }

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                arr_55 [20] [i_10] [i_4] [i_4] = (((((((arr_43 [i_10]) ? (arr_48 [i_4] [i_10] [i_14] [i_4] [i_10] [13] [i_10]) : 46526)) + 2147483647)) << (var_1 - 10682906904289699913)));

                for (int i_15 = 3; i_15 < 23;i_15 += 1)
                {
                    arr_58 [i_4] [i_10] [i_14] [i_15] [i_10] [i_14] = var_6;

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        arr_61 [i_15] [i_16] = ((((((arr_37 [i_4] [i_4]) ? (arr_3 [i_4] [i_4] [i_15]) : var_12))) ? (!-476834243) : ((552282406 ? (arr_12 [i_4] [i_4]) : -1445857882))));
                        arr_62 [i_4] [i_15] [i_4] [i_4] [i_15] = ((var_11 ? -3902548673342701641 : (arr_7 [i_10] [i_10] [i_15 + 1] [i_15])));
                        var_33 ^= (arr_53 [i_4] [i_15 - 2]);
                    }
                }
                arr_63 [4] [i_14] = 0;
            }
            arr_64 [i_4] = ((3902548673342701648 ? 2536804160 : (arr_49 [i_10] [i_10] [i_10])));
        }
    }
    #pragma endscop
}
