/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (((3836679164 && 38721) ? (min(var_4, (!-20))) : (((min((!1), (((arr_4 [i_0] [i_0] [i_1]) && 565799989))))))));
                var_11 = (((arr_3 [i_0 - 1] [i_0 - 3] [i_0 + 1]) ? (arr_2 [i_0]) : 62673));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((arr_7 [i_0 - 4] [i_0 - 2] [i_3] [i_4 + 2]) || (arr_10 [i_0 - 3])))))));
                                var_13 *= 38719;
                            }
                        }
                    }
                }
                var_14 = (min(var_14, 38719));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_15 = (min(var_15, ((((+-35) + (min(-0, (max(2629287911, var_0)))))))));
                        var_16 |= (!-38);

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_17 = (max(var_17, (((-62291 == (!var_3))))));
                            var_18 = 1;
                            var_19 &= ((min(4294967295, 38719)));
                        }
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_20 &= var_0;
                        var_21 = (((!(0 != 38716))));
                        var_22 *= (min(var_6, ((((57 & (-127 - 1)))))));
                    }
                    var_23 = (((-1835732107 || 1) ? 3116 : var_4));
                    var_24 |= var_7;
                    var_25 = ((-(min(((38696 ? 3236 : 127)), var_8))));

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            arr_33 [i_5] [i_12] [i_5] [i_5] [i_12] = ((((-(arr_7 [i_5] [0] [i_6] [i_11]))) >> (var_8 - 4169141382)));
                            var_26 = var_9;
                            arr_34 [i_5] [i_5] [i_12] [i_6] [i_7] [i_11] [i_12] = ((17885650672816660877 ? 1712931555 : 1));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_38 [i_5] [i_5] = (var_4 || ((var_7 || (arr_0 [i_5 - 2]))));
                            var_27 *= 1;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_28 += -26836;
                            arr_41 [i_5] [i_6] [i_7] [i_11] [i_11] = (~(((arr_18 [i_5 - 1]) * var_9)));
                        }
                        var_29 = (((~(~1))));
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {

                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            var_30 ^= (min(((-((99 ? var_3 : var_5)))), 68));
                            var_31 = ((((var_1 - (arr_1 [i_16] [i_16]))) + var_2));
                        }
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            var_32 = 74;
                            var_33 = var_6;
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                        {
                            var_34 ^= var_2;
                            arr_52 [i_5 + 1] [i_5 + 1] [i_7] [i_15] [i_18] |= -9784;
                        }
                        for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                        {
                            var_35 = (((17885650672816660893 < 0) ? (857412689994158987 % -var_6) : (((min((arr_46 [i_5] [i_15 - 1] [i_5 - 2] [i_5] [i_5] [i_5]), (arr_49 [i_15 - 1] [i_5 - 2] [i_7] [i_15 - 1])))))));
                            arr_56 [i_5] [i_5] [5] [5] [12] [i_19] = (((((var_7 ^ (arr_24 [i_6] [i_19])))) ? (!33554431) : ((-var_8 % (arr_50 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2])))));
                        }
                        var_36 = (min(var_36, (arr_5 [i_15 - 1] [i_5 + 1])));
                        var_37 = (max(1, 223));
                        var_38 = (max(var_38, ((min(((-(min((arr_28 [3] [i_7] [i_6] [3] [3]), -10)))), (((-(var_7 * var_8)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
