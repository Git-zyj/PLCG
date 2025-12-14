/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((~(((var_7 % var_2) << (((((var_1 + 9223372036854775807) << (15 - 15))) - 9179759389980409224))))));
    var_16 ^= (~0);

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] = (((((~(!2)))) ? var_5 : (((-19 == ((((-127 - 1) == 1))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] [i_1] [i_1] = -1;
                                var_17 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] = var_11;
                                arr_23 [i_1] [i_1] [i_3] [i_1] [i_1] [6] = (1 ? (arr_18 [i_7] [i_7] [i_7 + 4] [i_7 + 4] [i_7 + 3]) : 1);
                                var_18 = -10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_19 *= (((arr_1 [i_9 - 1]) ? (arr_8 [i_9 - 2] [i_9] [10]) : (arr_1 [i_9 - 1])));
                                var_20 = (arr_18 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1 - 1]);
                                var_21 = var_7;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                {
                    arr_37 [i_10] = (((~0) == (((arr_28 [i_1 + 4] [0] [i_1 + 4] [i_1] [i_1 - 1] [i_1] [i_1 + 4]) ? 2 : var_11))));
                    var_22 ^= (((((arr_31 [6] [0]) + 0))) ? 8788782775565514797 : var_6);
                }
            }
        }
        var_23 = var_13;
        var_24 = (((arr_24 [i_1 - 1] [0] [i_1 + 3] [8]) >= var_2));
        arr_38 [i_1] [i_1] = (((~448) ? (arr_0 [8]) : ((((1 > (arr_0 [10])))))));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 14;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                {
                    var_25 = (var_13 <= var_0);
                    var_26 += ((var_2 || (!4875153853074712088)));
                }
            }
        }
        arr_48 [i_12 + 2] |= (((arr_39 [i_12 - 2]) ? -1720455214 : 1));
        var_27 = ((-(arr_41 [i_12 - 1])));
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        arr_52 [i_15] [i_15] = min(((max(-1, 0))), (var_5 ^ var_1));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        arr_63 [i_17] [i_16] = (((arr_5 [i_17 + 1]) > (!-771856242)));
                        var_28 = (((~var_4) ? var_9 : ((var_10 ? 436375507 : (((((arr_20 [i_15] [i_15] [i_15] [i_15] [i_15]) == var_8))))))));
                        var_29 = (min(var_29, (((((min((~-32757), -448))) ? (((((((arr_17 [i_15] [i_15] [i_15]) ? 70 : 0))) ? (1 - 33) : -17731))) : (((!0) - ((0 ? var_2 : var_8)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
