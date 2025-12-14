/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (min(var_13, ((((min((!var_3), (~var_0)))) ? ((((min(0, 1))) * var_5)) : (min((var_4 & -122), (122 / var_11)))))));
    var_14 = 6493516494833406544;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (((((var_10 % (arr_1 [i_0] [i_0])))) ? (~var_0) : (((arr_1 [i_0] [i_0]) ? var_2 : (arr_1 [i_1 + 3] [5])))));
            arr_6 [i_1] = ((!(arr_4 [i_1] [i_0 - 3])));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_15 = ((((-(arr_0 [i_1] [i_2])))) ? (arr_7 [i_1 + 3] [i_0 - 2] [i_2] [i_2]) : var_4);
                var_16 = 1;
                arr_9 [i_0] [i_0] [i_1] = (~122);
                arr_10 [i_0] [i_1] [i_1] [i_2] = var_6;
            }

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_17 = ((arr_11 [i_0] [i_0] [i_0] [8]) ^ (var_0 ^ 3614517381488557148));
                var_18 = (~((var_10 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0 + 3]))));
            }
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                arr_16 [i_0] [i_0] [i_1] = ((-((49224 ? -8872282053639077686 : -127))));
                var_19 ^= (((arr_11 [i_0 - 2] [i_1] [i_4 + 1] [1]) == (arr_4 [0] [i_1])));

                for (int i_5 = 2; i_5 < 6;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_6] [i_1] [9] [i_1] [i_1] [i_0] = -var_5;
                        var_20 = 0;
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_26 [i_1] [i_5] [i_4 - 2] [i_1] [i_1] = 0;
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((-8872282053639077686 / ((9 ? var_4 : 5022875183141982336))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_32 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0] = ((~(arr_25 [i_0])));
                        arr_33 [i_1] [i_1] [i_1] [i_1] = (((((arr_0 [i_5] [i_1]) + 2147483647)) << 0));
                        arr_34 [i_1] [i_5] [i_4] [i_1] [i_1] = ((~var_8) * 123);
                        arr_35 [i_0 + 1] [i_0] [i_1] [i_1] [i_4 + 1] [i_5] [i_8] = (~7765);
                    }
                    arr_36 [i_0] [i_1] [i_0] [i_0] = (arr_14 [i_5 - 2] [i_1] [i_4] [i_5 - 2]);
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_21 -= 11953227578876145045;

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_22 += (((arr_18 [i_10] [i_4] [i_4] [i_4 - 3] [i_10] [i_4 + 1]) & (arr_38 [i_10])));
                        var_23 = 3584;
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_45 [i_0] [i_1] [1] [i_9] [i_1] = (arr_3 [i_1]);
                        arr_46 [i_11] [i_1] [i_1] [i_1] [i_1] [i_0] = (((arr_1 [i_1 + 1] [i_1 + 1]) & ((var_3 ? var_0 : -3584))));
                        var_24 ^= (arr_4 [1] [1]);
                    }
                    var_25 -= 1;
                    var_26 = (min(var_26, (arr_12 [i_0 + 3] [i_1 + 1])));
                }
                arr_47 [i_1] = ((((190 ? 1 : (arr_13 [i_1]))) & -3954727458));
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 9;i_13 += 1)
                {
                    {
                        var_27 = (~8872282053639077685);
                        var_28 = (!var_0);
                    }
                }
            }
        }
        arr_53 [i_0] = (((((2147483647 ? (-2147483647 - 1) : (arr_52 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0 - 1]) : var_0));
    }
    #pragma endscop
}
