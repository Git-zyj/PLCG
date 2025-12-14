/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 &= (arr_1 [i_0]);
        var_18 = (((-9223372036854775807 - 1) ? var_10 : (arr_1 [10])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((2147483647 ? -103 : 0));
                    arr_6 [i_2] [i_2] [i_2] &= (((arr_5 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 3]) ? (arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1]) : (arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1])));
                    var_20 = (arr_3 [i_0] [i_1 + 1] [i_2]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = ((var_0 == (-32767 - 1)));
        var_21 |= (arr_2 [i_3 - 2]);
    }
    var_22 = (max(var_22, ((((min(var_10, var_4)) != (min(var_9, ((var_6 ? -813448200 : 40826)))))))));
    #pragma endscop
}
