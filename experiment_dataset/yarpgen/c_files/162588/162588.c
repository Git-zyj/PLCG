/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [8] [i_3] [i_1] = ((((~((var_10 ? (arr_5 [i_0] [i_1] [i_2]) : (arr_8 [i_0]))))) > (((((min(31, 707518889))) ? (arr_11 [i_0]) : 156)))));
                                var_19 = ((((((arr_3 [i_1]) ? (arr_4 [i_4] [12] [i_4]) : (arr_13 [i_4] [2] [2] [i_0])))) ? 19 : (((arr_12 [7] [i_4] [14] [i_3] [i_4]) & (((!(arr_8 [i_2]))))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_2] [i_1] [i_1] = max((min(var_12, ((11 ? 11263 : 86)))), ((((((arr_11 [i_2]) ? 72 : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (max((arr_11 [i_0]), (arr_10 [i_0] [7] [i_2] [i_2]))) : (((arr_13 [i_2] [i_1] [i_1] [i_0]) & -171317426)))));
                    var_20 = 171317426;
                    var_21 = (arr_7 [i_2] [i_2] [i_2] [i_1]);
                }
            }
        }
    }
    var_22 *= ((39 % ((((var_9 ? 175 : var_6))))));
    var_23 = (min(-15, ((min(((var_8 ? 379171209 : var_18)), ((min(22484, var_1))))))));
    var_24 = ((var_11 ? (9666 + 442202756) : (var_6 ^ -2146959360)));
    #pragma endscop
}
