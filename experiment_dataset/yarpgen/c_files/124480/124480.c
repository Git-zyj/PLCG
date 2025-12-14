/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((((((min(-1431839702320940148, 964198934498326379))) ? ((var_8 ? 964198934498326375 : 479986811121255657)) : 1955700301084045936)) <= var_3));
                    arr_10 [i_0] [i_0] [i_0] = var_8;
                    var_14 = (((((var_3 ? 964198934498326367 : -964198934498326388)) | ((0 ? var_12 : (arr_7 [i_0] [1]))))));
                    var_15 = (~((~(arr_3 [i_0]))));
                    var_16 = ((((!var_10) ? (min((arr_8 [i_0] [i_0] [i_0]), 964198934498326379)) : (((((arr_4 [i_0] [8] [8]) || var_4)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            {
                var_17 = min(((1 ? 964198934498326379 : (max((arr_12 [i_3]), var_13)))), ((min(0, var_10))));
                var_18 += var_6;
                var_19 += (max(((((min(var_7, 3828346239))) ? (min((arr_18 [4] [i_4]), -964198934498326373)) : (var_9 && var_3))), (max((min(-964198934498326387, (arr_18 [4] [4]))), (((1 - (arr_14 [1] [1]))))))));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
