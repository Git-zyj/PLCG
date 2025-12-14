/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(-32763, (var_7 * var_7))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] &= ((32763 ? -17418 : 27337));
                            var_13 |= (((min(32762, var_1)) <= var_9));
                            var_14 = 32762;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_15 -= (min(var_2, -15129));
                            arr_16 [i_0] [i_1] [i_2] [i_5] [i_3] [i_1] [i_0 - 1] |= (((min(-32748, -17009))));
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [10] = (~var_2);

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_6] [i_3 - 1] [i_1 - 1] = 32767;
                            arr_21 [i_0 - 1] [2] [i_2] [i_3] [i_6] = 32767;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_16 += (((20343 - var_6) - ((min(var_4, var_7)))));
                            var_17 = -32757;
                            arr_24 [i_0 - 1] [i_1] [i_2] = (~-16529);
                        }
                        var_18 = ((min(-11704, 2536)));
                        arr_25 [i_0] [i_1 - 1] [i_2] [i_3 - 1] = var_4;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_19 ^= (max((-16541 - -17009), var_6));
                        var_20 = 2496;

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_8] [12] [i_8 - 1] [i_9] = 32740;
                            arr_31 [i_0] [i_1] [i_8] [i_8] [i_0] = ((13850 ? 7482 : -29905));
                            var_21 = 32737;
                            arr_32 [i_0] [i_8] [i_2] [i_8 - 1] [14] = max(var_5, (((28624 && ((min(var_4, 16823)))))));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_22 *= 32763;
                            var_23 -= (max((~-16529), -16548));
                            var_24 ^= (-1337 / 21364);
                            arr_36 [i_8] [i_0] [i_2] [i_8] [i_10] = ((~(~32767)));
                        }
                        arr_37 [i_0] [i_8 + 1] [10] [i_8] [10] [i_0] = (32746 != var_9);
                    }
                    var_25 = (min(var_25, (~16996)));
                }
            }
        }
        arr_38 [i_0 - 1] = (32767 - -1337);
        arr_39 [i_0] = var_1;
        var_26 = 32763;
        var_27 = ((~(((max(32739, 32711))))));
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        arr_42 [i_11] = (!-20239);
        var_28 = (((((min(-4316, var_0)))) | 1));
    }
    #pragma endscop
}
