/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!var_4) && var_13))) - var_0));
    var_15 = (((~-12731) ? ((var_8 << (var_7 - 6867099960126999554))) : ((var_8 << (var_12 - 7795)))));
    var_16 = ((var_0 - ((3974338113289447385 << (-var_6 - 3878447457808712657)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (255 & var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = (((arr_7 [i_2] [i_2]) | 23570));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = (var_4 & 2);
                }
            }
        }
        arr_10 [i_0] = var_9;
    }
    #pragma endscop
}
