/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (min(var_15, var_2));
    var_16 = var_0;
    var_17 = ((var_6 ? ((-((7234564080064539327 ? var_1 : var_9)))) : (var_6 < 32767)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = ((((((arr_5 [i_1] [i_0 + 2]) ? ((var_3 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : var_13)) : (arr_9 [i_1 - 1] [i_1])))) ? ((-19075 ? (arr_4 [i_1 - 1] [i_2 + 1]) : (((arr_6 [i_1] [i_1]) ? var_0 : (arr_0 [i_0] [i_1]))))) : (max((((arr_0 [i_0] [i_1]) ? var_1 : (arr_0 [i_0] [i_1]))), (arr_1 [i_3])))));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = ((var_7 ? ((((arr_6 [i_1] [i_2 - 1]) ? (arr_0 [i_1] [i_1]) : ((var_7 ^ (arr_2 [i_2])))))) : (arr_6 [i_1] [i_1])));
                    }
                    var_19 = (arr_1 [i_0]);
                    var_20 = ((((((arr_2 [i_0 - 2]) * (arr_2 [i_0 + 2])))) ? (((-2147483647 - 1) ? 0 : 2579004671)) : (12 / -2147483619)));
                    var_21 = (arr_1 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
