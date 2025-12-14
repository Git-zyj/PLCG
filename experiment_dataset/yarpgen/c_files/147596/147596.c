/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] &= (arr_0 [i_0]);
                    arr_10 [i_0] [4] [i_1] [4] |= 65535;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (arr_6 [i_0] [i_1 - 1] [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (min(var_17, (arr_5 [i_1])));
                            arr_17 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] = var_0;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_18 = 0;
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_8 [4] [4]);
                            var_19 = -75;
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_20 = (min(var_20, (arr_16 [i_1] [i_1] [i_0] [i_1] [i_0])));
                            arr_24 [5] [i_1] [i_1] [i_0] [3] = (arr_6 [i_0] [i_1 + 2] [i_3] [9]);
                        }
                        arr_25 [i_0] = (arr_4 [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_21 = (arr_23 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0 - 1]);
                        var_22 ^= 223;
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] = var_1;
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_9] = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = 31;
                            arr_35 [i_0] [i_0] [i_2] [i_2] [10] = (arr_20 [i_0] [i_0]);
                            arr_36 [i_1 + 2] [i_1 + 2] [i_0] [i_1 + 2] [i_0] = 1;
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [3] [i_0] [i_0] [i_10 - 1] = -31;
                            var_24 += -24;
                            var_25 = var_0;
                            var_26 ^= 1;
                            var_27 = var_10;
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_28 += 23;
                            var_29 &= (arr_20 [i_1] [i_1]);
                            arr_42 [i_0] [i_0] [8] [i_0] [i_0] = 1;
                        }
                        arr_43 [i_1 - 2] [i_1 - 2] [i_0] [i_0] = var_2;
                        var_30 = 44;
                        arr_44 [i_0] [i_0] [i_0] [i_8] [i_8] = (arr_30 [i_0] [i_0 - 2] [i_1] [i_0] [i_2] [i_8]);
                    }
                }
            }
        }
        var_31 = -13;
        var_32 -= var_0;
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_47 [i_12] = var_9;
        var_33 = var_11;
    }
    var_34 = var_14;

    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {

        for (int i_14 = 3; i_14 < 9;i_14 += 1)
        {
            var_35 = 95;
            var_36 *= var_0;
            arr_56 [i_13] = (arr_37 [i_13] [12] [i_14] [i_14] [i_14]);
        }
        var_37 = -32;
    }
    var_38 = var_4;
    #pragma endscop
}
