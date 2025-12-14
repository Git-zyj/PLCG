/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_16));
    var_21 *= var_16;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (max(var_22, ((((((arr_4 [i_0] [i_0] [i_0]) && 15350)) ? ((2706868976 ? var_12 : (arr_4 [i_1] [i_1] [i_1]))) : (arr_0 [i_1]))))));
            arr_5 [i_1] = ((~(arr_1 [i_1])));
            var_23 = (max(var_23, (arr_4 [i_0] [i_0] [i_1])));
            arr_6 [12] &= (((arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_1] [i_1] [i_0 - 3]) : (((-2504 + (arr_0 [i_1]))))));
        }
        var_24 = (arr_3 [i_0 - 2] [i_0 - 3]);
    }
    #pragma endscop
}
