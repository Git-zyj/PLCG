/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = 605210017341868684;
                var_13 |= (arr_3 [i_1] [i_1]);
                arr_7 [i_0] [i_1] = 80;
                var_14 = 10039057248945664643;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (((((var_9 ? -164814578 : (arr_10 [i_4 + 1] [i_4 - 3] [i_1] [i_4] [i_4 - 1])))) + ((min(var_3, 2806815102)))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [11] [i_1] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                var_16 = ((((((~59580) ? (min((arr_13 [8] [i_5] [4] [i_6] [i_6] [i_6] [4]), var_0)) : (arr_13 [2] [i_5] [2] [i_5] [i_5] [i_5] [i_5])))) ? (-100 - -100) : (arr_21 [i_5] [i_6] [7])));
                arr_22 [i_5] = 26252;
            }
        }
    }
    var_17 = (!var_9);
    #pragma endscop
}
