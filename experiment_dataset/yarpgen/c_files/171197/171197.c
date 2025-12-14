/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((var_1 + var_1), 218));
    var_14 = ((((((((var_11 ? var_6 : var_8))) ? 1 : (var_4 < var_0)))) ? (((((-1428983028591989018 ? 536739840 : 33406))) ? var_8 : (max(16008446731326240287, var_9)))) : ((((((var_7 ? var_10 : 33423))) + (-9223372036854775807 - 1))))));
    var_15 = (min(var_15, ((max(var_1, var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (arr_7 [9] [i_1] [i_2 - 3] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 ^= (((!62673723) % ((max(48, var_5)))));
                                var_17 = (((arr_12 [i_3] [i_1 - 2] [i_2 - 1]) ? (var_5 ^ var_9) : ((max((var_11 && var_6), (arr_5 [i_4] [3]))))));
                                arr_15 [8] [0] [i_2] [i_1 - 2] [i_0] = (~1);
                                var_18 = ((var_0 ? (arr_13 [i_0] [i_1 - 1] [1] [i_3] [i_4]) : (~var_10)));
                                var_19 = (max((arr_6 [i_1] [i_2] [i_1 - 2]), ((((((arr_14 [i_0] [i_2] [i_3] [i_4]) ? var_1 : var_12)) - (((var_3 ? var_5 : var_9))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
