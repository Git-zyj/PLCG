/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((((((arr_4 [i_0] [i_1] [i_0]) <= (arr_4 [1] [i_0] [i_1]))))) / var_3));
                var_19 = (((((8756656948721707950 ? 16 : 1))) ? 1 : 41305));
                arr_6 [i_1] [1] [3] = (((((var_4 ? var_14 : var_15)) & var_0)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2] [1] [i_3] [i_4] = var_15;
                    var_20 ^= ((((arr_1 [i_2]) ? (arr_10 [i_2] [i_3]) : (arr_1 [i_2]))));
                    var_21 = ((((arr_12 [i_4 - 1] [i_4] [i_4 + 1]) ? (arr_4 [i_4] [i_4 + 1] [i_4]) : var_6)));
                    arr_16 [i_2] [i_3] [i_4] = ((((arr_0 [i_4 - 1]) ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 + 1]))));
                    var_22 = (((((var_13 << (var_5 - 211)))) ? (arr_14 [i_2] [i_3] [i_2]) : (((arr_13 [i_2] [i_2] [i_2] [i_2]) ? (arr_14 [i_2] [i_3] [i_4 + 1]) : var_2))));
                }
            }
        }
    }
    var_23 = var_14;
    #pragma endscop
}
