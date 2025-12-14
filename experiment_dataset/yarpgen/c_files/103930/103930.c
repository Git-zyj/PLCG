/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_0] = (max((max(9223372036854775807, ((-68 ? (arr_6 [i_3] [i_1] [i_0]) : 1)))), (((max(-9223372036854775807, -9223372036854775807))))));
                            var_10 ^= (min((min((((arr_2 [i_1]) ? var_9 : var_3)), ((0 ? 9223372036854775807 : (-127 - 1))))), (((!((((arr_5 [i_0]) << (arr_9 [i_2] [i_1] [i_1] [i_3])))))))));
                            var_11 ^= (~113);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((max((((var_5 < (arr_4 [i_0] [i_2] [i_3])))), (max(9223372036854775807, 0)))), (((min(9223372036854775802, 56189))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_12 ^= (!9223372036854775806);
                            arr_18 [i_0] [i_0] = ((!((((arr_1 [i_0 - 2]) ? ((min((arr_1 [i_0 - 1]), (arr_17 [i_0] [i_1] [i_4])))) : (arr_12 [i_0] [i_0] [i_0]))))));
                            var_13 = ((((arr_17 [i_0 + 2] [i_5 + 2] [i_4]) < ((max((arr_4 [i_0] [i_1] [i_0]), var_0))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_30 [i_6] [i_7] [i_8 + 3] [i_8] [i_7] [i_10] &= (((max(14804, (min(1160702603756926665, 2839504584)))) * (arr_5 [i_10])));
                                arr_31 [i_9] [i_9] [i_9] = ((4294967272 & ((0 ? var_9 : (arr_29 [i_8 + 3] [i_6] [i_8 + 3])))));
                                var_14 = (max(var_14, (((((min(((min(var_8, (arr_26 [i_9] [i_7] [i_8] [i_9] [i_7])))), var_1))) ? (arr_23 [i_8 + 3] [i_8 + 3]) : (((((var_5 ^ (arr_9 [i_6] [i_6] [i_8] [i_9])))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_15 = (min(var_15, 21728));
                                var_16 = (min(var_16, (!14812)));
                                var_17 = ((-((0 ? -9223372036854775807 : 0))));
                                arr_38 [i_6] [i_6] [i_11] [i_6] &= (arr_0 [i_8] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_50 [i_15] [i_13] [i_14] [i_14] [i_15] [i_16] = (~(arr_48 [i_13] [i_15]));
                            arr_51 [i_15] [i_14] [i_15] [i_16] = (min(7124525085143506150, 9223372036854775785));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 1; i_17 < 6;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_18 ^= (((min((arr_42 [i_13] [i_14]), (arr_28 [i_14] [i_14] [i_17 + 1] [i_17 + 4] [i_19])))) ? (!9223372036854775785) : ((~(11303 & var_4))));
                                var_19 ^= (arr_43 [i_13] [i_14] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
