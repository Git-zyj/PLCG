/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [14] = (max((~1), (max(65508, ((-9651 ? 1 : -9651))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] = (max(-9642, 20097));
                                var_12 -= (((!var_1) ? (arr_1 [i_3]) : ((1 ? 229 : var_2))));
                                arr_18 [i_3] [i_1] [i_1] [1] [i_4] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_13 = (-(((((27446 ? 1 : 9633))) ? ((8107 ? 1 : 1710559768)) : (((-9642 ? 1 : 1))))));
                    arr_21 [i_0] [i_0] = 0;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_25 [17] = (var_5 * var_0);
                    arr_26 [i_0] [i_0] [i_1] = ((9641 != var_4) && (((1 ? -29375 : var_6))));
                    var_14 = 1126407816;
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    var_15 = -37;
                    var_16 = -9642;
                    var_17 *= -8193;
                    var_18 -= (min((arr_1 [i_0]), ((~(var_7 / 7456514754543332576)))));
                }

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_19 = 10822722576431368541;
                            var_20 = (((((-1 ? ((min(-9649, (arr_32 [i_0])))) : ((1 ? var_10 : 1))))) ? ((~(arr_28 [i_1] [i_1] [i_1] [i_10]))) : 2584407527));
                        }
                        var_21 = ((((min((arr_19 [i_9] [i_0] [i_0]), (((113 ? (arr_34 [i_0]) : 1)))))) ? var_7 : (((arr_23 [i_0] [i_0] [i_0]) ? ((4294967295 ? (arr_37 [i_9] [10] [i_0]) : 1)) : (var_8 - var_0)))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_22 *= var_0;
                                var_23 = (min(var_23, ((min((((((min(240, var_0))) * (1 == var_1)))), (min((!5533575939814614695), 4294967282)))))));
                            }
                        }
                    }
                    var_24 ^= (((arr_13 [i_8]) ? 734007099 : -24898));
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_25 = (max(-var_2, 1));
                        var_26 = (max(var_26, ((min(-1429, (min(var_0, (arr_24 [i_0] [i_13] [i_0]))))))));
                    }

                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        var_27 += 1;
                        var_28 = (min(var_28, (arr_8 [i_13])));
                        var_29 = -1556506376;
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_55 [i_0] [i_17] [i_0] [10] [i_17] = var_8;
                                var_30 = (min(var_30, ((((!var_5) ? 113 : -30381)))));
                                var_31 = (min(((((min(var_10, 0)) && -var_2))), 8729525392936689185));
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_32 = ((var_0 ? (((arr_24 [i_0] [i_0] [i_0]) - (((arr_52 [i_18] [i_1] [i_0]) ? var_8 : 0)))) : ((0 ? 25682 : var_10))));
                    var_33 = ((((((((1 != (arr_23 [i_0] [i_0] [i_0])))) >= ((min(var_1, 0)))))) == 9642));
                }
            }
        }
    }
    var_34 = (min(var_7, (var_2 | -9653)));
    var_35 &= var_2;
    #pragma endscop
}
