/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 1023;
    var_18 = (min((min((max(var_10, var_16)), var_7)), (((((max(var_6, 1))) ? 215 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (1 || 4294966273);
                            arr_10 [i_0] [i_0] [i_0 - 2] [6] [6] = (var_8 / -77);
                        }
                    }
                }
                var_20 = (min(var_20, var_7));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_21 = (min((((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 2]) & var_1)), 4294966273));
                            var_22 = (min(var_1, (arr_4 [i_0 + 1] [i_0] [i_0])));
                            var_23 = (arr_6 [i_4] [i_1] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_24 = ((((min((arr_7 [i_0 - 2]), (arr_15 [i_0] [i_1] [i_1] [i_1] [i_0])))) ? ((~(arr_2 [i_7] [i_0]))) : var_2));
                            arr_23 [i_0 + 1] [i_0] [i_0] [i_0 - 1] &= (min(36102, 204));
                            arr_24 [3] [i_1 + 1] [i_1] [i_1 + 3] = (min((!var_8), (max((arr_16 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), (((4294966252 ? var_14 : var_3)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                arr_29 [i_8] = min(((213 ? 38 : (min(1734870798, 183)))), var_7);
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_25 ^= (min(-var_14, var_9));
                            var_26 = (min((((!(arr_28 [i_11] [i_9])))), (arr_27 [i_10 - 1])));
                            var_27 = (max(var_27, (((((!(((1676714515 ? 4294966253 : var_9))))) ? ((-(max(-1002435396, 4135640373)))) : (((((arr_25 [i_10 - 1]) != 1734870808)))))))));
                            var_28 = (((min((arr_35 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_35 [i_10] [i_10 - 1] [i_10] [i_10 - 1]))) * ((((min(183, 9297259403708857695)))))));
                        }
                    }
                }
                var_29 = (min(var_29, (((~(max(((21 ? (arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_35 [i_8] [6] [6] [6]))), (arr_30 [i_8] [1] [i_8]))))))));
                arr_38 [i_9] [14] [i_8] = (((((var_0 ? (arr_37 [i_8] [12] [i_8] [i_8]) : ((((arr_37 [i_8] [i_9] [i_9] [i_9]) <= var_5)))))) ? (arr_30 [i_8] [i_8] [i_9]) : ((((~(arr_25 [i_8]))) + (((arr_28 [i_9] [i_9]) + 1018152123))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            arr_51 [i_14] [i_14] [i_13 + 1] [i_12] = (max((((arr_28 [i_12 + 1] [i_12 + 2]) ? (arr_28 [i_12 + 1] [i_12 + 2]) : (arr_28 [i_12 + 1] [i_12 + 2]))), (((4294966286 <= (arr_28 [i_12 - 1] [i_12 + 2]))))));
                            var_30 |= (((15 <= 4294966253) ? (((arr_31 [i_12] [i_12] [i_15]) + 249)) : -16));
                        }
                    }
                }
                var_31 |= ((+(min((arr_40 [i_12]), (((~(arr_30 [i_12 - 1] [i_12 - 1] [i_13]))))))));
                var_32 = (arr_37 [i_12 + 2] [i_12 - 1] [i_12] [i_12 - 1]);
            }
        }
    }
    #pragma endscop
}
