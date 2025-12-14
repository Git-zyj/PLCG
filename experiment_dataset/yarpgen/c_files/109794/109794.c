/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = ((var_18 - ((max((var_3 | var_9), var_17)))));
        var_20 |= min((min(((var_12 ? var_5 : var_17)), var_7)), ((max(var_12, var_6))));
        arr_2 [i_0] [i_0 + 1] |= (((min(var_6, var_3)) <= (((0 ? 22332 : 163)))));
    }
    var_21 = (min(2097151, 16383));
    var_22 = var_10;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_23 = (((((max(var_14, var_7)) + 2147483647)) >> (min(0, 7488913140101151351))));
                    var_24 = (((var_4 / var_15) > ((((((var_9 ? var_8 : var_6))) ? ((var_9 ? var_10 : var_10)) : var_7)))));
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((((var_17 ? ((var_10 ? var_5 : var_4)) : var_18)) != (var_8 | var_4)));
                }
            }
        }
    }
    #pragma endscop
}
