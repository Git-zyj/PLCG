/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_15 + 9223372036854775807) >> (((max(var_14, (max(var_5, var_11)))) - 6402497264307438743))));
    var_18 = (((max(((1359283689 ? var_1 : 63349)), var_6)) >> (var_0 - 21)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = var_10;
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [16] = ((((((max(0, (arr_0 [7])))) ? var_4 : var_3))) ? (max(var_2, -7399573006109877177)) : var_3);
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((~(max(((var_0 ? var_9 : (arr_6 [i_0] [i_3]))), (arr_1 [i_0])))));
                            var_20 = (arr_1 [i_0]);
                        }
                    }
                }
                var_21 = (-(max((arr_5 [i_0 + 1] [i_0] [i_1] [i_1 - 1]), (arr_5 [i_0 + 1] [i_1] [i_0] [i_1 + 1]))));
                var_22 = (var_10 || 7399573006109877161);
            }
        }
    }
    var_23 = ((var_11 - ((((7399573006109877177 ? var_6 : var_5)) & (!var_14)))));
    #pragma endscop
}
