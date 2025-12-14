/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (~var_12);
                            var_15 = (((var_5 || var_9) ? (max((max((arr_4 [i_0] [i_0]), var_3)), var_6)) : (((((max(var_5, 124))) ? (max((arr_5 [i_2] [18]), (arr_1 [i_0] [i_0]))) : (arr_1 [i_1] [i_3 - 3]))))));
                        }
                    }
                }
                var_16 = (min((arr_11 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), (arr_11 [i_1 - 1] [i_0 + 4] [i_0 + 4] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    var_17 = 124;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_18 = 9998;
                                arr_26 [11] [i_5] [i_5] [i_6] [i_5 - 2] = ((-((((max(-1, var_9))) ? 199 : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((~((max(var_10, -1))))))));
                            var_20 += (((((arr_28 [i_9 - 2]) && (arr_29 [i_10 + 3]))) ? (min(-125, (arr_29 [i_10 - 1]))) : (((((arr_28 [i_9 + 1]) && (arr_29 [i_10 + 2])))))));
                        }
                    }
                }
                var_21 = 8191;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                {
                    var_22 = (max((((-(arr_33 [i_13] [6])))), 2));
                    var_23 = (min((((arr_35 [i_15] [i_14 - 2] [i_13]) / ((52 ? var_5 : -4421892318877692982)))), (((arr_33 [i_14] [i_14 - 2]) ? 2232300909620817466 : (((max((arr_42 [i_13] [i_13]), var_9))))))));
                    var_24 = 633468266371588179;
                    var_25 = max(-48, ((var_7 ? (2383673369 * var_1) : var_10)));
                }
            }
        }
    }
    #pragma endscop
}
