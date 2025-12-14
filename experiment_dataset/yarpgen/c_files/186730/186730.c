/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((~1) ? var_5 : var_7)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_10 = ((8507158935500874186 ? 189 : 1));
                    var_11 = (max(var_11, (max((((arr_6 [i_1 + 3] [i_1 + 2] [i_2] [6]) ? (arr_7 [i_1 + 3] [i_2]) : (arr_7 [i_1 + 1] [i_2]))), 1))));
                    arr_8 [8] [i_0] [i_0] = (((((var_9 >= (max(83, var_0))))) & (((-7801287551659312861 == (arr_0 [1] [13]))))));
                    var_12 = (min(var_12, (((-(arr_1 [i_0]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [11] [i_0] = (((arr_3 [i_0] [i_0]) ? var_4 : 1));
                    arr_12 [i_3] [i_0] [i_0] [i_0] = (9223372036854775807 ^ 65535);
                    var_13 *= (var_5 < -9223372036854775793);
                    var_14 = (((var_3 + 9223372036854775807) >> (var_7 - 173)));
                }
                arr_13 [i_0] = var_4;
            }
        }
    }
    var_15 |= ((~((var_3 ? 17097 : var_3))));
    #pragma endscop
}
