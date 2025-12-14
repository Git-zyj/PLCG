/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = 17;
                                var_14 += 16287;
                                var_15 -= 268435455;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_16 = ((var_2 << (!var_0)));
                                var_17 = (max(((2146097904 ? 238 : (arr_20 [i_0] [i_1] [i_2 - 1] [i_5] [i_6]))), var_2));
                                arr_23 [i_0] [i_5] = ((29165 ? (arr_20 [i_1 + 1] [i_2 - 1] [i_2 + 1] [i_6] [i_6]) : ((((min(32767, 4045979150497748562))) ? -18446744073709551609 : var_5))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_18 = (((~(arr_29 [i_7 + 1] [i_8]))));
                                var_19 = (min(((min((arr_32 [i_11] [8] [i_8] [i_7 + 1]), (((arr_34 [i_7] [4] [5] [i_10]) ? 16269 : (arr_26 [4] [4])))))), 10));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_40 [i_13] [i_9] [i_9] [i_7 - 1] [i_7 - 1])));
                                arr_42 [i_7] [i_13] [i_9] [i_13] [0] = 3;
                                arr_43 [i_13] [i_13] = (((arr_28 [i_13]) ? (arr_29 [i_7 - 1] [2]) : ((113 ? (max(14400764923211803054, 19)) : ((min((arr_33 [i_7 - 1] [1]), var_9)))))));
                                var_21 = (((arr_31 [i_7 + 1]) ? (~var_5) : (var_12 | -22469)));
                                arr_44 [i_7 + 2] [i_7 + 2] [i_8] [i_7 + 2] [i_12] [i_13] = ((~(((65535 != (min((arr_28 [i_13]), 25)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_22 = (max((((-16256 && 65526) && (arr_50 [i_7 - 1] [i_8] [i_15] [i_14] [i_15] [i_15] [i_7 + 1]))), (((4929356216421230835 && var_4) > (arr_38 [4] [i_7 + 1] [i_9] [i_14] [9])))));
                                arr_51 [i_15] [i_14] [i_9] [i_8] [i_15] = (min((max((max(71, var_2)), (var_1 <= 19))), var_2));
                                var_23 = ((((14 ^ var_0) ? (arr_30 [i_7] [i_7] [i_7 + 2]) : 4045979150497748582)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_58 [i_17] [13] [8] [i_8] [i_17] = 20706;
                                var_24 |= 477791243;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
