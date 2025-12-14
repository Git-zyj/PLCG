/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((~var_11) ? (((~(var_6 ^ var_1)))) : ((((var_1 ? var_3 : var_12)) | (max(-3411303356366065003, var_2))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, (((((max(var_5, (arr_2 [i_0])))) - ((100 ? var_9 : 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (var_8 % var_11);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (((max((arr_2 [i_0]), ((100 ? var_8 : (arr_3 [i_2]))))) % var_5));
                    var_18 = (arr_2 [i_2]);
                    arr_10 [i_0] [i_0] [i_0] [10] = 1;
                }
            }
        }
        arr_11 [i_0] = 0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_19 = (max(var_19, (((arr_12 [i_3]) >= 1))));
        var_20 ^= 96;
    }
    #pragma endscop
}
