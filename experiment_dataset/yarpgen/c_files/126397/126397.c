/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(28, var_7)));
    var_19 = (min(var_19, (((var_8 ^ (var_10 < var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((arr_3 [i_0] [i_0] [i_1]) ? (min(1, (arr_0 [i_0]))) : 43288)) % 7959659497422354225));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = (max((((14130 ? 43 : 43288))), (((arr_3 [i_2 + 2] [i_2 + 1] [i_2 + 1]) ^ (arr_1 [i_2 + 1] [i_2 + 2])))));
                            var_22 = (max(var_22, (arr_3 [i_3] [0] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_23 = -32;
    var_24 = ((((22243 / 28) - ((232 ? var_11 : 1)))));
    #pragma endscop
}
