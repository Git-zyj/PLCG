/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 ^= var_13;
                    var_21 = (min(var_21, -15164));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = 0;
                                arr_11 [i_0] [i_1] = 0;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_23 *= -21261;
                            var_24 = (max(var_24, var_15));
                            var_25 -= var_6;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_26 *= var_1;
                            var_27 = -8068;
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] = var_12;
                            arr_19 [i_1] [i_0] = 31;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, 32767));
                            var_29 -= 3975;
                            var_30 &= 22391;
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_24 [i_0 + 4] [i_0] [i_0 + 4] [i_5] [i_9] = var_1;
                            arr_25 [i_0] = -17891;
                            var_31 += var_5;
                        }
                        arr_26 [i_0] [i_1] [i_5] = -1;
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_32 = (max(var_32, 8349));
                        arr_29 [i_0] [i_0] = -32765;
                    }
                    var_33 = (min(var_33, 32767));
                }
            }
        }

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_32 [i_0] = 16383;
            var_34 = 29227;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_38 [i_0] [i_12] = var_7;
                        var_35 &= -4875;
                        arr_39 [i_11] [i_11] [i_11] [i_12] [i_11] [i_11] &= var_6;
                    }
                }
            }
            arr_40 [i_0] [i_0 - 1] [i_0] = var_3;
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_36 *= 3968;
            arr_43 [i_0] [i_0] [i_14] = var_12;
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            arr_46 [i_0 - 3] [i_15] [i_0] = var_9;

            /* vectorizable */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_37 = var_15;
                var_38 -= 17;
            }
            arr_49 [i_0] [i_0] [i_0] = -24691;
        }
    }
    var_39 -= var_19;
    #pragma endscop
}
