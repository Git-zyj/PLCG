/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 &= (arr_9 [4]);
                            var_12 = ((((((arr_2 [i_0 - 3] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [i_0 + 2] [i_0])))) ? (((-20209 ? var_7 : -20209))) : (((0 ? (arr_9 [i_0]) : 2040)))));
                        }
                    }
                }
                var_13 = 39789;
                var_14 = (((15 ? (arr_5 [i_0]) : var_4)));
                var_15 = ((var_3 ? (arr_10 [i_0 - 3] [i_0] [i_0] [i_0 + 2] [i_0 - 1]) : (arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 3])));
                var_16 &= (arr_10 [i_0] [i_0] [20] [i_0 + 1] [i_0 - 3]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_13 [13] [13] = ((var_7 ? 39789 : (arr_1 [4])));
        var_17 = var_3;

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_18 = (max(var_18, (((55 ? ((0 ? var_4 : var_6)) : ((1362039306 ? (arr_4 [6] [1] [i_5]) : 127)))))));
            arr_17 [i_5] [i_4] [i_4] &= (((4611686018427387903 ? var_8 : 17203898248327636984)));
            var_19 = var_6;
            var_20 = (((var_3 ? var_7 : var_0)));
        }
    }
    #pragma endscop
}
