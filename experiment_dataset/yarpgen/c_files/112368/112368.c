/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (max(var_17, (((var_4 >= (arr_5 [i_0] [i_0]))))));
            var_18 = (max(var_18, (((var_6 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_1] [i_1]))))));
            arr_8 [i_0] = (!-27872);
        }
        var_19 = (max(var_19, (((-2147483637 ? 1 : 32767)))));

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_2] [i_0] [i_0] |= -2147483642;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 = (((((((max((-9223372036854775807 - 1), var_7))) ? (((((arr_11 [i_0] [i_0] [i_0]) == (-9223372036854775807 - 1))))) : var_16))) ? (arr_3 [i_0] [i_0]) : 9656));
                        var_21 ^= (max((arr_7 [i_2 - 3] [i_2 + 1]), (((arr_14 [i_0] [i_2] [i_0]) ? -2147483635 : 1))));
                    }
                }
            }
            arr_20 [i_2] |= (arr_5 [i_0] [i_2 - 1]);
        }
    }
    var_22 = (max(var_22, (var_14 == var_1)));
    #pragma endscop
}
