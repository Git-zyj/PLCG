/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2] [i_0] = (((min((arr_5 [i_0] [i_1 + 1] [i_2] [i_2 - 1]), (arr_7 [i_1 + 1] [i_2 + 2] [i_0] [i_1 + 1]))) / ((var_9 ? ((max(460628231, var_4))) : (min(var_6, var_0))))));
                    var_12 = (((((((-8776957073428094820 + 9223372036854775807) << (((-460628228 + 460628260) - 32))))) ? (arr_1 [i_1 - 1] [i_1 - 1]) : -2147483637)));
                }
            }
        }
        arr_9 [i_0] = ((((((max((arr_0 [i_0] [i_0]), 460628250)) + (var_2 - 2147483616)))) ? (((((-2147483637 ? var_5 : 99))) ? 49 : -var_3)) : (37 < 92)));
    }
    var_13 = (460628231 && 23839);
    var_14 = (~((((min(var_8, -460628235))) ? var_9 : var_2)));

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_15 = (((max(((-(arr_4 [i_3] [i_3]))), (arr_2 [i_3] [i_3 - 1] [i_3]))) < (((((58 ? (arr_6 [i_3] [i_3] [i_3 + 1] [i_3]) : 99))) * 18446744073709551615))));
        var_16 = 100;
        arr_12 [i_3 + 1] [i_3] = -8776957073428094820;
    }
    var_17 = var_6;
    #pragma endscop
}
