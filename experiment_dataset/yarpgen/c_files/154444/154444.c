/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(250, (-58 && var_7)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (~-105);
        var_19 = ((var_3 >> ((((-79 ? (~20) : var_5)) + 34))));
    }
    var_20 = ((((((58 == -58) | var_8))) % var_11));
    var_21 -= (max((max(var_13, 4205824512)), 112));
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] = ((+(max((arr_9 [i_1 - 1] [i_2 + 1] [i_3 - 1]), (arr_11 [i_3] [i_1 + 1] [10] [i_3])))));
                    arr_13 [i_3] [13] = ((((var_8 / ((-58 ? var_16 : var_6)))) | (151 && 17874259932863144963)));
                }
            }
        }
    }
    #pragma endscop
}
