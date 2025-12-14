/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = var_6;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_0] [1] = var_6;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_10 = var_4;
                            var_11 = var_3;
                        }
                    }
                }
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_12 = (min(var_12, var_8));
                arr_22 [0] |= var_2;
            }
            arr_23 [i_0] [i_0] = (~var_0);
            arr_24 [i_0] = (((((var_5 ? -20003 : var_4))) ? ((var_0 ? var_4 : 1)) : var_8));
        }

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_13 = (var_4 != 1);
            arr_28 [i_6 - 2] [i_0] = (((~511) != -10681));
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_14 = (max(var_14, 1));
                var_15 = ((1 ? 0 : 1));
            }
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                arr_38 [i_0] [i_0] [i_7 + 1] [i_0] = var_7;
                var_16 += ((~(~var_2)));
                arr_39 [i_0] [i_0] [i_0] [i_9 + 2] = ((0 ? 6 : -20003));
            }
            var_17 = var_6;
            var_18 -= 20002;
        }
        arr_40 [i_0] = ((~((-21 ? var_5 : var_5))));
    }
    var_19 -= ((~(((((1 ? var_0 : 16009))) ? (~var_2) : var_6))));

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            arr_46 [i_11] = var_6;
            var_20 = (((~-72) ? var_7 : var_6));
        }
        arr_47 [5] [i_10] = ((20002 ? 1 : 1));
        arr_48 [i_10] = (((((0 < var_3) % (~var_5)))) ? var_0 : (~2884));
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_21 = 49;
        arr_51 [i_12] [i_12] = var_3;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_54 [i_13] = var_5;
        arr_55 [8] [i_13] = (~var_7);
    }
    #pragma endscop
}
