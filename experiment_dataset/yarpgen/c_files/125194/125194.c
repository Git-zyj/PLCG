/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 &= arr_0 [10];
        arr_2 [i_0] = var_7;
        var_18 += (arr_1 [12]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 = (max(var_19, (arr_5 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 = var_7;
            var_21 = (max(var_21, 1));
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_22 |= var_14;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [8] [i_4] [i_3] [i_5] [12] = var_8;
                        var_23 = (min(var_23, 1150703774314017972));
                        var_24 = 1150703774314017972;
                        arr_23 [i_3] [i_3] [i_5] [i_6] [i_3] = 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        var_25 = (arr_1 [12]);
        arr_26 [i_7] = var_3;
        arr_27 [i_7] = arr_4 [i_7] [i_7 - 2];
    }
    var_26 &= 0;
    #pragma endscop
}
