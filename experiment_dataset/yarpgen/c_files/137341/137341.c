/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                var_18 = (((((62207 % ((1217251457240588300 ? (arr_11 [1] [0]) : (arr_6 [10] [i_1] [i_3] [7])))))) ? (arr_8 [i_1] [i_2] [i_1] [i_4]) : (((-(arr_0 [4]))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (((((arr_11 [0] [i_0 + 1]) * (arr_11 [10] [i_0 + 1]))) + -127));
                arr_15 [2] [i_0] [2] |= (max((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2]), (((-9223372036854775796 != (arr_11 [1] [1]))))));
            }
        }
    }
    var_19 = (~179);
    var_20 = var_11;
    #pragma endscop
}
