/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_4;
    var_18 += var_1;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = var_16;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((!(arr_0 [i_0] [i_0])));
                        arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                        var_20 = (!var_5);
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_21 = var_8;
                        var_22 = ((arr_18 [i_5] [i_5] [i_5] [i_5] [i_5]) >> (((~var_9) - 805823698)));
                        arr_20 [i_2] [i_0] = (((((255 ? var_4 : 15418))) ? 1 : (arr_18 [i_0 - 2] [i_3] [i_1] [i_0 - 2] [i_5])));
                        var_23 = (~var_7);
                    }
                    arr_21 [i_3] = var_14;
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_24 *= var_13;
                            var_25 = ((-(arr_18 [i_0] [i_0 + 1] [i_1] [i_2 + 2] [i_7 - 1])));
                            var_26 *= ((~(arr_9 [i_0] [i_2 - 4] [i_6 + 1] [i_7 - 1])));
                        }
                    }
                }
            }

            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                arr_32 [i_8 - 1] [i_0 - 1] [i_0 - 1] = (arr_8 [i_0 - 2] [i_8 - 1]);
                arr_33 [i_0] [i_0] [i_1] [i_8 - 1] = ((-((((arr_3 [i_0 + 1] [i_0 + 1] [i_8 - 2]) == (arr_12 [i_8 + 1] [i_0 + 1] [i_8 + 1] [i_0 + 1] [i_0 - 1] [i_1] [i_8 + 1]))))));
                var_27 |= var_2;
            }
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                arr_36 [i_0] [i_1] [i_1] = (15579489142733500879 < -65);
                arr_37 [i_1] = (!480);
                arr_38 [i_9 + 2] [i_1] = (max(-65, -40));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_28 -= (-82 * 54);
                    var_29 = (arr_10 [i_0 + 1] [i_0 + 1]);

                    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_30 *= 21;
                        var_31 -= -var_15;
                        var_32 += (-5321787224435135664 && var_7);
                        arr_47 [i_12 + 1] [i_1] [i_10] [i_1] [i_0] = ((var_13 & (((arr_22 [i_0] [i_0] [i_0]) ? var_2 : var_13))));
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_33 *= -65;
                        arr_52 [i_0] [i_1] |= (--31066);
                        var_34 -= ((!(arr_19 [i_0 - 1] [i_0 - 2] [i_11] [i_13] [i_13] [i_13 + 1] [i_13 - 1])));
                    }
                    for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_1] = 60;
                        var_35 ^= -1;
                    }
                    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_36 = 81;
                        arr_59 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = (1999585578 ? 72057456598974464 : 53);
                    }
                }
                var_37 += 81;
            }
        }
        arr_60 [i_0] [i_0 - 1] = var_3;
    }
    var_38 *= var_5;
    #pragma endscop
}
