/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(242, 22)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 ^= (max((((!var_14) ? (max(-23, 4350634066207274083)) : (((min(-1, 0)))))), ((max(var_13, var_8)))));
                var_22 ^= (((-121 % var_12) ? (((((2784059251848497613 ? 13 : -1))) ? (3 > var_13) : ((max(-23, -17))))) : 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_23 -= ((1689043886 ? (((17856229611117267804 ? 7671 : -7))) : ((-8598836315950236011 ? 13481 : -8598836315950236011))));
                            arr_9 [i_1] = ((2605923386 ? 1358912173671601894 : (((((max(2605923386, 13482))) ? 11894 : -6484815275162653968)))));
                            var_24 = (max(6103604468063041325, ((max(40, (!10957139574390538960))))));
                            var_25 = 1;

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                arr_12 [9] [9] [i_1] [i_3] [i_4] = (var_11 ? -44 : 24);
                                var_26 = (min(var_26, 1441568825044163967));
                                var_27 = (((137516401 ? -37 : -1441568825044163968)));
                                var_28 = (max(var_28, 5732));
                                arr_13 [i_0] [i_0] [6] [i_0] [i_1] [i_3] [i_4] = (497477117 * var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_20 [14] [14] [11] = ((var_6 ? ((((5908482060921304718 ? 120 : var_18)))) : var_16));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_26 [i_8] [i_6] [i_6] [i_8] [i_9] [i_8] = max((((!((min(65526, var_0)))))), (-127 - 1));
                                arr_27 [19] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_9;
                                var_29 = 0;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_30 = (((((var_9 ? 10957139574390538970 : 0))) ? (max(8598836315950236010, 9545148256867099025)) : (!var_12)));
                                var_31 = (max(((var_10 ? var_10 : var_13)), 3920383577947517406));
                            }
                        }
                    }
                }
                arr_37 [i_5] = (min((3920383577947517406 <= 3), (min(-1, 34442))));
            }
        }
    }
    #pragma endscop
}
