/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_0] [i_0])));
        var_21 = 0;
        arr_2 [i_0] = (((((var_7 ? var_10 : var_19))) ? (((((arr_1 [i_0] [i_0]) < var_12)))) : 5));
        var_22 = (min(var_22, (((((arr_1 [i_0] [i_0]) + 9223372036854775807)) << (((((arr_1 [i_0] [i_0]) + 8517767156329566783)) - 19))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            {
                var_23 = var_14;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_24 -= (((-5 > 17) || (((-(~11707))))));
                            var_25 = (var_4 ? (arr_1 [i_2] [13]) : (max((max(19, var_8)), ((var_8 ? (arr_10 [i_4] [i_4] [i_3] [i_4]) : (arr_7 [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
