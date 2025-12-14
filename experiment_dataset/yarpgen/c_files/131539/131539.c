/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((!((min(56, 189))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 += 50007;
        var_20 = (min(var_20, var_13));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, var_5));
        var_22 ^= ((!(((((((arr_4 [i_1 + 1]) ? 179 : 16383))) ? ((56 ? 15529 : var_4)) : (-58 & var_17))))));
        var_23 = (min(var_23, (arr_5 [i_1] [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_24 += var_0;
        var_25 &= (((arr_1 [i_2] [i_2]) ? ((15512 / (arr_7 [10] [i_2]))) : (arr_6 [i_2 + 1])));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_26 -= (((arr_9 [i_3 - 2] [3]) && ((!((max(var_4, var_3)))))));
                    var_27 = (max(var_27, ((min((max((((arr_11 [i_5] [i_5]) ? (arr_8 [i_5]) : (arr_9 [i_5] [i_3]))), (((12010 ? 557821667 : 55445))))), ((max((arr_8 [i_3]), var_16))))))));
                    var_28 |= ((~((-(var_2 == 50013)))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_29 = (min(var_29, ((((arr_8 [i_3 - 2]) ? (arr_12 [i_4]) : (arr_13 [i_7]))))));
                                var_30 ^= (((((var_5 * (arr_18 [i_3] [i_6] [i_7] [i_8])))) / (arr_21 [i_4] [i_7])));
                            }
                        }
                    }
                    var_31 ^= ((((arr_16 [i_3] [10] [i_4] [i_6 + 2]) | -116)));
                    var_32 ^= 170;
                    var_33 += (((arr_17 [i_3 + 1]) ? (arr_16 [i_6] [i_4] [i_3 - 1] [i_3]) : ((-127 ? 28557 : var_1))));
                    var_34 &= 2261380320;
                }
                for (int i_9 = 4; i_9 < 24;i_9 += 1)
                {
                    var_35 ^= ((!(2047 ^ 26549)));
                    var_36 += (arr_21 [i_3 - 2] [i_9]);
                }

                /* vectorizable */
                for (int i_10 = 2; i_10 < 24;i_10 += 1)
                {
                    var_37 ^= (arr_22 [i_3 - 1] [i_4] [i_10] [i_10] [i_10]);
                    var_38 &= (!64);
                }
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    var_39 *= ((-116 && (((var_0 & (arr_22 [i_3] [i_3] [i_4] [i_4] [i_11]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_40 = (max(var_40, 13));
                                var_41 = (max(var_41, (arr_21 [i_3] [i_11])));
                                var_42 ^= (38987 - 65527);
                                var_43 |= (((arr_8 [i_3 - 2]) ? var_13 : (arr_31 [i_11])));
                            }
                        }
                    }
                    var_44 = (max(var_44, ((((arr_21 [i_11] [i_11]) ? (max(206, (((arr_36 [i_3] [i_11] [i_4] [i_4] [i_11] [i_11 - 2]) ? 511 : (arr_33 [i_3] [i_4] [i_11]))))) : var_1)))));
                    arr_40 [i_11] |= (15529 ? 65535 : 127);
                    arr_41 [i_11] [i_4] &= ((((4829413807551418745 || 7) << (((arr_34 [i_11] [i_11] [i_11] [i_11]) + 91)))));
                }
            }
        }
    }
    #pragma endscop
}
