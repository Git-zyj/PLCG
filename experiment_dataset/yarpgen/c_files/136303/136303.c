/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~15) ? var_6 : var_0)) > var_12));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = ((((-(arr_3 [6])))) ? (((((arr_3 [i_0]) * (arr_3 [i_1 + 1]))) ^ var_10)) : (arr_0 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 = (max(4095, var_8));
                            arr_10 [i_0] [0] [i_0] [4] |= (arr_1 [i_0 + 2] [i_2]);
                        }
                    }
                }
                var_17 = var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_18 += (((arr_14 [i_5] [i_5]) / (((((36 ? 0 : 61441))) ? (arr_15 [i_4] [i_4] [i_4]) : (var_9 % 61436)))));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] [i_5] [i_6] [i_5] [i_7] = max((arr_15 [i_5] [i_5] [i_5]), (((arr_15 [i_5] [i_5] [i_5]) ? (arr_22 [i_5] [i_5] [i_5] [i_5]) : ((-36 & (arr_22 [3] [i_5] [i_5] [i_5]))))));
                            var_19 = (var_10 * var_0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
