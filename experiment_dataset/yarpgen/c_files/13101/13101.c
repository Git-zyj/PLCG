/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (min(-var_7, ((1 ? 1 : (var_5 < var_11)))));
                arr_6 [i_0] [20] = (((((((((-32767 - 1) ? var_6 : 1))) ? -var_1 : 1))) ? (((((65510 ? 0 : 83))) ? (((0 ? var_9 : var_6))) : (min(var_0, var_1)))) : (var_6 ^ -var_6)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                var_14 = (min(0, (var_9 && var_7)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2] [i_2] [i_2] = ((-(((((1 ? -9928 : 48507))) ? (var_4 / var_4) : var_0))));
                            var_15 = ((-(min(((var_12 ? var_8 : 1)), ((min(77, 63651)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_21 [i_2] [i_3] [i_3 - 1] [i_3] = ((-((min(1, 127)))));
                            var_16 = (max(((255 ? 2103567626 : 3594393820)), (((var_2 ? 179 : 0)))));
                            var_17 ^= ((((min((min(var_8, var_1)), (((700573474 ? var_11 : var_5)))))) ? ((min(var_2, 175))) : ((-var_0 ? var_1 : (((33132 ? var_5 : 15)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_1));
                                arr_34 [i_8] [i_11] [i_11] [i_12] = (max(((var_7 ? 105 : 0)), -7));
                                var_19 = ((((((((0 ? 0 : 48507))) ? -var_6 : var_12))) ? ((((-527375057467696365 * var_10) ? var_9 : (39 / 6412985750529399158)))) : (((~var_11) ? (31 * var_5) : ((var_8 ? var_10 : 117))))));
                                arr_35 [i_11] = ((~(((!(~var_11))))));
                                var_20 = (min(var_20, (((1 ? 1 : var_4)))));
                            }
                        }
                    }
                    var_21 = (-(min(var_12, var_10)));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((((min(var_7, var_5)) > 19)) ? ((min(1, var_9))) : (max(var_9, (~60))))))));
                                var_23 = (((((((10 ? -2024763739 : var_0))) ? 1235361060 : var_2))) ? -40 : ((((min(527375057467696365, var_0))) ? (var_3 && 140) : (var_4 || var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
