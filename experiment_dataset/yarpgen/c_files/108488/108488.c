/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, (((18993 ? -18994 : 3309833596)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, -10650215469058898614));
                    var_15 = (!15101571271707064722);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [8] [i_2] [2] [2] [1] = (-9219 ? (((arr_1 [i_2]) ? var_9 : var_4)) : var_6);
                        var_16 = (max(var_16, ((((~1226637695) || (((~(max(32759, var_10))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (((arr_9 [i_4 + 1] [i_0 - 1] [1] [i_0 - 1]) ? var_12 : var_2));
                        var_18 = (~var_11);
                        var_19 = (max(var_19, var_7));
                    }
                    arr_15 [i_2] [i_2] [i_2] [16] = arr_1 [4];
                    arr_16 [i_2] [i_2] [i_2] [i_0 - 1] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
