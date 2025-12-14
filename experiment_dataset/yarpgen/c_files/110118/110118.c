/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((var_1 ? var_0 : var_7));
                arr_8 [4] [i_1 + 2] = (((((var_5 ? var_11 : var_12))) ? ((var_8 ? var_9 : var_11)) : (((var_7 ? var_16 : var_15)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_13 [i_2] |= (var_12 ? var_15 : var_11);
        arr_14 [i_2] [i_2] = (((((var_4 ? var_13 : var_3))) ? var_11 : var_0));
        var_17 ^= var_3;
        arr_15 [i_2] = var_9;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_19 [i_3] [i_3] &= var_1;
        arr_20 [i_3] [i_3] &= var_1;
    }
    var_18 &= var_0;
    var_19 = ((var_15 ? var_0 : var_4));
    #pragma endscop
}
