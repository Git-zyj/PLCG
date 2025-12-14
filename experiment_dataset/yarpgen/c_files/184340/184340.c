/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = arr_1 [i_0];
        arr_2 [i_0] = ((+(((!3094825368) / (((arr_0 [i_0] [i_0]) * var_8))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = 1610110990;
        var_11 = -63716333;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_12 = 1610110990;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_6] [i_5] [i_3] [i_3] [i_2] = 1610110990;
                            arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_6] = (~1312621564);
                            arr_23 [i_2] [i_2] [i_3] [i_2] [i_2] = ((11006 ? var_0 : ((var_2 - (arr_17 [19] [19] [19] [i_5] [i_6] [i_6])))));
                            arr_24 [i_2] [i_5] [i_2] [i_3] [i_6] = 3584;
                            arr_25 [i_2] [i_2] [i_3] = var_0;
                        }
                    }
                }
            }
        }
        arr_26 [i_2] [i_2] = (((((arr_15 [i_2]) + 2147483647)) >> (var_7 - 3194516073463050488)));
    }
    var_13 = var_6;
    var_14 = -927453595;
    var_15 = var_8;
    var_16 = ((var_3 ? var_0 : ((var_1 ? var_4 : -12702))));
    #pragma endscop
}
