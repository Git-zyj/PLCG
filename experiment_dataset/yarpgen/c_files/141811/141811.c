/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = (18446744073709551589 > -13364);
                                var_11 = (min(var_11, (((9 << (((arr_4 [i_0] [i_1 - 1] [i_1 - 1]) ? 2 : 1)))))));
                                var_12 = (min(235, ((~(arr_8 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] [i_1] &= ((arr_0 [i_1 - 2]) + 18446744073709551596);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_13 = (((((arr_15 [i_0]) << (-6713 + 6774))) << (-25873 + 25928)));
                    arr_16 [i_0] [i_1] [i_5] = min(6708, 29253);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_14 = var_6;
                                var_15 = (max(var_15, (!91688624161192490)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_16 = (arr_18 [i_0] [i_1] [i_6 + 3] [i_0]);
                                var_17 = (min(var_17, (((arr_5 [i_6 - 2] [i_6] [i_6] [i_1 + 1]) ? (arr_5 [i_6 + 1] [i_6] [i_6] [i_1 - 1]) : (arr_25 [i_9] [i_10] [i_6 + 3] [i_0])))));
                                var_18 = 1211423723;
                            }
                        }
                    }
                    var_19 ^= (((arr_23 [i_1] [i_1] [i_1] [i_1 - 2] [9] [i_6 + 3]) ? ((17234298792452199268 ? 3646594987848800612 : 0)) : (((((arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_6]) < 161))))));
                    var_20 = (3853774372680597621 && var_2);
                }
                arr_30 [i_0] [i_0] [i_0] = (arr_25 [i_0] [i_1] [i_0] [i_0]);
                var_21 = (max(var_21, (((((((0 ? var_1 : (arr_18 [i_1] [i_0] [i_0] [i_1]))) ? 1 : (arr_21 [i_1] [4] [i_0] [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    var_22 = -3853774372680597633;
    var_23 = var_5;
    #pragma endscop
}
