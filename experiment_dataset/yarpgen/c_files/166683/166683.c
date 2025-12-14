/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(((255 ? var_2 : var_14)), var_13)), var_17));
    var_21 = ((min(var_1, -8)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = (-1 || -255);
        var_23 = ((!(((0 ? 134217728 : 0)))));
        arr_3 [i_0] [i_0] = ((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (~33151) : ((var_5 ? 1 : 1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_24 = var_16;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_25 = var_18;
                        arr_11 [19] [i_1] = var_2;
                        arr_12 [3] [i_1] [21] [17] = ((!(arr_10 [23] [23] [1])));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_26 = 14073363775333759834;
                            arr_17 [i_0] [i_1] [i_1] = ((~(arr_9 [i_1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
