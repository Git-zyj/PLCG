/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (!var_9);
    var_15 = (min(217, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min((max(11055058033249156540, 1)), -var_7));
                var_17 = (((~458707556) ? ((((((arr_2 [i_0]) ? -1421252469 : 0))) ? ((((458707564 < (arr_3 [i_0] [i_0]))))) : 7391686040460395097)) : 2086064480));
                var_18 = (max(var_18, 3836259732));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (((((arr_3 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : var_6))) ? (arr_3 [i_2] [i_2]) : var_11);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_19 = (max(var_19, var_3));
                        arr_14 [i_2] [3] [i_2] [i_2] = arr_5 [i_2] [i_2];
                        var_20 = (max(var_20, 458707564));
                    }

                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_2] [i_6 + 1] = ((((((arr_4 [i_2] [i_2] [i_2]) + (arr_15 [7] [i_3] [i_4] [i_3] [i_2])))) == (arr_17 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])));
                        var_21 = (max(var_21, (~var_1)));
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_4] [i_2] [i_3] [i_4] [i_3] &= arr_13 [i_4] [1] [i_3] [i_2] [i_4];
                        var_22 = (min(var_22, var_4));
                        arr_22 [i_2] = 7391686040460395076;
                        var_23 ^= var_0;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_32 [i_2] [i_8] = ((!(arr_4 [i_2] [i_9 + 1] [i_2])));
                                var_24 = (max(var_24, ((((3836259740 << (14103511583050579152 - 14103511583050579132)))))));
                            }
                        }
                    }
                    var_25 = var_12;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_26 &= (((arr_17 [i_8 + 3] [i_8 + 3] [i_9 + 1] [i_12]) ? 2269814212194729984 : 48));
                                var_27 &= 24;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 &= 1;
    #pragma endscop
}
