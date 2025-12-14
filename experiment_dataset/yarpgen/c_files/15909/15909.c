/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(((max(var_2, var_6))), ((var_8 ? var_1 : var_3)))));
    var_11 = ((var_5 ? var_3 : (-var_7 && var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((max(var_7, (arr_2 [i_0 + 1] [i_0] [i_0])))) ? (max((max((arr_1 [i_0]), 18446744073709551615)), (arr_1 [i_1 + 1]))) : (max((arr_2 [i_0] [i_0 - 1] [i_0]), (arr_0 [i_1 - 3]))));
                arr_5 [i_0 - 1] [i_1] = (max((max((arr_3 [i_1]), (arr_1 [i_1]))), -var_1));
                arr_6 [i_1 + 3] [i_0] [i_0] = (((arr_2 [i_0 + 1] [i_0 + 1] [i_0]) & (max(var_8, 2147483647))));
            }
        }
    }
    var_13 = (0 / 1);
    #pragma endscop
}
