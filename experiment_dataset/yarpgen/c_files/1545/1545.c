/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_1);
    var_11 = -20095;
    var_12 *= (var_3 <= -25930541);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (min((var_9 / var_4), var_4));
        arr_2 [i_0] = -var_2;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0 - 1] = (((min(var_7, -1228549118)) <= ((var_4 ? 0 : (min(var_1, var_4))))));
            arr_6 [i_0] [i_1] [i_1] = (-((((!var_1) != var_6))));
            var_14 *= var_0;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0 - 1] [i_2] [i_2] [i_4] [i_5] = (var_0 & 1903306936);
                            arr_19 [i_0] [i_2] [i_4] [i_5] = var_2;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_15 = (24436 - 0);
                            arr_22 [i_2] = (((((-(arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? 46261 : (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_25 [1] [1] [i_2] [i_7] = (max(((((max((arr_16 [i_2]), var_3))) ? 201 : -var_8)), (arr_7 [i_0 - 1] [i_2])));
                            var_16 += ((!((((min((arr_12 [i_3]), 4)) & -25930541)))));
                        }
                        arr_26 [i_2] [i_2] [i_3] [i_4] = ((~1228549118) % (((((max(var_9, var_5))) >= (arr_21 [i_0 - 1] [i_0 - 1])))));
                        var_17 = (min(var_17, ((max(1, (arr_3 [i_3]))))));
                    }
                }
            }
            arr_27 [i_2] = 222;
            arr_28 [i_2] [i_2] = 0;
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_35 [i_2] [i_2] [i_8 - 3] [i_2] [i_9] [i_9] = min(25930568, var_3);

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_18 = (i_2 % 2 == zero) ? ((((((arr_7 [i_0 - 1] [i_2]) + 2147483647)) << (!var_6)))) : ((((((((arr_7 [i_0 - 1] [i_2]) - 2147483647)) + 2147483647)) << (!var_6))));
                            arr_38 [i_2] [i_2] [i_8 + 1] [i_9] [i_2] = var_0;
                            var_19 = ((-((var_1 ? var_7 : var_8))));
                        }
                        /* vectorizable */
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            var_20 = ((((((arr_31 [i_0] [i_0]) == var_4))) >= ((0 ? 3072 : 1))));
                            arr_43 [i_2] [i_2] [i_2] [i_8] [i_9] [i_11 - 1] = (!var_0);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_21 += (~20);
                            var_22 = (min(var_22, ((((arr_30 [i_14] [i_14] [i_14] [i_14 - 1]) || (-127 - 1))))));
                            arr_57 [i_0] [i_12] [i_0] [i_14] [i_15] = ((!(!47893)));
                        }
                    }
                }
            }
            var_23 -= (((arr_46 [i_0 - 1] [i_0 - 1]) + 127));
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {
                        arr_63 [i_16] [i_12] [i_16 + 2] [i_17] = (((((arr_47 [i_0] [i_16 + 1]) ? 1 : var_8)) == var_3));
                        arr_64 [i_12] [i_16] [i_17] = var_7;

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_24 += ((!(arr_34 [8] [8] [i_16 + 2] [8])));
                            arr_69 [i_0] [i_0] [i_16] [i_16] [i_0] = ((!(var_8 >= -2054491102)));
                            var_25 = var_7;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 13;i_19 += 1)
        {
            arr_72 [i_0] [i_19] = (!42);
            var_26 = (((arr_11 [i_19]) % (arr_36 [i_0] [i_19 + 1] [i_19])));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        arr_77 [i_20] = ((49152 || (((-(arr_74 [i_20]))))));
        var_27 = 145;
        arr_78 [i_20] [i_20] = (~(var_1 < 211));
    }
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        arr_81 [i_21] [i_21] = 0;
        arr_82 [i_21] = (((max(12143, (arr_76 [i_21])))));
        arr_83 [i_21] [i_21] = max(((((var_5 & 111) == (var_6 + var_4)))), -15323);
    }
    #pragma endscop
}
