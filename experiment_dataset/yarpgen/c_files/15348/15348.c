/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = (-1953517192 - 1);
        var_16 = (((arr_1 [i_0]) < (arr_1 [i_0])));
        arr_5 [i_0] = (-1 | 155);
        var_17 = var_9;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (!-1953517192);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_2] = (max(((-(258642642 & 1))), 57955));
                        arr_17 [i_2] [i_2] = (((1 / 248) % (arr_7 [i_1])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [i_1] [0] [i_2] [i_3] [i_4 + 2] [i_5] [i_5] &= (((((!-34) & (!988813656))) << (var_0 - 117)));
                            arr_22 [i_2] [i_2] [1] [i_5] [i_5] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_19 = -1256433644;
    var_20 = (max(14433, 31));
    #pragma endscop
}
