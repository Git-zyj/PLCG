/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (!-119);
                    arr_8 [16] [i_1] [i_2 - 1] [13] = ((-((+(min((arr_6 [i_0] [i_0]), 1934030635))))));
                    arr_9 [i_0] [i_1] [i_2 + 1] [i_1] = (((min((((-32767 - 1) - (arr_1 [i_0] [i_0]))), var_13)) < ((~(((-32767 - 1) / (arr_1 [i_0] [i_1])))))));
                }
            }
        }
        arr_10 [i_0] [i_0] = 7;
        arr_11 [i_0] = (((arr_5 [i_0] [21]) ^ ((var_7 ^ ((var_8 ? var_4 : -123))))));
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((+(((~var_16) / (~14147)))));
        arr_15 [1] [i_3] = ((var_3 ^ (arr_13 [i_3] [i_3])));
        var_20 = ((~(((!-2231) ? -32761 : 1013528060))));
        var_21 *= (((!(arr_12 [i_3]))));
    }
    var_22 = ((var_9 ? ((var_11 ? var_3 : var_9)) : ((min(13, 56754)))));
    #pragma endscop
}
