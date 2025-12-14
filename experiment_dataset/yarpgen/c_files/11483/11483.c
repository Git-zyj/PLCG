/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += ((-(!21615)));
        var_14 = (((((23256610 ? var_2 : 8755861049247046918))) ? -851597091 : (arr_1 [i_0] [3])));
        var_15 = 2896406542;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_16 = (((arr_6 [i_1]) * 2047));
                    var_17 ^= 2;
                    arr_9 [i_3] [1] [i_3] [5] = -4271710678;
                }
            }
        }
        var_18 = ((var_7 ? (arr_2 [i_1]) : 28));
    }
    #pragma endscop
}
