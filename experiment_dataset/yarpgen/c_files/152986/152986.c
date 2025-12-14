/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((!0) ? 1 : (arr_1 [i_0] [i_0]))) > ((-var_14 ? -var_11 : (1 != var_3)))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (((((((var_2 ? 402888759 : (arr_7 [2] [i_1] [i_3]))))) ? -2125434531 : ((min(497708203, -5498))))))));
                        arr_12 [i_0] [1] [i_2] [i_3] = ((497708203 / (((((728934983 ? var_13 : (arr_11 [i_0])))) ? (var_11 - 3892078536) : (((arr_10 [i_0]) & 1))))));
                        var_17 = var_7;
                        var_18 = (max(((((arr_3 [i_1 - 2] [i_2 - 1]) ? (((var_11 ? 4469 : 1))) : ((var_6 - (arr_7 [i_0] [i_1] [i_1])))))), ((((4469 ? var_3 : var_9)) & (((var_4 ? 4471 : 2125434530)))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_20 [i_5] = (((min((((arr_5 [i_0] [i_4]) >= -1)), var_8)) ? var_12 : ((((2289506466 ? (arr_15 [i_0] [i_0] [i_0]) : var_8))))));
                        var_19 = ((-(max(((1 ? 133 : 497708203)), 0))));
                        arr_21 [i_5] [i_4] [i_5] [i_5] = ((-2125434531 ? 7 : -2125434530));
                        arr_22 [i_0] [i_0] [i_0] [0] [i_0] [i_5] = -5484;
                    }
                }
            }
            var_20 = 127;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_25 [i_0] [8] = 0;
            arr_26 [i_0] = var_5;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_21 = (min(var_21, var_6));
            var_22 = (((arr_24 [i_0] [i_0] [i_0]) * var_12));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_31 [i_0] [6] = ((var_2 ? var_9 : var_6));
            var_23 = (((!497708203) << (((arr_14 [i_0] [i_9] [i_9]) - 50205))));
        }
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {
        var_24 = (max((arr_34 [i_10]), (-127 - 1)));
        var_25 = ((((((!(((1468965735 ? -360959683 : -3364054447027716711))))))) <= (((var_8 * var_14) % (((625299681 ? var_5 : var_12)))))));
        var_26 = (((((min(var_5, var_1))) ? (!var_12) : ((var_1 ^ (arr_33 [i_10]))))));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                arr_41 [8] [i_11] &= (50206 & var_5);
                var_27 = ((((((((arr_36 [1]) ? (arr_36 [i_12]) : 0)) << (((~-7175) - 7171))))) ? var_4 : 0));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_28 = var_8;
                            arr_48 [i_11] [i_13] [1] [i_12] [i_11] [i_11] &= var_4;
                            var_29 &= (arr_38 [i_11] [i_11] [i_11]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
