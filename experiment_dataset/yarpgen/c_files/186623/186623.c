/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 = ((~((((arr_1 [i_0]) == (arr_0 [i_0 - 2]))))));
        var_18 = -65535;
        arr_2 [i_0] = 15;
        var_19 = (2760594454941794767 | 18);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 &= (((var_16 & 15686149618767756833) ? ((var_12 ? (-32767 - 1) : var_13)) : 32766));
                    var_21 = (((-32767 + 2147483647) >> ((0 ? var_10 : var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 |= var_9;
                                var_23 = ((!(arr_7 [i_1 + 1] [i_3] [23] [i_4 + 1])));
                                var_24 = (((arr_1 [i_0]) ? -32767 : var_15));
                                var_25 = (((arr_10 [i_4 + 2] [23] [10] [23] [i_4 - 2]) | -32766));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (~(arr_8 [i_0] [i_1]));
                }
            }
        }
    }
    var_26 = (min((var_9 >= var_14), var_1));
    var_27 = (var_12 << (((var_12 + 4202938713789886608) - 26)));
    #pragma endscop
}
