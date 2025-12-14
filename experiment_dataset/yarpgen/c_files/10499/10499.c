/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_0]);
                var_14 = var_11;
            }
        }
    }
    var_15 ^= (!var_4);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = -103;
                    var_17 = ((arr_8 [i_2] [i_2]) ? ((var_12 ? (arr_2 [i_2]) : (arr_12 [i_2] [i_3] [i_4]))) : ((((((((arr_6 [i_2]) ? 0 : 0))) <= ((var_12 ? (arr_13 [i_2] [i_2] [i_2]) : (arr_12 [i_2] [i_2] [i_2]))))))));
                }
            }
        }
    }
    var_18 = (((-var_11 * var_12) / var_4));
    var_19 = -var_7;
    #pragma endscop
}
