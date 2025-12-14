/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = 18241;
        var_14 += (max((max((max(0, var_1)), 9)), 5));
        var_15 ^= -var_5;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (min(var_16, -108));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_11 [i_2] = ((!((max(87, 0)))));
                    var_17 = ((!(~var_6)));
                    var_18 = var_9;
                }
            }
        }
        arr_12 [i_1] = (~-106);
        arr_13 [12] = (max((min(var_8, 3410577709880212629)), var_12));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] = var_6;
        arr_17 [12] [12] = -1316883980683134877;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_19 ^= var_9;
                            arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] [7] [i_8] = (max(((max(-1, var_4))), (min(27, 3410577709880212629))));
                            var_20 = 122;
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_30 [i_5] [i_4 + 1] [i_6] [11] [i_9] [i_6] [i_4 - 1] = ((var_9 >= (~-3410577709880212634)));
                            arr_31 [i_4] [i_5] [i_6] [i_9] [i_9] = (160 == var_10);
                            arr_32 [i_4] [i_9] [i_4] [i_7 + 2] [i_9] = ((~(!var_3)));
                        }
                        var_21 = (max(var_21, (((!((max(-1, 6266750514959483320))))))));
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_22 += ((!((!(~3410577709880212639)))));
        arr_36 [i_10] = (max((max(-3410577709880212639, 1)), -245));
    }
    var_23 = (min(var_23, -var_11));
    var_24 ^= ((-var_0 == (max(-var_2, (!6)))));
    #pragma endscop
}
