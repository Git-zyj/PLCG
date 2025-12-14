/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [8] = (((((4294967289 ? var_6 : (arr_0 [i_0 - 1] [i_0 + 2])))) ? ((min((arr_0 [i_0 + 1] [i_0 - 1]), 0))) : (arr_0 [i_0 + 2] [i_0 - 1])));
        arr_3 [i_0] = (max(((max(var_15, -70))), var_11));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [21] [i_1] = (((!(arr_4 [i_1] [i_1]))));
        arr_9 [6] = -1367758527;
        var_18 = (min(var_18, (arr_4 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_2] = 9223372036854775807;
                arr_17 [i_2] = ((min((arr_5 [i_3]), ((var_2 ? (arr_15 [1]) : var_7)))));
                arr_18 [9] [i_2] [i_3] = (((((~(arr_4 [i_2] [i_2])))) ? (((var_15 ? var_2 : (arr_6 [i_2] [i_2])))) : var_16));
                var_19 -= (((arr_7 [i_2]) % (max(var_8, (~var_13)))));
            }
        }
    }
    #pragma endscop
}
