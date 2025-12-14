/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (((((min(var_0, var_16)))) ? (var_5 / var_12) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((max(36551, (arr_1 [i_2 - 1] [i_2 - 3]))));
                    var_21 ^= (((!(((1 ? 1 : 1))))) ? var_16 : (max(((max((arr_2 [i_2]), 2042312071))), ((var_7 ? (arr_1 [i_0] [i_1]) : -7184020144192059988)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_22 = (max(var_22, (((-var_6 ? (((arr_11 [i_4 - 1] [i_3 + 1]) ? (arr_11 [i_4 - 1] [i_3 + 1]) : var_1)) : ((var_2 ^ (arr_11 [i_4 - 1] [i_3 - 3]))))))));
                var_23 = var_10;
                var_24 = (min(var_24, ((max(((((arr_7 [i_3 - 2]) ? -1651 : var_6))), ((~(arr_11 [i_3] [i_3 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
