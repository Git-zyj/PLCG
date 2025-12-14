/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= -var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (2305843009213693952 ? ((((var_14 ? var_4 : var_3)))) : (min((arr_0 [i_0]), 2305843009213693952)));
        var_22 = arr_0 [i_0];
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_23 = (arr_2 [i_2] [i_1]);
                var_24 = var_13;
                var_25 = arr_0 [i_2];
            }
        }
    }
    #pragma endscop
}
