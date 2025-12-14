/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-var_19, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_21 += var_1;
                arr_5 [i_0] [i_1] [i_0] = -2051748582;
                arr_6 [i_0] = (arr_2 [1]);
                arr_7 [8] [i_1 + 4] [i_1 + 4] = 1;

                for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] &= (arr_9 [i_0] [i_2 - 2] [0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_22 = (((arr_1 [i_0] [7]) - var_18));
                        var_23 = (max(var_23, (((var_4 ? -1795463845 : 791629483)))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_24 = 2051748582;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_6 - 1] [10] [i_6 - 1] [i_5] [i_6] [i_6 - 2] [i_1] = (((arr_8 [i_4 + 2] [i_1 + 4]) <= (arr_8 [i_4 - 1] [9])));
                                var_25 -= ((~(arr_9 [i_6 - 2] [i_1] [i_1 + 4])));
                                arr_21 [i_0] [i_1] [i_5] [15] |= 32766;
                            }
                        }
                    }
                    var_26 &= (arr_2 [i_0]);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_27 = (((((arr_9 [i_1] [i_7] [i_7]) || (((~(arr_17 [i_0] [15] [i_0])))))) ? ((((((0 ? 3 : var_6)) + 2147483647)) << (((arr_9 [i_0] [i_1] [i_7]) - 80)))) : (((var_14 && 1163208626) ? (!var_9) : var_16))));
                    var_28 = (arr_1 [i_0] [i_1]);
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_29 = (((arr_14 [i_0] [i_10 - 1] [i_8] [i_9]) ? (arr_14 [i_0] [i_10 - 1] [i_0] [i_9]) : 1));
                                arr_33 [i_0] [6] [i_8] [i_9] [i_10] [i_9] [i_10] = ((-(arr_32 [i_9] [i_1] [i_9] [i_8 + 1] [i_10 - 1] [i_9] [18])));
                                arr_34 [i_0] [i_9] [i_8 + 3] [i_9] [i_10] [i_9] = (((arr_15 [i_1 + 2] [i_8 + 2]) ? 32760 : (arr_15 [i_1 + 1] [i_8 + 3])));
                            }
                        }
                    }
                    arr_35 [i_0] [i_1] = (arr_29 [i_1] [i_0] [i_0] [i_8] [i_8] [i_1 - 3]);
                    arr_36 [i_1 + 3] [i_1] [i_1 + 3] [i_0] = var_9;
                    arr_37 [i_8] [i_1] [i_8] = (~var_1);
                }
            }
        }
    }
    var_30 -= var_9;
    #pragma endscop
}
