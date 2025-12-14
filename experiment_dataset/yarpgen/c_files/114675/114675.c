/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = ((-((var_4 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 2])))));
                        var_18 = (((arr_6 [4] [4] [4]) != (arr_3 [i_0])));
                    }
                }
            }
        }
        var_19 = (((-26225 + 2147483647) << (((((arr_8 [i_0 - 1] [7] [i_0 + 1] [i_0]) ? (-309460263 * 4294967287) : (((arr_2 [i_0] [i_0]) ? 1125899906842623 : (arr_0 [i_0]))))) - 2785142367))));
    }
    var_20 = ((var_11 ? ((-((var_12 ? var_6 : var_4)))) : var_16));
    #pragma endscop
}
