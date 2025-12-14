/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(var_0, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = (13993233268338350143 | 9673);
                            var_13 = (((arr_8 [i_0 - 3] [8] [8]) || ((((arr_6 [7] [i_1 - 3] [i_1] [i_1]) ? (var_0 > 577021670) : var_6)))));
                            var_14 = 1;
                        }
                    }
                }
                var_15 = (min((((arr_4 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_4 [i_1 - 3] [i_1 + 1] [0] [i_1]) : (arr_4 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1]))), (arr_4 [i_1 - 2] [i_1 - 1] [12] [i_1 - 1])));
                var_16 = var_2;
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
