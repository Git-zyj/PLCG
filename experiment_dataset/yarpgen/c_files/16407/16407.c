/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((min(var_0, 1)) * ((max(1, var_5)))))), (max((((1 ? 1 : var_5))), 2575381584174132096))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 ^= (min((max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)), 1)), ((1 ? ((min((arr_1 [i_0] [i_0]), -64))) : (((648372055 != (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_12 = (-9223372036854775807 - 1);
            arr_5 [i_1 + 1] [i_0 + 2] [i_0] = (max((811 << 0), ((((max(-1, 1))) ? (arr_0 [i_0 - 1] [i_0 + 2]) : ((((1 && (arr_3 [i_0 + 1] [i_1 + 1])))))))));
        }
        var_13 = (69 & -98);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_14 = (((((arr_8 [i_2]) && (arr_1 [i_2] [i_2]))) ? 4 : 1));
        var_15 -= (arr_0 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_16 = 775170768;
                    var_17 = ((min((arr_9 [i_3]), ((min(1, -545341946))))));
                }
            }
        }
        arr_15 [i_3] [0] = (min((min(-1733572825, ((1 >> (1125899906842623 - 1125899906842613))))), -7152347655021692050));
    }
    #pragma endscop
}
