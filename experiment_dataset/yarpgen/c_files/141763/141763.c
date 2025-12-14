/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] [i_0] = ((-(-75575101 + -66)));
        var_20 = var_8;
        var_21 = (~6081643675925373949);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = var_11;
        var_23 = ((16777215 ? (arr_0 [i_1]) : -1));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_24 += (arr_1 [i_2] [8]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = (arr_0 [i_2 - 2]);
            arr_13 [i_2] [i_3] [i_3] = (arr_2 [18]);
            arr_14 [i_2] = (arr_0 [i_2 - 1]);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 = var_9;
                        arr_21 [6] [i_3] [i_3] [i_2] [i_5] = (((arr_2 [i_5]) ? (arr_11 [i_2 + 1] [i_4 - 1]) : 8191));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_24 [i_2] [i_2] = var_10;
            var_27 = (!1284247484);
        }
        arr_25 [i_2] = var_8;
        arr_26 [i_2] = (((((arr_11 [i_2 - 2] [i_2 + 2]) ? 18341 : (arr_11 [i_2 - 1] [i_2 + 1])))) % (~var_10));
        arr_27 [i_2] = (arr_20 [i_2] [i_2] [16] [i_2]);
    }
    #pragma endscop
}
