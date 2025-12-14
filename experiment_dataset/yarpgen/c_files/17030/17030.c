/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((var_2 << (!var_13)))));
    var_17 |= (((-var_9 & ((min(var_15, var_4))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = var_4;
        var_19 = 46535;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 = max((arr_1 [i_1 - 2]), (min(var_12, var_1)));
        var_21 += (((-var_2 ? var_7 : ((max(var_1, 0))))));

        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_22 = (arr_0 [2]);

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    arr_14 [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_1] = var_4;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_23 *= 99;
                        arr_17 [i_1] [i_1] = ((((-(arr_10 [i_1] [i_1] [i_3] [i_5]))) + var_6));
                        var_24 = ((-14964 + (3016945885 != 2198470954370352394)));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_25 = var_8;
                        var_26 = (2198470954370352394 * 0);
                        arr_20 [0] [9] [3] [i_1] [i_6] = ((26 != (arr_9 [i_1] [i_1 + 2] [i_1])));
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        arr_23 [i_7] [i_1] [i_1] [i_1] = var_8;
                        arr_24 [i_1] [i_2 + 3] [i_1] [i_1] [4] = (((((arr_0 [3]) % var_12)) > var_5));
                        arr_25 [i_1 + 1] [i_2] [3] [i_4 - 2] [i_1] = (((arr_7 [i_1]) * var_13));
                        var_27 = (min(var_27, ((((var_8 * 105) ? (var_3 + var_1) : (((arr_0 [i_7]) ? var_11 : var_9)))))));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_28 = -var_3;
                        var_29 = ((var_9 ? (-2147483647 - 1) : var_5));
                        var_30 += (~var_0);
                        var_31 = ((var_3 || (arr_4 [i_1 + 1])));
                        var_32 = (var_10 != var_0);
                    }
                    arr_28 [i_1] = (((arr_27 [i_2 + 1] [i_2 + 1] [i_3] [3]) + (-2147483647 - 1)));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_33 = (((var_4 + 2147483647) << (((var_15 + 7328683857425538677) - 22))));
                    var_34 = var_0;
                    var_35 = (arr_9 [i_2 + 4] [0] [i_1]);
                    var_36 = var_12;
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_37 |= (((-413331368 + 2147483647) << (((-413331368 + 413331384) - 16))));
                    var_38 -= (((var_15 + var_4) % (var_2 * var_9)));
                    var_39 = ((230 << (var_9 != var_6)));
                }
                var_40 = var_0;
                var_41 = var_4;
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    {
                        var_42 = (((((((arr_22 [i_12] [i_12] [i_11] [5] [i_1]) << (var_5 - 69))) % (arr_6 [i_1] [i_2 + 1] [i_2 + 3]))) + 0));
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = (((1 ? 4362862139015168 : 25075)) + (((var_12 ? (arr_33 [i_1] [i_2 - 1] [6] [i_1]) : (arr_33 [i_1] [i_2 - 1] [9] [i_1])))));
                    }
                }
            }
            arr_40 [i_1] = var_0;
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 9;i_14 += 1)
            {
                {
                    var_43 = var_2;
                    var_44 = (max(var_44, ((((min((arr_13 [i_14] [i_14] [i_14] [i_14 - 1] [i_1 - 2]), var_12)) % var_11)))));
                    var_45 &= arr_29 [i_1];
                }
            }
        }
    }
    #pragma endscop
}
