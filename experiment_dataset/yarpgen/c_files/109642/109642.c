/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = var_0;
        var_12 -= (((arr_0 [i_0]) == ((((((arr_0 [i_0]) > var_4))) ^ var_5))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_13 = (((((134217728 != 134217710) << (-1 + 11))) > (1 / -134217729)));
                var_14 -= (((arr_3 [i_1]) << (var_1 - 21)));
                arr_8 [i_1] [i_2] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((((((var_6 ? 255 : 32767))) ? (19 & 10514585651973384196) : (134217728 ^ 18090279401336095658))) << (6672 == -134217729))))));
                            arr_14 [i_2] [i_2] [i_3] [i_4 + 1] [i_2] = (arr_6 [i_2] [i_2]);
                        }
                    }
                }
                arr_15 [i_1] [i_2] = var_1;
            }
        }
    }
    var_16 *= ((((((var_2 ? var_4 : var_1)) | var_2))) + (((((var_5 ? var_5 : var_9))) ? (var_6 - var_3) : (((1607913283 ? -32753 : 134217728))))));
    #pragma endscop
}
