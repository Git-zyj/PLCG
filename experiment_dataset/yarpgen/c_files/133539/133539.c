/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_3;
    var_18 = var_7;
    var_19 = ((var_10 ^ (var_4 * var_15)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = ((3382793195 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_21 = ((arr_1 [i_0]) * 912174101);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = 55;
        arr_5 [i_1] = ((((arr_2 [i_1 + 1] [i_1]) > var_6)) ? (5 + 2892080626) : ((3382793195 ? var_4 : var_4)));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_1] [i_1] = 912174129;
                arr_12 [i_1] [i_1] [i_3 + 1] [i_1 + 1] = var_4;
                arr_13 [i_1] = var_14;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_22 ^= ((16380 + (var_9 != var_10)));
                            arr_20 [i_1] [i_2] [i_3 + 2] [i_3] [i_2] [i_3 + 2] [i_5] |= arr_6 [8];
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = ((((((arr_21 [i_1] [i_1 + 1] [i_1] [i_1]) ? var_13 : var_0))) ? var_14 : (arr_3 [i_6] [i_1])));
                arr_23 [i_1] = ((-((-5 + (arr_0 [i_1] [i_2])))));
            }
            arr_24 [i_1] [9] [9] = (((arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [1] [i_1] [i_1]) > ((~(arr_7 [i_1])))));
            arr_25 [i_1] [i_1] = -var_12;
        }
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            arr_28 [11] [i_1] = var_12;
            arr_29 [i_1] = (((-5 ? var_4 : var_8)));
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            var_24 ^= ((!(2147483647 % var_10)));
            arr_33 [i_1] [i_1] [i_1 + 1] = (var_7 % var_5);
            arr_34 [i_1] [i_8 - 3] [i_8] = var_14;
        }
        var_25 = (min(var_25, var_6));

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_26 = (arr_31 [i_1] [i_1] [i_9]);
            arr_38 [i_1] [8] [i_9] = var_7;
        }
    }
    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_27 |= 1;
        var_28 *= (((var_13 - var_2) ? ((-((var_6 ? var_10 : var_6)))) : var_8));
        arr_42 [i_10] = 0;
    }
    #pragma endscop
}
