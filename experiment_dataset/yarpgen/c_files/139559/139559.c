/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 126;
    var_12 = (min(((((var_10 & var_9) || var_1))), ((((max(-26105, var_2))) & (max(3152376023, 3087422101))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = ((((((max((arr_8 [i_0] [i_0] [i_0] [10]), (arr_6 [i_1] [i_1] [i_1])))) ? -var_2 : (288230376151711743 / var_9))) << (((((((~(arr_2 [i_1])))) | (~var_0))) - 9717046001600026591))));
                            var_14 &= (((~(((arr_2 [i_0]) + (arr_1 [i_2] [14]))))));
                        }
                    }
                }
                var_15 ^= (((arr_9 [i_0] [i_0] [i_1]) + (arr_9 [i_0] [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_16 *= (max(((max(3819, 9061))), ((((max(var_10, (arr_13 [i_8] [i_8])))) & (arr_6 [i_8] [i_6] [i_5])))));
                                var_17 = (max(var_17, (((-((((((arr_3 [8] [i_5]) / 16240))) ? (arr_4 [i_7 + 3] [i_6 - 2]) : ((min((arr_16 [3] [i_7] [i_4]), (arr_10 [i_5] [i_5] [i_7])))))))))));
                            }
                        }
                    }
                }
                var_18 = ((((arr_20 [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 3]) + (arr_7 [i_4] [i_5]))));
                arr_25 [i_4] = (((((!var_9) ? (-28633 > var_2) : (min(var_7, (arr_20 [6] [i_5] [i_5] [i_5] [15]))))) <= (((~((((arr_7 [i_4] [i_4 - 1]) <= -26109))))))));
                var_19 = (min(var_19, ((((arr_6 [i_5] [i_4] [i_4]) & (-var_2 & -28645))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_20 = (min(var_20, (((((min((((var_7 <= (arr_20 [i_11] [i_11] [9] [i_9 - 1] [i_9])))), (arr_31 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 2])))) * ((((!2236115726) && var_2))))))));
                    arr_33 [i_11] [i_9] [i_9] [i_9] = ((max(((28615 ? (arr_31 [i_9] [10] [i_10] [i_11]) : var_0)), (arr_12 [i_10] [i_11]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_21 = var_3;
                                var_22 = (min(26058, 4294967274));
                                var_23 ^= (((((((min((arr_34 [i_13] [i_10] [i_10] [i_9 + 1]), var_5))) ? 26051 : ((var_4 << (var_5 - 1068518450)))))) % ((28636 | (min(11832672888735121635, (arr_3 [i_11] [i_12])))))));
                            }
                        }
                    }
                    var_24 ^= (((arr_0 [i_9 + 2]) ? (-70 || -118) : (min(6614071184974429985, (arr_4 [i_9] [8])))));
                }
            }
        }
    }
    #pragma endscop
}
