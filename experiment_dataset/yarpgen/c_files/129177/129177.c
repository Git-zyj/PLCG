/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((arr_4 [i_0] [i_1]) ? (max(((0 ? (arr_2 [i_0] [i_1] [i_1]) : 1)), var_10)) : (((var_7 ? ((var_10 ? var_9 : (arr_1 [i_0]))) : var_10))));
                var_13 ^= ((~((var_1 ? (arr_4 [i_1 - 1] [i_1]) : (arr_1 [8])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_3 [i_0 + 1] [i_0 - 3] [i_0]) / (-2147483647 - 1)));
                            var_15 = (((arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 3]) >= (max(3, (arr_2 [i_0 - 3] [i_0 - 2] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_16 *= var_0;
    #pragma endscop
}
