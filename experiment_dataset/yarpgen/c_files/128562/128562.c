/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_16 = -3021755811;
                                var_17 = var_14;
                            }
                            var_18 = ((var_3 ? ((((arr_13 [i_0]) - var_11))) : (((arr_1 [i_0]) << var_8))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_19 = ((~((var_4 ? (((var_3 <= (arr_15 [i_5])))) : var_4))));
                var_20 = (((((((((arr_16 [i_5]) ? (arr_19 [i_5]) : var_11))) ? ((var_13 ? var_10 : var_14)) : (1155824988 - var_11)))) ? var_7 : (arr_17 [i_5])));

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_21 &= ((var_3 ? var_1 : (arr_16 [8])));
                    arr_23 [i_6] [6] &= (min((((((((arr_15 [1]) ? (arr_19 [i_6]) : var_3))) ? (var_0 * var_12) : var_9))), (arr_16 [2])));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_22 = var_13;
                    var_23 &= ((var_0 ? (arr_15 [i_5 + 2]) : var_10));
                    var_24 = (min(1273211485, (max(11057691687589078438, 1891274258))));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, (!var_6)));
                    arr_30 [0] [i_6] [i_6] [i_5] = 770470492;
                }
                arr_31 [i_5] = (min((arr_24 [i_5] [i_5 + 1]), (arr_25 [i_5 + 1])));
                var_26 ^= arr_22 [i_5 - 1] [i_5 + 1] [i_6];
            }
        }
    }
    #pragma endscop
}
