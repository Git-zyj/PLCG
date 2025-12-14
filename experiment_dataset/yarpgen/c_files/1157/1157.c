/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_19 = (((((var_17 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1]) : 5641));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_1] &= (((arr_4 [i_1 + 1] [i_2 - 1] [i_2 - 1]) ? var_16 : (arr_4 [i_1 + 1] [i_2] [i_2 - 1])));
                        var_20 = (~var_18);
                        var_21 = (min(var_21, (((var_0 ? var_17 : var_12)))));
                    }
                }
            }
        }
        var_22 ^= ((-(arr_0 [i_0])));
        var_23 = (max(var_23, (arr_2 [i_0] [i_0] [14])));
        var_24 = ((-(!var_8)));
        arr_10 [i_0] [20] |= var_13;
    }
    var_25 = (max((((~(var_6 && var_17)))), var_18));
    var_26 = var_6;
    #pragma endscop
}
