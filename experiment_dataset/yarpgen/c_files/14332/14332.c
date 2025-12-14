/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((1 >= var_3) >= 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 += (min(((max(0, (!var_9)))), (((var_8 ? -28642 : 1)))));
                    var_12 = arr_3 [1];
                    arr_7 [i_2] = ((((((arr_4 [i_0] [i_1] [i_0]) ? (arr_4 [i_1] [i_1] [i_1]) : ((1 / (arr_6 [i_0] [i_1] [i_2])))))) ? (min(((32155 ? 28641 : 1)), 0)) : ((-(arr_3 [i_0])))));
                    arr_8 [i_2] [i_1] [i_1] = ((((((arr_6 [i_0] [i_0] [i_0]) & -1))) ? ((min((arr_5 [i_2]), (arr_2 [i_0] [i_1])))) : (arr_1 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_13 = 1;
                                var_14 = (max(var_14, -10741));
                                var_15 = ((((((arr_13 [i_4]) * -1)) + (arr_12 [i_4] [1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_16 -= (((((arr_19 [i_3 + 1] [2] [i_3 + 1] [i_3 + 3]) & (arr_22 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1]))) & 1));
                                var_17 *= (arr_25 [i_8]);
                            }
                        }
                    }
                    var_18 *= arr_0 [i_5] [i_3];
                    var_19 = 7803;
                }
            }
        }
    }
    #pragma endscop
}
